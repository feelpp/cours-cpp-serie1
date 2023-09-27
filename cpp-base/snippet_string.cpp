#include <iostream>
#include <format>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   std::string s1; // s1 contient 0 caractère
std::string s2 = "hello, world"; // s2 contient 8 caractères
std::string s3(10,'*'); // s3 contient 10 étoiles (*)
std::cout << "s3=" << s3 << "\n";
std::string s4 = s2+s3; // concatenation de s2 et s3
std::cout << "s4=" << s4 << "\n";
std::string s5(s2, 3, 2); // s5 contient "lo"
std::cout << "s5=" << s5 << "\n";
bool isEqual = (s2 == s3); // comparaison
std::cout << "isEqual=" << isEqual << "\n";
const char* s6 = s2.c_str(); // recupere le tableau de caractère sous-jacent.
std::cout << "s6=" << s6 << "\n";
}