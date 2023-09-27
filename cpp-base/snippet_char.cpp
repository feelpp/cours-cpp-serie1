#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   char hola[5]= { 'h','o','l','a','\0'};
std::cout << "hola=" << hola << "\n";
char toto[] = "toto";
std::cout << "toto=" << toto << "\n";
}