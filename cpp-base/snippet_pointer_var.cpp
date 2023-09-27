#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   int * var = new int(10); // <1>
*var = 13; // <2>
delete var; // <3>
}