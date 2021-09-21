#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
char* my_strcat(char* dest, char* src) {
	char* ret = dest;
	while (*dest) {
		dest++;
	}
	while (*dest++ = *src++) {
		;
	}
	return ret;
}
int main() {
	char arr1[20] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	return 0;
}