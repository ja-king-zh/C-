#define _CRT_SECURE_NO_WARNINGS 1

#include<time.h>
#include<iostream>
using namespace std;
////猜数字
//int main() {
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	int a;
//	while (1) {
//		cin >> a;
//		if (a < num) {
//			cout << "猜小了" << endl;
//		}
//		else if (a > num) {
//			cout << "猜大了" << endl;
//		}
//		else {
//			cout << "猜对了" << endl;
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