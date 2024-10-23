#pragma once
#include <iostream>
#include <stdexcept>

class Array {
private:
    int size;
    int* data;
public:
    explicit Array(int size);
    Array(const Array& source);
    ~Array();
    Array& operator=(const Array& source);

    // Overloaded Subscript Operator
    int& operator[](std::size_t index) const;

    // Overloaded Dereference (Indirection) Operator
    int& operator*() const;
};
