#include <iostream>
#include <vector>
#define pb push_back
using namespace std;
template <class T> using V = vector<T>;

struct Graph{
  int n;
  V<V<int>> g;

  Graph(int N){
    n = N;
    g.resize(n);
  }

  void add_edge(int u, int v, bool undirected = true){
    g[u].pb(v);
    if (undirected) 
      g[v].pb(u);
  }
};