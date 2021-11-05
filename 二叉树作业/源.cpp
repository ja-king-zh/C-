#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
#include<queue>
typedef char Elemtype;
typedef struct tree {
	tree* left;
	tree* right;
	Elemtype data;
}tree;
tree* prevcreate() {
	tree* T = (tree*)malloc(sizeof(tree));
	char a;
	cin >> a;
	if (a == '*') {
		T = NULL;
	}
	else {
		T->data = a;
		T->left = prevcreate();
		T->right = prevcreate();
	}
	return T;
}
void shanchu(tree** T) {
	if (*T) {
		shanchu(&(*T)->left);
		s4hanchu(&(*T)->right);
		free(*T);
		*T = NULL;
	}
}
void Delete(tree** T, char a) {
	if ((*T) == NULL)return;
	if ((*T)->data == a) {
		shanchu(T);
	}
	if ((*T)) {
		Delete(&(*T)->left, a);
		Delete(&(*T)->right, a);
	}

}
void print(tree* T) {
	if (T) {
		cout << T->data;
		print(T->left);
		print(T->right);
	}
}
void floor(tree* T) {
	queue<tree*>q;
	tree* tmp;
	if (T == NULL)return;
	q.push(T);
	while (!q.empty()) {
		tmp = q.front();
		cout << tmp->data;
		q.pop();
		if (tmp->left) {
			q.push(tmp->left);
		}
		if (tmp->right) {
			q.push(tmp->right);
		}

	}
}
int main() {
	tree* T;
	T = prevcreate();
	floor(T);
	/*char a;
	cin >> a;
	Delete(&T, a);
	print(T);*/
	return 0;
}









//typedef struct tree {
//	tree* left;
//	tree* right;
//	Elemtype data;
//}tree;
//tree* prevcreate() {
//	char a;
//	tree* T;
//	T = (tree*)malloc(sizeof(tree));
//	cin >> a;
//	if (a == '#') {
//		T = NULL;
//	}
//	else {
//		T->data = a;
//		T->left = prevcreate();
//		T->right = prevcreate();
//	}
//	return T;
//}
//void shifang(tree** T) {
//	if (*T) {
//		shifang(&(*T)->left);
//		shifang(&(*T)->right);
//		delete(*T);
//		*T = NULL;
//	}
//}
//void Delete(tree** T,char a) {
//	if ((*T) == NULL)return;
//	if (a == (*T)->data) {
//		shifang(T);
//	}
//	if (*T) {
//		Delete(&(*T)->left, a);
//		Delete(&(*T)->right, a);
//	}
//}
//void prevprint(tree* T) {
//	if (T) {
//		cout << T->data;
//		prevprint(T->left);
//		prevprint(T->right);
//	}
//}
//int main() {
//	tree* T = NULL;
//	T=prevcreate();
//	char a;
//	cin >> a;
//	Delete(&T,a);
//	prevprint(T);
//	return 0;
//}








////4.
//typedef struct tree {
//	tree* left;
//	tree* right;
//	Elemtype data;
//}tree;
//tree* createtree() {
//	tree* T = (tree*)malloc(sizeof(tree));
//	Elemtype a;
//	cin >> a;
//	if (a == '#') {
//		T = NULL;
//	}
//	else {
//		T->data = a;
//		T->left = createtree();
//		T->right = createtree();
//	}
//	return T;
//}
//int x;
//void prevvist(tree* T) {
//	if (T == NULL)return;
//	x--;
//	if (x == 0&&T!=NULL)printf("%c",T->data);
//	prevvist(T->left);
//	prevvist(T->right);
//	
//}
//
//int main() {
//	tree* T;
//	T = createtree();
//	cin >> x;
//	prevvist(T);
//	return 0;
//}




//3.
//typedef struct tree {
//	tree* left;
//	tree* right;
//	Elemtype data;
//}tree;
//tree* createtree() {
//	tree* T = (tree*)malloc(sizeof(tree));
//	Elemtype a;
//	cin >> a;
//	if (a == '*') {
//		T = NULL;
//	}
//	else {
//		T->data = a;
//		T->left = createtree();
//		T->right = createtree();
//	}
//	return T;
//}
//void print(tree* T) {
//	queue<tree*>q;
//	tree* tmp = (tree*)malloc(sizeof(tree));
//	if (T == NULL)return;
//	q.push(T);
//	while (!q.empty()) {
//		tmp = q.front();
//		printf("%c ", tmp->data);
//		if (tmp->left) {
//			q.push(tmp->left);
//		}
//		if (tmp->right) {
//			q.push(tmp->right);
//		}
//		q.pop();
//	}
//}
//int main() {
//	tree* T;
//	T=createtree();
//	print(T);
//	return 0;
//}

//2.
//typedef char Elemtype;
//typedef struct tree {
//	tree* left;
//	tree* right;
//	Elemtype data;
//}tree;
//tree*prevorder() {
//	Elemtype a;
//	tree* T = (tree*)malloc(sizeof(tree));
//	scanf("%c,", &a);
//	if (a == ' ') {
//		T = NULL;
//	}
//	else {
//		T->data = a;
//		T->left = prevorder();
//		T->right = prevorder();
//	}
//	return T;
//}
//void prevvist(tree* T) {
//	if (T == NULL)return;
//	cout << T->data;
//	prevvist(T->left);
//	prevvist(T->right);
//}
//void midvist(tree* T) {
//	if (T == NULL)return;
//	midvist(T->left);
//	cout << T->data;
//	midvist(T->right);
//}
//void swaptree(tree* T) {
//	tree* tmp = (tree*)malloc(sizeof(tree));
//	if (T) {
//		
//		tmp = T->left;
//		T->left = T->right;
//		T->right = tmp;
//		swaptree(T->left);
//		swaptree(T->right);
//	}
//	else
//		return;
//	
//}
//int main() {
//	tree* T;
//	T = prevorder();
//	swaptree(T);
//	prevvist(T);
//	printf("\n");
//	midvist(T);
//}




////1.
//typedef char Elemtype;
//typedef struct tree {
//	tree* zuo;
//	tree* you;
//	Elemtype data;
//}tree;
//tree* createtree() {
//	tree* T;
//	Elemtype a;
//	scanf("%c ", &a);
//	if (a == '*') {
//		T = NULL;
//	}
//	else {
//		T = (tree*)malloc(sizeof(tree));
//		T->data = a;
//		T->zuo = createtree();
//		T->you = createtree();
//	}
//	return T;
//}
//int find(tree* T,int x) {
//	queue<tree*>q;
//	tree* tmp = (tree*)malloc(sizeof(tree));
//	if (T == NULL)
//		return 0;
//	else
//		q.push(T);
//	int count = 0,width=0;
//	while (!q.empty()) {
//		count++;
//		if (q.size() == x) return count;
//		width = q.size();
//		for (int i = 0;i < width;i++) {
//			tmp = q.front();
//			q.pop();
//			if (tmp->zuo) {
//				q.push(tmp->zuo);
//			}
//			if (tmp->you) {
//				q.push(tmp->zuo);
//			}
//		}
//	}
//	return 0;
//}
//int main() {
//	tree* T;
//	T = createtree();
//	int n;
//	scanf("%d", &n);
//	printf("%d", find(T,n));
//}