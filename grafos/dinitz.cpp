#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#define pb push_back
#define sz(v) (int)size(v)
using namespace std;

template <typename T>
struct Graph{
  struct edge{
    int from, to; 
    T cap, flow;
  };
  vector<edge> edges; 
  vector<vector<int>> adj;
  vector<int> lvl, parent, ptr;
  vector<bool> vis;
  T inf = numeric_limits<T>::max();
  int n; 

  Graph(int N){
    n = N;
    lvl.resize(n);
    ptr.resize(n);
    adj.resize(n);
    parent.resize(n);
  }
  
  void addEdge(int a, int b, T c){
    adj[a].pb(sz(edges));
    edges.pb({a, b, c, 0});
    adj[b].pb(sz(edges));
    edges.pb({b, a, 0, 0});
  }

  bool reachable(int u, int v){
    lvl = vector<int>(n, -1);
    queue<int> bfs;
    lvl[u] = 0;
    bfs.push(u);
    while (sz(bfs)) {
      int a = bfs.front();
      bfs.pop();
      for (int & e : adj[a]) {
	      int b = edges[e].to;
	      T c = edges[e].cap, f = edges[e].flow;
        if (c - f > 0 and lvl[b] == -1) {
	        parent[b] = e;
	        lvl[b] = lvl[a] + 1;
	        bfs.push(b);
	      }
      }
    }
    return lvl[v] != -1;
  }

  T dfs(int a, int v, T F) {
    if (a == v) return F;
    if (vis[a] or F == 0) return 0;
    vis[a] = true;
    for (int&i = ptr[a]; i < sz(adj[a]); ++i) {
      int b = edges[adj[a][i]].to;
      T c = edges[adj[a][i]].cap, f = edges[adj[a][i]].flow;
      if (vis[b] or c - f <= 0 or lvl[b] != lvl[a] + 1) continue;
      if (T ff = dfs(b, v, min(F, c - f))) 
        return ff;
    }
    return 0;
  }
  
  T dinitz(int u, int v) {
    T res = 0;
    while (reachable(u, v)) {
      ptr = vector<int>(n);
      vis = vector<bool>(n);
      while (int d = dfs(u, v, inf)) {
        res += d;
	      int me = v;
	      while (me != u) {
	        edges[parent[me]].flow += d;
	        edges[parent[me] ^ 1].flow -= d;
	        me = edges[parent[me]].from;
	      }
      }
    }
    return res;
  }
};
