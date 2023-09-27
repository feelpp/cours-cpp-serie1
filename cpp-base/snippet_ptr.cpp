#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   void *ptr = nullptr;
int a = 26;
ptr = &a;
std::cout << "ptr=" << ptr << " *ptr=" << *static_cast<int*>(ptr) << "\n"; // <1>
char b = 'b';
ptr = &b;
std::cout << "ptr=" << ptr << " *ptr=" << *static_cast<char*>(ptr) << "\n"; // <2>
}