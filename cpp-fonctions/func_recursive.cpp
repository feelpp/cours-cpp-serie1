#include <iostream>

int fibo(int n) // <1>
{
  if ( n<=2 )
    return 1;
  else
    return fibo(n-1)+fibo(n-2); // <2>
}
int main()
{
  std::cout << "fibo(10)=" << fibo(10) << "\n";
  return 0;
}