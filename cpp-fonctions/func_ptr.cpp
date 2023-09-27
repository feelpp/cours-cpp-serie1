#include <iostream>
int f(int x, int y) { return x+y; } // <1>

int main()
{
  int (*pf)(int, int) = f; // <2>
  std::cout << "pf(2,3) = " << pf(2,3) << "\n"; // <3>
  return 0;
}