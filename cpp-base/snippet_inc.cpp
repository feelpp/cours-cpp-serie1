#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   int a = 3;
int b = a++; // <1>
std::cout << "a=" << a << " b=" << b << "\n";
assert( a == 4 && b == 3 );
int c = ++a; // <2>
++c; // <3>
std::cout << "c=" << c << " a=" << a << "\n";
assert( c == 6 && a == 5 );
}