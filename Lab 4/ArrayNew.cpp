#include "ArrayNew.h"

ArrayNew::ArrayNew(int size) : size(size), data(std::make_unique<int[]>(size)) { //creates the array with a unique point with given size
    std::cout << "Created an array with Unique Pointer of size " << size << "." << std::endl;
}

ArrayNew::ArrayNew(const ArrayNew& source) : size(source.size), data(std::make_unique<int[]>(source.size)) { //Goes through and creates a copy of the array with a unique pointer
    std::cout << "Created an array copy with Unique Pointer." << std::endl;
    for (int i = 0; i < size; ++i) {
        data[i] = source.data[i]; // Deep copy
    }
}

ArrayNew::~ArrayNew() { //Deletes all objects
    std::cout << "Deleted an array with Unique Pointer of size " << size << "." << std::endl;
}

//int main (){
//    ArrayNew arrayNew1(2);
//    ArrayNew arrayNew2(arrayNew1); // Testing copy constructor for ArrayNew
//    return 0;
//} // arrayNew1 and arrayNew2 go out of scope here