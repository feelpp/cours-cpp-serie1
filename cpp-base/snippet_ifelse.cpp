#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   auto myfunc1 = [](int a) { return a*a; }; // <1>
auto myfunc2 = [](int a)  { return a*a*a; }; // <2>
int a=8,b=0;
if( a >0 ) // <3>
{
    int c=8; b = 2*c;
}
else // <4>
{
    b=9;
}
std::cout << "b=" << b << "\n";
b = ( a > 0 )? 3 : 6; // <5>
std::cout << "b=" << b << "\n";
int c = ( a > 0 )?myfunc1(3): myfunc2(6); // <6>
std::cout << "c=" << c << "\n";
}