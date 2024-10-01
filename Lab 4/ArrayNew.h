#pragma once
#include <iostream>
#include <memory>
using namespace std;

class ArrayNew {
	private:
		int size;
		std::unique_ptr<int> data;
	public:
		ArrayNew(int size) : {size};
		ArrayNew(const ArrayNew& source); //copy constructor
		//smart arrays do not need deconstructors
}

