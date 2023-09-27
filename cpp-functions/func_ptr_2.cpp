#include <iostream>
#include <cmath>
#include <cstdlib>

double carre(double x) { return x*x;}
double inverse(double x) { return 1/x;}
double racine(double x) { return sqrt(x);}

double minimum(double a,double b, double(*f)(double))  // <1>
{
  double min(100000);
  for(double x=a;  x<b ; x+= 0.01)
    min = min< f(x)? min : f(x);
  return min;
}

int main(int argc, char **argv)
{
  int type = atoi(argv[1]); // <2>

  double(*monPointeur)(double);
  switch(type){  // on défini le pointeur sur la fonction choisie
  case 1:  monPointeur = carre; break;
  case 2:  monPointeur = inverse;  break;
  case 3:  monPointeur = racine;  break;
  }
  std::cout << "Le minimum de la fonction entre 2 et 3 est: " << minimum(2,3,monPointeur) << "\n";
  return 0;
}