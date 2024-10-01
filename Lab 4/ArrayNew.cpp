#include "ArrayNew.h"
#include <memory>

ArrayNew::ArrayNew(int size) : {size} {
	std::cout << "Create an array with Unique Pointer." << std::endl;
	data = make_unique<int[](size)>;
}

ArrayNew::ArrayNew(const ArrayNew& source) {
	std::cout << "Create an array copy." << std::endl;
	data = make_unique<int[]>(source.data);
}


int main() {
	ArrayNew array1(2);
	ArrayNew array2(array1);
}
