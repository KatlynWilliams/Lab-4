#pragma once
#include <iostream>
using namespace std;

class Array
{
private:
	int size;
	int* data;
public:
	explicit Array(int size);
	Array(const Array& source);
	~Array();
};

