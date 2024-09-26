#include "Array.h"


Array::~Array() {
	delete[] data;
}