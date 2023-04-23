#include "array.h"

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