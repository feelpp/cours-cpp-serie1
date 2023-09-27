#include <cmath>
#include <iostream>

int main()
{
  double a=std::sin(3.14); // <1>
  double b=std::cos(2);
  double c=std::exp(3);
  double d=std::pow(c,3);
  double e=std::sqrt(5.17);
  double pi = 4*std::atan(1.0); // <2>
  std::cout << "pi=" << pi << "\n";
  return 0;
}