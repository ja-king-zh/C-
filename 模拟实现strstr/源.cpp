#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
char* my_strstr(char* arr1,char* arr2) {
	char* cp = arr1;
	char* s1, * s2;
	while (*cp) {
		s1 = cp;
		s2 = arr2;
		while (*s1 && *s2 && *s1 == *s2) {
			s1++;
			s2++;
		}
		if (*s2 == '\0') {
			return cp;
		}
		cp++;
	}
	return NULL;
}
int main() {
	char arr1[] = "happy today";
	char arr2[] = "to";
	char* ret = my_strstr(arr1, arr2);
	if (ret != NULL)
		cout << ret << endl;
	else
		cout << "ÕÒ²»µ½" << endl;
	return 0;
}