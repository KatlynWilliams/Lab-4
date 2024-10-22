#include "Array.h"
#include <iostream>
using namespace std;

Array::Array(int size){ //create array with constructor
	std::cout << "Create an array." << std::endl;
	this->size = size;
	data = new int(size);
}

Array::Array(const Array& source) { //creates a copy of the array and assigns it to a new array
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

Array& Array::operator=(const Array& source) {
	std::cout << "Assigning array to a copy of an object." << std::endl;
	this->size = source.size;
	for (int i = 0; i < size; i++) {
		this->data[i] = source.data[i];
	}
	return *this;
}

//Subscript Operator
int& Array::operator[](std::size_t index) const{
	if (index >= size) {
		throw std::out_of_range("index");
	}
	return data[index];
}

//Dereference(Indirection) Operator
int& Array::operator*() const {
	return *data;
}

