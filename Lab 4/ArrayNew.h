#pragma once
#include <iostream>
#include <memory>

class ArrayNew {
private:
    int size;
    std::unique_ptr<int[]> data; //uses standard library type unique pointer as data's type.

public:
    ArrayNew(int size);
    ArrayNew(const ArrayNew& source); // Copy constructor
    ~ArrayNew(); // Destructor 
};
