#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   int i = 26;
int &j = i;
j = 33; // i == j == 33
std::cout << "i=" << i << " j=" << j << "\n";
int * pi = &i;
int * pj = &j; // adresses identiques pi == pj
std::cout << "pi=" << pi << " pj=" << pj << "\n";
}