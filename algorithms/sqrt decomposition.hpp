#include <vector>
#include <cmath>
 
using namespace std;
 
struct query{
  int l, r;
};
 
template <typename T>
T add(T a, T b) {
  return a + b;
}
 
template <typename T>
vector<T> solve(vector<T> &a, vector<query> &queries){
  int n = (int) a.size(); 
  int q = (int) queries.size(); 
  int s = (int) sqrt(n) + 1;
  vector<T> b(s);
  vector<T> ans(q);
  for (int i = 0, k = 0; i < n; i += s, ++k) 
    for (int j = i; j < min(n, i + s); ++j)
      b[k] = add(b[k], a[j]);
  for (int idx = 0; idx < q; ++idx) {
    int l = queries[idx].l, r = queries[idx].r;
    int bl = l / s, br = r / s;
    T sum = 0;
    if (bl == br) {
      for (int i = l; i <= r; ++i) 
        sum = add(sum, a[i]);
    } else {
      for (int i = l; i <= (bl + 1) * s - 1; ++i) 
        sum = add(sum, a[i]);
      for (int k = bl + 1; k <= br - 1; ++k) 
        sum = add(sum, b[k]);
      for (int i = s * br; i <= r; ++i)
        sum = add(sum, a[i]);
    }
    ans[idx] = sum;
  }
  return ans;
}
