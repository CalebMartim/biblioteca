/* 
  [Notas]:
  Estamos considerando a árvore enraizada em 1. 
  g[u] é a lista de adjacência do vértice u.
  Rode pre() antes de usar as funções dist e lca.
*/ 

#include <vector>
using namespace std;
template <typename T> using V = vector<T>;

const int N = 2e5 + 1;
const int K = 32 - __builtin_clz(N); // floor(log2(N)) + 1
V<int> g[N];
int anc[N][K + 1];
int d[N];

void dfs(int u, int p) {
  d[u] = d[p] + 1;
  anc[u][0] = p;
  for (int & v : g[u])
    if (v != p)	
      dfs(v, u);  
}

void pre(){
  dfs(1, 1);
  for (int i = 1; i <= K; ++i)
    for (int u = 1; u < N; ++u)
      anc[u][i] = anc[anc[u][i - 1]][i - 1];			
}

int lca(int a, int b) {
  if (d[b] > d[a])
    swap(a, b);
  int dif = d[a] - d[b];
  for (int i = K; i >= 0; --i)
    if (dif & (1 << i)) 
      a = anc[a][i];
  if (a == b)
    return a;
  for (int i = K; i >= 0; --i) 
    if (anc[a][i] != anc[b][i]) {
      a = anc[a][i];
      b = anc[b][i];
    }
  return anc[a][0];
}

int dist(int a, int b) {
  return d[a] + d[b] - 2 * d[lca(a, b)];
}
