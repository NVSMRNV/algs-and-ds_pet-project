#pragma once
#include <iostream>

class Matrix {
	int cols_, rows_;
	int** matrix_;
public:
	Matrix();
	Matrix(int rows, int cols);
	Matrix(const Matrix& matrix);
	~Matrix();

	int rows() const;
	int cols() const;
};