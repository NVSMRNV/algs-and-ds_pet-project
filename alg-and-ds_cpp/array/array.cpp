#include "array.h"

// overloaded output operator
std::ostream& operator<<(std::ostream& os, const Array& array) {
	os << '[';
	for (int i = 0; i < array.size_; i++) {
		os << array.array_[i] << (i == array.size_ - 1 ? "" : ", ");
	}
	os << ']';
	return os;
}

// overloaded input operator
std::istream& operator>>(std::istream& is, const Array& array) {
	for (int i = 0; i < array.size_; i++) {
		is >> array.array_[i];
	}
	return is;
}

// default constructor
Array::Array(){
	size_ = 1;
	array_ = new int[size_];
	array_[0] = 0;
}

// constructor with parameters
Array::Array(int size){
	size_ = (size > 0 ? size : 1);
	array_ = new int[size_];
	for (int i = 0; i < size_; i++) {
		array_[i] = 0;
	}
}

// copy constructor
Array::Array(const Array& array){
	size_ = array.size_;
	array_ = new int[size_];
	for (int i = 0; i < size_; i++) {
		array_[i] = array.array_[i];
	}
}

// destructor
Array::~Array(){
	delete[] array_;
}