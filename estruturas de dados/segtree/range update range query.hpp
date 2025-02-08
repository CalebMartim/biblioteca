#include <vector>
using namespace std;

template <typename T> using V = vector<T>;
using ll = long long;

template <typename T>
struct LazySegTree{
  int n; 
  V<T> t, prop;

  LazySegTree(int N) {
    n = N;
    t.assign(4*n, 0); // #!
    prop.assign(4*n, 0); // #!
  }

  T merge(T a, T b) {
    return a + b; // #!
  }

  void push(int u, int l, int r){ // #!
    t[u] += prop[u];
    if (l != r) {
      prop[2*u] += prop[u];
      prop[2*u + 1] += prop[u];
    }
    prop[u] = 0;
  }

  void update(int a, int b, T x, int l, int r, int u) {
    push(u, l, r);
    if (a <= l and r <= b) {
      prop[u] += x; // #!
      push(u, l, r);
      return;
    } 
    if (l > b or r < a) {
      return;
    }
    int mid = (l + r) / 2;
    update(a, b, x, l, mid, 2*u);
    update(a, b, x, mid + 1, r, 2*u + 1);
    t[u] = merge(t[2*u], t[2*u + 1]);
  }
  
  T query(int a, int b, int l, int r, int u) {
    push(u, l, r);
    if (a <= l and r <= b) {
      return t[u];
    }
    if (l > b or r < a) {
      return 0; // #!
    }
    int mid = (l + r) / 2;
    return merge(query(a, b, l, mid, 2*u), 
        query(a, b, mid + 1, r, 2*u + 1));
  }

  void update(int a, int b, T x) {
    update(a, b, x, 0, n - 1, 1);
  }

  T query(int a, int b) {
    return query(a, b, 0, n - 1, 1);
  }
};
