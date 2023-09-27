#include <iostream>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   int a;
std::cout << "Tapez la valeur de a : ";
std::cin >> a;
switch(a) // <1>
{
    case 1 : std::cout << "a vaut 1" << std::endl; break; // <2>
    case 2 : std::cout << "a vaut 2" << std::endl; break; // <3>
    case 3 : std::cout << "a vaut 3" << std::endl; break; // <4>
    default : std::cout << "a ne vaut ni 1, ni 2, ni 3" << std::endl; break; // <5>
}
}