#include <iostream>
#include <string>
#include <string_view>
#include <cassert>

int main()
{
   // un tableau {cpp}
int tableau[]= { 2,3,5,8,13 };
std::cout << "tableau=" << "\n";
for(int i : tableau) // <1>
{
    std::cout << i << "\n";;
}
// parcours partiel du conteneur
std::cout << "tableau [avec break pour m > 5]=" << "\n";
for ( int m : tableau )
{
    if ( m > 5 ) break; // <2>
    std::cout << m << "\n";
}
// tableau de double
double tableau2[]= { 2.1,3.2,5.3,8.4,13.5 };
std::cout << "tableau2=" << "\n";
for(double d : tableau2) // <3>
{
    std::cout << d << "\n";
}
}