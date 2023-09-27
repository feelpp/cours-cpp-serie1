#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = { 1, 2, 3, 4, 5 }; // <1>
    std::cout << "v = ";
    for ( auto i : v ) std::cout << i << " "; // <2>
    std::cout << "\n";
    std::cout << "v + 1 = ";
    std::transform( v.begin(), v.end(), std::ostream_iterator<int>(std::cout," "), [] (int i) { return i+1; } ); // <3>
    std::cout << "\n";
    return 0;
}