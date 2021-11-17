#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


////单链表
//const int N = 1e5 + 10;
//int head, e[N], ne[N], idx;
//
////初始化
//void init() {
//	head = -1;
//	idx = 0;
//}
////头插
//void add_to_head(int x) {
//	e[idx] = x;
//	ne[idx] = head;
//	head = idx;
//	idx++;
//}
////将x插入下标k的后面
//void add(int k, int x) {
//	e[idx] = x;
//	ne[idx] = ne[k];
//	ne[k] = idx;
//	idx++;
//}
////将下标为k的后面一个节点删除
//void remove(int k) {
//	ne[k] = ne[ne[k]];
//}
//int main() {
//
//	return 0;
//}


////双向链表
//const int N = 1e5 + 10;
//int l[N], r[N], idx, e[N];
//
//void init() {
//	//0表示左端点，1表示右端点
//	r[0] = 1;
//	l[1] = 0;
//	idx = 2;
//}
////在第k号点右边插入x
//void add(int k, int x) {
//	e[idx] = x;
//	l[idx] = k;
//	r[idx] = r[k];
//	l[r[k]] = idx;
//	r[k] = idx;
//	idx++;
//}
////删除第k个点
//void remove(int k) {
//	r[l[k]] = r[k];
//	l[r[k]] = l[k];
//}
//
//int main() {
//
//	return 0;
//}



