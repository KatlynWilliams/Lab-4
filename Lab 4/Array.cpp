#include "Array.h"
#include <iostream>
using namespace std;

Array::Array(int size){
	std::cout << "Create an array." << std::endl;
	data = new int(size);
}

Array::Array(const Array& source){
	std::cout << "Copying array with copy constructor." << std::endl;
	size = (source.size);
	data = new int(size);
}

Array::~Array() {
	std::cout << "Delete object." << std::endl;
	for (int i = 0; i < size; i++) {
		delete[] data;
	}
}

int main() {
	Array array1(2);
	Array array2(array1);
}
