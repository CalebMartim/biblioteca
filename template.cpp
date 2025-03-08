#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <array>

#define pb push_back
#define sz(v) (int)size(v)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define rbl(x,v) for(auto&x:v)
#define iter(i,b,e) for(int i=(b);i<(e);++i) 
#define reti(i,e,b) for(int i=(e);i>=(b);--i)
#define Tc template<class

#ifdef DEBUG 
#include "debug.hpp"
#else
#define dbg(...)
#define dbg_esp(...)
#endif

using namespace std;
using ll = long long;
using ld = long double;
Tc T>using V=vector<T>;
using ii = array<int,2>;
using pll = array<ll,2>;

void in(string&x){cin>>x;} 
Tc ...T>void in(T&...x){((cin>>x),...);} 
Tc T,Tc _>class C>void in(C<T>&v){for(T&x:v)in(x);} 
Tc T,Tc _>class ...C>void in(C<T>&...v){(in(v),...);} 
Tc T,Tc _>class S,Tc _>class C>void in(C<S<T>>&v){for(S<T>&x:v)in(x);} 

void out(string x){cout<<x<<'\n';}
Tc ...T>void oute(T...x){((cout<<x<<' '),...);}
Tc ...T>void out(T...x){((oute(x)),...);cout<<'\n';}
Tc T,Tc _>class C>void out(C<T>v){for(T x:v)oute(x);cout<<'\n';}
Tc T,Tc _>class ...C>void out(C<T>...v){(out(v),...);}
Tc T,Tc _>class S,Tc _>class C>void out(C<S<T>>v){for(S<T>x:v)out(x);}

int main(){
  cin.tie(nullptr)->sync_with_stdio(false);
  
}
