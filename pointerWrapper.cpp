#include "pointerWrapper.h"
#include <iostream>
//implementation file

using namespace std;

//constructor
pointerWrapper::pointerWrapper(int value) : p(new int(value)) { //allocate memory for value and initialise - RAII
	cout << "Allocating memory for int pointer" << endl;
}

//destructor
pointerWrapper::~pointerWrapper() {
	//check pointer not null
	if (p != nullptr)
	{
		cout << "Releasing memory from int pointer" << endl;
		delete p; //released in destructor
	}
}

void pointerWrapper::print(void)
{
	cout << "Hi, I am a wrapped pointer with value: " << *p << endl;
}