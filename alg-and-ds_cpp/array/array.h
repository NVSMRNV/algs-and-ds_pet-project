#pragma once
#include <iostream>

class Array {
	friend std::ostream& operator<<(std::ostream& os, const Array& array);
	friend std::istream& operator>>(std::istream& is, const Array& array);
private:
	int size_;
	int* array_;
public:
	Array();
	Array(int size);
	Array(const Array& array);
	~Array();

	int size();
	bool empty();
	int* at();
};