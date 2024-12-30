#include <iostream>
template <typename ...T> void dbg_esp(T... x){
  ((std::cout << x << ' '), ...);
}
template <typename ...T> void dbg(T... x){
  (dbg_esp(x), ...);
  std::cout << '\n';
}
