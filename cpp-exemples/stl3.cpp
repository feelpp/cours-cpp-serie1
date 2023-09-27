#include <iostream>
#include <map>
#include <algorithm>

int main()
{
    std::map<std::string,int> m = { { "un", 1 }, { "deux", 2 }, { "trois", 3 } }; // <1>
    std::cout << "m = ";
    for ( auto i : m ) std::cout << i.first << ":" << i.second << " "; // <2>
    std::cout << "\n";
    std::cout << "m[\"un\"] = " << m["un"] << "\n"; // <3>
    return 0;
}