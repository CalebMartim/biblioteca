#include <vector>
using namespace std;

struct Dsu {
  vector<int> dsu;
  Dsu(int N) {
    dsu.resize(N);
    for (int i = 0; i < N; ++i) dsu[i] = i;
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

