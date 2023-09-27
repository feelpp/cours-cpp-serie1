#include <iostream>
void showMe( int a ) // <1>
{
  std::cout << "Je suis un int : " << a << "\n";
}
void showMe( double a ) // <2>
{
  std::cout << "Je suis un double : " << a << "\n";
}
int main()
{
  showMe( 3 );
  showMe( 5.3 );
  return 0;
}