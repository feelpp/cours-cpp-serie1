#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    std::vector<int> v = { 1, 2, 3, 4, 5 }; // <1>
    std::list<int> l = { 1, 2, 3, 4, 5 }; // <2>
    std::cout << "v = ";
    for ( auto i : v ) std::cout << i << " "; // <3>
    std::cout << "\n";
    std::cout << "l = ";
    for ( auto i : l ) std::cout << i << " "; // <4>
    std::cout << "\n";
    std::cout << "v + l = ";
    std::transform( v.begin(), v.end(), l.begin(), std::ostream_iterator<int>(std::cout," "), std::plus<int>() ); // <5>
    std::cout << "\n";
    return 0;
}