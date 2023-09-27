#include <iostream>
int main( int argc, char* argv[] )
{
  std::cout << "argc=" << argc <<"\n";
  for (int k=0;k<argc;++k)
  {
    std::cout << "argv["<<k<<"] : " << argv[k] <<"\n";
  }
  return 0;
}