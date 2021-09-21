#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
void* my_memcpy(void* dest, void* src, size_t count) {
	void* ret = dest;
	while (count--) {
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main() {
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 16);
	return 0;
}