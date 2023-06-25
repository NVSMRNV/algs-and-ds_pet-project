#include "matrix.h"
#include "matrix.h"

Matrix::Matrix() {
	rows_ = 0; cols_ = 0;
	matrix_ = nullptr;
}
Matrix::Matrix(int rows, int cols) {
	rows_ = rows; cols_ = cols;
	matrix_ = new int* [rows];
	for (int y = 0; y < rows_; y++) {
		matrix_[y] = new int[cols_];
	}
}
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
Matrix::~Matrix() {
	for (int y = 0; y < rows_; y++) {
		delete[] matrix_[y];
	}
	delete[] matrix_;
}

int Matrix::rows() const{
	return rows_;
}
int Matrix::cols() const {
	return cols_;
}