#include <vector>
using namespace std;

template <typename T>
struct Bit{
  int n;
  vector<T> t;

  Bit(int N) {
    n = N;
    t.resize(n);
  }

  void add(int i, T d) {
    for (; i < n; i |= i + 1) 
      t[i] += d; //#!
  }

  T sum(int i) {
    T r = 0; //#!
    for (; i >= 0; i &= i + 1, --i) 
      r += t[i]; //#!
    return r;
  }
  
  T sum(int l, int r) {
    return sum(r) - sum(l - 1); //#!
  }
};
