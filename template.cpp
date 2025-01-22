#include <map>
#include <set>
#include <stack>
#include <queue>
#include <array>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define pb push_back
#define ld long double
#define ii array<int,2>
#define pll array<ll,2>
#define Tc template<class
#define sz(v) (int)size(v)
#define rbl(x,v) for(auto x:v)
#define rblr(x,v) for(auto&x:v)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define iter(i,b,e) for(int i=(b);i<(e);++i) 
#define reti(i,e,b) for(int i=(e);i>=(b);--i)
#ifdef DEBUG 
#include "debug.hpp"
#else
#define dbg(...)
#define dbg_esp(...)
#endif
Tc T>using V=vector<T>;
void in(string&x){cin>>x;}
void out(string x){cout<<x<<'\n';}
Tc ...T>void in(T&...x){((cin>>x),...);}
Tc ...T>void oute(T...x){((cout<<x<<' '),...);}
Tc ...T>void out(T...x){((oute(x)),...);cout<<'\n';}
Tc T,Tc _>class C>void in(C<T>&v){for(T&x:v)in(x);}
Tc T,Tc _>class ...C>void in(C<T>&...v){(in(v),...);}
Tc T,Tc _>class C>void out(C<T>v){for(T x:v)oute(x);cout<<'\n';}
Tc T,Tc _>class ...C>void out(C<T>...v){(out(v),...);}
Tc T,Tc _>class S,Tc _>class C>void in(C<S<T>>&v){for(S<T>&x:v)in(x);}
Tc T,Tc _>class S,Tc _>class C>void out(C<S<T>>v){for(S<T>x:v)out(x);}

int main(){
  cin.tie(nullptr)->sync_with_stdio(false);
  
}
