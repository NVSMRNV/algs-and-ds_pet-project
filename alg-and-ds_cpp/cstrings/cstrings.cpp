#include "cstrings.h"

int strlen_(const char* str) {
	int len = 0;
	while (*str) {
		str++; len++;
	}
	return len;
}

int strcmp_(const char* str_1, const char* str_2) {
	while (*str_1 && (*str_1 == *str_2)) {
		str_1++; str_2++;
	} 
	return *str_1 - *str_2;
}