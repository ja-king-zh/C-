#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void* my_memmove(void* dest, void* src, size_t count) {
	void *ret= dest;
	if (src > dest) {
		while (count--) {
			*((char*)dest) = *((char*)src);
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else {
		while (count--) {
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//my_memmove(arr + 2, arr, 16);
	my_memmove(arr, arr + 2, 16);
	return 0;
}