#include <iostream>

void myfunc(int n) {   n = 3; } // <1>

int main()
{
  int k=6;
  std::cout << "[before] k = " << k << "\n";
  myfunc( k );
  std::cout << "[after] k = " << k << "\n";
}