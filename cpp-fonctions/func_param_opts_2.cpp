#include <iostream>
// Prototype avec les valeurs par défaut
int nombreDeSecondes(int heures, int minutes = 0, int secondes = 0); // <1>
// Main
int main()
{
  std::cout << nombreDeSecondes(1, 10, 25) << std::endl;
  return 0;
}
// Définition de la fonction, SANS les valeurs par défaut
int nombreDeSecondes(int heures, int minutes, int secondes) // <2>
{
  int total = 0;
  total = heures * 60 * 60;
  total += minutes * 60;
  total += secondes;
  return total;
}