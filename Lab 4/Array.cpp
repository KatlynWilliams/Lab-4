#include "Array.h"
#include <iostream>
using namespace std;

Array::Array(int size){ //create array with constructor
	std::cout << "Create an array." << std::endl;
	data = new int(size);
}

Array::Array(const Array& source) { //creates a copy of the array and assigns it to a new arrau
	std::cout << "Copying array with copy constructor." << std::endl;
	size = (source.size);
	data = new int(size);
}

Array::~Array() { //Cycles through and deletes all objects.
	std::cout << "Delete object." << std::endl;
	for (int i = 0; i < size; i++) {
		delete[] data;
	}
}


int main() {
	Array array1(2);
	Array array2(array1); // Testing copy constructor for Array
	return 0;
} // array1 and array2 go out of scope here