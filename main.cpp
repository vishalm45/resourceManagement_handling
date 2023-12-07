#include "pointerWrapper.h"
#include <iostream>

using namespace std;

int main(void)
{
    {
        pointerWrapper p(1);
        p.print();
    }

    cout << endl << "Doing other stuff in the program..." << endl << endl;

    pointerWrapper pW(64);
    pW.print();

    return 0;
}