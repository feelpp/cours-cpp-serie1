#include <iostream>

int main()
{
    int n;
    std::cout << "Entrez un nombre positif : "; // <1>
    std::cin >> n; // <2>
    if (n<0)
        std::cerr << "Erreur: Le nombre " << n << " n'est pas positif " << "\n"; // <3>
    else
        std::cout << "Vous avez entré " << n << "\n"; // <4>
    return 0;
}