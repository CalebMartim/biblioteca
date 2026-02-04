#include <vector>
#include <array>
#include <queue>
using namespace std;
#define ll long long
#define ii array<ll, 2>
#define sz(v) (int) v.size()
template <typename T> using V = vector<T>;

const int N = 2e5 + 1;
const ll INF = 0x3f3f3f3f3f3f3f3f;
V<ii> g[N];

V<ll> dijkstra(int x){
  V<bool> vis(N);
  V<ll> dist(N, INF);
  priority_queue<ii, V<ii>, greater<ii>> bfs;
  bfs.push({dist[x] = 0, x});
  while (sz(bfs)) {
    auto [d, u] = bfs.top(); bfs.pop();
    if (vis[u]) continue;
    vis[u] = true;
    for (auto [v, w] : g[u]) 
      if (w + d < dist[v]) {
        dist[v] = w + d;
        bfs.push({dist[v], v});
      }
  }
  return dist;
}
