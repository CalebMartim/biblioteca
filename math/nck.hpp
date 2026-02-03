#include <vector>
#include <cassert>

#include "fast_exponentiation.hpp"

using namespace std;

struct Nck{
  int maxn;
  vector<ll> f, fi;
  
  Nck(int _maxn = (int) 1e6) {
    maxn = _maxn;
    f.resize(maxn + 1);
    fi.resize(maxn + 1);
    f[0] = 1;
    for (int i = 1; i <= maxn; ++i) {
      f[i] = f[i - 1] * i % MOD;
      fi[i] = fexp(f[i], MOD - 2);
    }
  }

  ll operator()(ll n, ll k) {
    assert(k <= n);
    return f[n] * fi[n - k] % MOD * fi[k] % MOD;
  }
};
