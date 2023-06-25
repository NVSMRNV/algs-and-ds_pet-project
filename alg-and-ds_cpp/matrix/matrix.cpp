#include "matrix.h"

// default constructor
Matrix::Matrix() {
	rows_ = 0; cols_ = 0;
	matrix_ = nullptr;
}

// constructor with parameters
Matrix::Matrix(int rows, int cols) {
	rows_ = rows; cols_ = cols;
	matrix_ = new int* [rows];
	for (int y = 0; y < rows_; y++) {
		matrix_[y] = new int[cols_];
	}

	// the matrix is filled with zeros by default
	for (int y = 0; y < rows_; y++) {
		for (int x = 0; x < cols_; x++) {
			matrix_[y][x] = 0;
		}
	}
}

// copy constructor
Matrix::Matrix(const Matrix& matrix) {
	rows_ = matrix.rows_; cols_ = matrix.cols_;
	matrix_ = new int* [rows_];
	for (int y = 0; y < rows_; y++) {
		matrix_[y] = new int[cols_];
	}
	for (int y = 0; y < rows_; y++) {
		for (int x = 0; x < cols_; x++) {
			matrix_[y][x] = matrix.matrix_[y][x];
		}
	}
}

// destructor
Matrix::~Matrix() {
	for (int y = 0; y < rows_; y++) {
		delete[] matrix_[y];
	}
	delete[] matrix_;
}

// to return matrix rows
int Matrix::rows() const{
	return rows_;
}

// to return matrix cols
int Matrix::cols() const {
	return cols_;
}

// to change the value of the matrix element (setter)
void Matrix::set(int row, int col, int value) {
	matrix_[row][col] = value;
}

// to get the value of the matrix element (getter)
int Matrix::get(int row, int col) const {
	return matrix_[row][col];
}

// to fill the matrix from keyboard
void Matrix::fill() {
	printf_s("Fill this matrix %d x %d:\n", rows_, cols_);
	for (int y = 0; y < rows_; y++) {
		for (int x = 0; x < cols_; x++) {
			scanf_s("%d", &matrix_[y][x]);
		}
	}
}

// to print matrix
void Matrix::print() {
	for (int y = 0; y < rows_; y++) {
		for (int x = 0; x < cols_; x++) {
			printf_s("%d ", matrix_[y][x]);
		}
		printf_s("\n");
	}
	printf_s("\n");
}