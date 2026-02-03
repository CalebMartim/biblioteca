using ll = long long;
const int MOD = 1e9 + 7;

inline ll fexp(ll a, ll b) {
  ll r = 1;
  while (b) {
    if (b & 1) 
      r = r * a % MOD;
    a = a * a % MOD;
    b >>= 1;
  }
  return r;
}
