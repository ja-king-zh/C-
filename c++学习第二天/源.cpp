#define _CRT_SECURE_NO_WARNINGS 1

#include<time.h>
#include<iostream>
using namespace std;
////������
//int main() {
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	int a;
//	while (1) {
//		cin >> a;
//		if (a < num) {
//			cout << "��С��" << endl;
//		}
//		else if (a > num) {
//			cout << "�´���" << endl;
//		}
//		else {
//			cout << "�¶���" << endl;
//			break;
//		}
//	}
//	return 0;
//}

int main() {
	char acHello[] = "hello\0world";
	char acNew[15] = { 0 };
	int len = strlen(acNew);
	int a = sizeof(acHello);
	return 0;
}