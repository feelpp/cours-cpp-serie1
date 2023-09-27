#include <iostream>
const int varGlobalConst = 1; int varGlobal;

namespace SomeVariables
{
    const int varGlobalConstNS = 2;
    int varGlobalNS;
}

int main(int argc, char* argv[])
{
    int j = 2;
    if( 1 < argc)
    {
        int i = 1;
        j = i;
    }
    SomeVariables::varGlobalNS = varGlobalConst;
    varGlobal = SomeVariables::varGlobalConstNS;
    std::cout << "j=" << j << " varGlobal=" << varGlobal << "\n";
    return 0;
}