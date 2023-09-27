#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   // The counter variable can be declared in the init-expression
std::cout << "[for (int i = 0; i < 2; i++ )]\n";
for (int i = 0; i < 2; i++ ) // <1>
{
    std::cout << "i = " << i << " \n";
}
// The counter variable can be declared outside the for loop.
std::cout << "[int i = 0; for (; i < 2; i++ )]\n";
int i; for (i = 0; i < 2; i++)  // <2>
{
    std::cout << "i = " << i << "\n";
}
 // The counter variable can be initialized outside the for loop.
int j=0;int k=10;
std::cout << "[int j = 0, k = 0; for (; j < k; j++ )]\n";
for ( ; j < k; j++ ) // <3>
{
    std::cout << "j = " << j << "\n";
}
}