#pragma once

class Array {
private:
	int size_;
	int* array_;
public:
	Array();
	Array(int size);
	Array(const Array& array);
	~Array();
};