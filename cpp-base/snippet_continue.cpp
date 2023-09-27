#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   for (int i = 0; i < 10; i++)
{
    if (i == 5) continue; // <1>
    std::cout << "La variable i vaut: " << i << std::endl;
}
}