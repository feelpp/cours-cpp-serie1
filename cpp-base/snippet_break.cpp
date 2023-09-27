#include <iostream>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   for (int i = 0; i < 10; i++)
{
    std::cout << "La variable i vaut: " << i << std::endl;
    if (i == 5) break; // <1>
}
}