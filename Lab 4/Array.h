#pragma once
class Array
{
private:
	int size;
	int* data;
public:
	explicit Array();
	Array(const Array& source);
	~Array();
};

