#include <iostream>
#include <vector>
#define pb push_back
using namespace std;
template <class T> using V = vector<T>;

struct Graph{
  int n;
  V<V<int>> adj;

  Graph(int N){
    n = N;
    adj.resize(n);
  }

  void add_edge(int u, int v, bool undirected = true){
    adj[u].pb(v);
    if (undirected) 
      adj[v].pb(u);
  }
};