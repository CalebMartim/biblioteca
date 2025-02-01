// WORK IN PROGRESS

#include "graph.hpp"

class DfsTree{
  int n;
  Graph & g;
  V<int> h, dp, up, down, vis;
  DfsTree(Graph & G, int root = 1) : g(G) {
    n = g.n;
    h.resize(n);
    dp.resize(n);
    up.resize(n);
    down.resize(n);
    vis.resize(n);
    dfs(root, root);
  }
  void dfs(int u, int p){
    h[u] = h[p] + 1;
    for (int & v : g.adj[u]) {
      if (v == p) continue;
      if (vis[v]) {
        if (h[v] > h[u]) down[u]++;
        else up[u]++;
      } else {
        dfs(v, u),
        dp[u] += dp[v];
      }
    }
    dp[u] += up[u] - down[u];
  }
  bool is_bridge(int u){
    return dp[u] == 0;
  }
};