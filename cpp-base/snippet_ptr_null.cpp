#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   int *a = 0;
int *b = NULL;
int *c = nullptr; // <1>
std::cout << "a=" << a << " b=" << b << " c=" << c << "\n";
}