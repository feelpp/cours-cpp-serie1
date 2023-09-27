#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   {
    int a = 3;
    a += 5; // <1>
    assert( a == 8 );
    a *= 3; // <2>
    assert( a == 24 );
}
}