#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


////������
//const int N = 1e5 + 10;
//int head, e[N], ne[N], idx;
//
////��ʼ��
//void init() {
//	head = -1;
//	idx = 0;
//}
////ͷ��
//void add_to_head(int x) {
//	e[idx] = x;
//	ne[idx] = head;
//	head = idx;
//	idx++;
//}
////��x�����±�k�ĺ���
//void add(int k, int x) {
//	e[idx] = x;
//	ne[idx] = ne[k];
//	ne[k] = idx;
//	idx++;
//}
////���±�Ϊk�ĺ���һ���ڵ�ɾ��
//void remove(int k) {
//	ne[k] = ne[ne[k]];
//}
//int main() {
//
//	return 0;
//}


////˫������
//const int N = 1e5 + 10;
//int l[N], r[N], idx, e[N];
//
//void init() {
//	//0��ʾ��˵㣬1��ʾ�Ҷ˵�
//	r[0] = 1;
//	l[1] = 0;
//	idx = 2;
//}
////�ڵ�k�ŵ��ұ߲���x
//void add(int k, int x) {
//	e[idx] = x;
//	l[idx] = k;
//	r[idx] = r[k];
//	l[r[k]] = idx;
//	r[k] = idx;
//	idx++;
//}
////ɾ����k����
//void remove(int k) {
//	r[l[k]] = r[k];
//	l[r[k]] = l[k];
//}
//
//int main() {
//
//	return 0;
//}



