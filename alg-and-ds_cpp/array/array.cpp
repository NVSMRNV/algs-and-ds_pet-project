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

// returns the number of elements in the container
int Array::size() {
	return size_;
}

// checks if the container has no elements
bool Array::empty() {
	return size_ == 0;
}

// returns a reference to the element at specified location pos
// with bounds checking
int& Array::at(int index) {
	if (index < 0 || index >= size_) {
		throw std::out_of_range("Index out of range.");
	}
	else {
		return array_[index];
	}
}

// returns a reference to the element at specified location pos 
// no bounds checking is performed. 
int& Array::operator[](int index) { 
	return array_[index];
}

// compares the contents of two arrays
bool Array::operator==(const Array& array) {
	if (size_ != array.size_) {
		return false;
	}
	else {
		for (int i = 0; i < size_; i++) {
			if (array_[i] != array.array_[i]) {
				return false;
			}
		}
		return true;
	}
}

// increases every element of the array with the corresponding element of another array
const Array& Array::operator+= (const Array& array) {
	if (size_ == array.size_) {
		for (int i = 0; i < size_; i++) {
			array_[i] += array.array_[i];
		}
	}
	return *this;
}

// increases every element of the array by the specified value
const Array& Array::operator+= (const int value) {
	for (int i = 0; i < size_; i++) {
		array_[i] += value;
	}
	return *this;
}

// overwrites every element of the array by the corresponding element of another array
const Array& Array::operator=(const Array& array) {
	if (size_ == array.size_) {
		for (int i = 0; i < size_; i++) {
			array_[i] = array.array_[i];
		}
	}
	return *this;
}