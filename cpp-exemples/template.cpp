#include <iostream>
#include <typeinfo>

template<typename T> T max( T const& A, T const& B )  // <1>
{
    std::cout << "Je suis dans la fonction template max<" << typeid(A).name() << ">\n"; // <2>
    return ( A >= B ) ? ( A ) : ( B );
}
int main()
{
    double x=3.12, y=6.3;
    double dmax = max(x,y); // <3>
    std::cout << "dmax=" << dmax << "\n";

    int a=2, b=3;
    int imax = max(a,b); // <4>
    std::cout << "imax=" << imax << "\n";
    return 0;
}