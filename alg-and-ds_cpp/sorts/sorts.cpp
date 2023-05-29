#include "sorts.h"

void swap(int& a, int& b) {
	int tmp = a;
	a = b; b = tmp;
}

void stupidSort(int* a, int n) {
	int i = 0;
	while (i < n - 1) {
		if (a[i] > a[i + 1]) {
			swap(a[i], a[i + 1]);
			i = 0;
		}
		else {
			i++;
		}
	}
}

void bubbleSort(int* a, int n){
	int i = 0;
	while (i < n) {
		int j = 0;
		while (j < n - i - 1) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
			j++;
		}
		i++;
	}
}

void shakerSort(int* a, int n){
	int left, right;
	left = 0; right = n - 1;

	while (left < right) {
		int i = left;
		while (i < right) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
			}
			i++;
		}
		right--;

		int j = right;
		while (j > left) {
			if (a[j] < a[j - 1]) {
				swap(a[j], a[j - 1]);
			}
			j--;
		}
		left++;
	}
}

void oddEvenSort(int* a, int n){
	bool is_sorted = false;
	while (!is_sorted) {
		is_sorted = true;

		int i = 1;
		while (i < n - 1) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				is_sorted = false;
			}
			i += 2;
		}

		int j = 0;
		while (j < n - 1) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				is_sorted = false;
			}
			j += 2;
		}
	}
}

void combSort(int* a, int n){
	double factor = 1.247;
	int step = n / factor;

	while (step >= 1) {
		int i, j;
		i = 0;  j = step;
		while (j < n) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
			i++; j++;
		}
		step /= factor;
	}
}