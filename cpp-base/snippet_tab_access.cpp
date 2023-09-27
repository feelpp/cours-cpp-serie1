#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   int tab[10] = { 1,2,3,4,5,6,7,8,9,10 };
int val1 = tab[5]; // <1>
int val2 = *(tab+5); // <2>
std::cout << "val1=" << val1 << " val2=" << val2 << "\n";
}