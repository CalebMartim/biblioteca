#include <iostream>
#include <vector>
#include <array>
using namespace std;
#define ll long long
#define pb push_back
#define ii array<int,2>
#define pll array<ll,2>
#define Tc template<class
#define sz(v) (int)size(v)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define iter(i,e) for(int i=0;i<e;++i) 
#define reti(i,e) for(int i=e;i>=0;--i)
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
Tc ...T>void out_esp(T...x){((cout<<x<<' '),...);}
Tc ...T>void out(T...x){((out_esp(x)),...);cout<<'\n';}
Tc T,Tc _>class C>void in(C<T>&v){for(T&x:v)in(x);}
Tc T,Tc _>class C>void out(C<T>v){for(T x:v)out_esp(x);cout<<'\n';}
Tc T,Tc _>class S,Tc _>class C>void in(C<S<T>>&v){for(S<T>&x:v)in(x);}
Tc T,Tc _>class S,Tc _>class C>void out(C<S<T>>v){for(S<T>x:v)out(x);}
template<Tc _>class C>void out(C<string> x){for(auto y:x) out_esp(y);out();};

int main(){
  cin.tie(nullptr)->sync_with_stdio(false);
  
}
