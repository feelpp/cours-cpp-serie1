#include <iostream>
inline int max(int i, int j) // <1>
{
    if (i>j) return i;
    else return j;
}
int main()
{
  std::cout << "max(2,3) = " << max(2,3) << "\n"; // <2>
  return 0;
}