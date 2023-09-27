#include <iostream>
#include <cassert>

int myfunc( int a, int b=1 ) { return a*b; }
int main() {
  int res1 = myfunc(2);
  assert( res1 == 2 );
  std::cout << "res1=" << res1 << "\n";
  int res2 = myfunc(3,5);
  assert( res2 == 15 );
  std::cout << "res2=" << res2 << "\n";
  return 0;
}