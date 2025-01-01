#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define pb push_back
#define Tc template <class
#define sz(v) (int) v.size()
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#ifdef DEBUG 
#include "debug.hpp"
#else
#define dbg(...)
#endif
Tc T>using V=vector<T>;
Tc T,class S>using P=pair<T,S>;
void in(string&x){cin>>x;}
void out(string x){cout<<x<<'\n';}
Tc ...T>void in(T&...x){((cin>>x),...);}
Tc ...T>void out_esp(T...x){((cout<<x<<' '),...);}
Tc ...T>void out(T...x){((out_esp(x)),...);cout<<'\n';}
Tc T,Tc _>class C>void in(C<T>&v){for(T&x:v)in(x);}
Tc T,Tc _>class C>void out(C<T>v){for(T x:v)out_esp(x);cout<<'\n';}
Tc T,Tc _>class S,Tc _>class C> void in(C<S<T>>&v){for(S<T>&x:v)in(x);}
Tc T,Tc _>class S,Tc _>class C> void out(C<S<T>>v){for(S<T>x:v)out(x);}
template<Tc _>class C>void out(C<string> x){for(auto y:x) out_esp(y);out();};

int main(){
  cin.tie(nullptr)->sync_with_stdio(false);
  
}
