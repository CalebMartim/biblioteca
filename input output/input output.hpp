#include <bits/stdc++.h>
using namespace std;

#define Tc template <class

void in(string & x){
  cin >> x;
}

void out(string x){
  cout << x << '\n';
}

template <class ...T> 
void in(T&...x){
  ((cin >> x), ...);
}

template <class ...T> 
void oute(T...x){
  ((cout << x << ' '), ...);
}

template <class ...T> 
void out(T...x){
  (oute(x), ...);
  cout << '\n';
}

template <class T, template <class _> class C> 
void in(C<T> & v){
  for(T & x : v)
    in(x);
}

template <class T, template <class _> class ...C> 
void in(C<T> & ...v){
  (in(v), ...);
}

template <class T, template <class _> class C> 
void out(C<T> v){
  for(T x:v)
    oute(x);
  cout<<'\n';
}

template <class T, template <class _> class ...C>
void out(C<T> ...v){
  (out(v), ...);
}

template <class T, template <class _> class S, template <class _> class C>
void in(C<S<T>> & v){
  for(S<T> & x : v)
    in(x);
}

template <class T, template <class _> class S, template <class _> class C>
void out(C<S<T>> v){
  for(S<T> x : v)
    out(x);
}
