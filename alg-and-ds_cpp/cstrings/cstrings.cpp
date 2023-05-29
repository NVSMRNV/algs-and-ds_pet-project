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

void swap_(char& char_1, char& char_2) {
	char tmp = char_1;
	char_1 = char_2;
	char_2 = tmp;
}

void strrverse_(char* str) {
	int len = strlen_(str);
	for(int i = 0, j = len - 1; i < j; i++, j--){
		swap_(str[i], str[j]);
	}
}