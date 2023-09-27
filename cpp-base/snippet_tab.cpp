#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   int * tab = new int[10];  // <1>
tab[3] = 13; // on modifie la case 3 du tableau <2>
std::cout << "tab[3]=" << tab[3] << "\n"; // <3>
delete [] tab; // <4>
}