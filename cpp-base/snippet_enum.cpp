#include <iostream>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   enum couleurs { noir = -2 ,bleu ,vert ,rouge = 5, blanc ,jaune };
couleurs a = couleurs::vert;
std::cout << "couleur vert :" << a << "\n";
}