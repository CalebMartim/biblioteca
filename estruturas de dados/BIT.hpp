#include <vector>
using namespace std;

template <typename T>
struct BIT{
  int n;
  vector<T> t;

  BIT(int N) {
    n = N;
    t.resize(n);
  }

  void add(int i, T d) {
    while (i < n) {
      t[i] += d; //#!
      i |= i + 1;
    }
  }

  T sum(int i) {
    T r = 0; //#!
    while (i >= 0) {
      r += t[i]; //#!
      i &= (i + 1);
      --i;
    }
    return r;
  }
  
  T sum(int l, int r) {
    return sum(r) - sum(l - 1); //#!
  }
};
