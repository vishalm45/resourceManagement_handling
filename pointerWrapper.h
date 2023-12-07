#pragma once
#include <iostream>

using namespace std;


class pointerWrapper
{
public:
    // Constructor
    pointerWrapper(int value);

    // Destructor
    ~pointerWrapper();

    //to print
    void print(void);


private:
    int* p;
}; 
