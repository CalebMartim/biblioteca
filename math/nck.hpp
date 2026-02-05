#include <vector>

#include "fast_exponentiation.hpp"

using namespace std;

struct Nck{
  vector<ll> f, fi;
  
  Nck(int n = (int) 1e6) {
    f.resize(n + 1);
    fi.resize(n + 1);
    f[0] = 1;
    for (int i = 1; i <= n; ++i) 
      f[i] = f[i - 1] * i % MOD;
    fi[n] = fexp(f[n], MOD - 2);
    for (int i = n - 1; i >= 0; --i)
      fi[i] = fi[i + 1] * (i + 1) % MOD;
  }

  ll operator()(ll n, ll k) {
    return f[n] * fi[n - k] % MOD * fi[k] % MOD;
  }
};
