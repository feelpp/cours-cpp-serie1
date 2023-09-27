#include <iostream>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   int i = 0;
do
{
  std::cout << "La valeur de i vaut : " << i << std::endl; i++;
} while (i < 10); // <1>

std::cout << "La valeur finale de i est " << i << std::endl;
}