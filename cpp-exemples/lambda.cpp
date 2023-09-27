#include <iostream>

int main()
{
    auto q = [] () { std::cout << "Je suis une lambda expression\n"; }; //  <1>
    q();

    int a = 2;
    auto p = [&a] ( double d ) { return a*a+d; }; // <2>
    double res1 = p(3.14);
    std::cout << "res1=" << res1 << "\n";
    double res2 = p(5.36);
    std::cout << "res2=" << res2 << "\n";
    return 0;
}