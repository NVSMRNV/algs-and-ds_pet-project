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

	void set(int row, int col, int value);
	int get(int row, int col) const;

	void fill();
	void print();
};