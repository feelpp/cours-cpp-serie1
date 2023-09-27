#include <iostream>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   int i = 0;

while (i < 10) // <1>
{
    std::cout << "La valeur de i est : " << i << std::endl;
    i++;
}

std::cout << "La valeur finale de i est : " << i << std::endl;
}