#include <vector>
using namespace std;

template <class T> struct Segtree{
  int n; vector<T> t;
  Segtree(int N) {
    n = N;
    t.resize(2*n);
  }
  T merge(T a, T b){
    return a + b; // #!
  }
  void update(int i, T x){
    t[i += n] += x; // #!
    while (i > 1) {
        t[i / 2] = merge(t[i], t[i ^ 1]);
        i /= 2;
    }
  }
  T query(int l, int r) {
    T acc = 0; // #!
    for (l += n, r += n; l <= r; l /= 2, r /= 2) {
        if (l % 2) acc = merge(acc, t[l++]);
        if (r % 2 == 0) acc = merge(acc, t[r--]);
    }
    return acc;
  }
};
