#include <vector>
using namespace std;

struct Dsu {
  vector<int> dsu;
  Dsu(int n) {
    dsu.resize(n);
    for (int i = 0; i < n; ++i) dsu[i] = i;
  }

  int rep(int u) {
    return (dsu[u] == u ? u : dsu[u] = rep(dsu[u]));
  }

  void join(int u, int v){
    u = rep(u);
    v = rep(v);
    dsu[v] = u;
  }
};

