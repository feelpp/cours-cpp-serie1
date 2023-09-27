#include <iostream>
#include <string>

std::string f() { return std::string("this is a test!"); }

int main() {
    std::cout << "Hello from C++!" << std::endl;
    std::cout << f() << std::endl;
    return 0;
}