#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
const int N = 110;
int arr[N][N], book[N] = { 0 }, e[N],n;
void dfs(int a) {
	for (int i = 1;i <= n;i++) {
		if (arr[a][i] == 1 && book[i] == 0) {
			book[i] = 1;
			dfs(i);
		}
	}
}
int main() {
	int count=0;
	cin >> n;
	for (int i = 1;i <= n;i++)
		for (int j = 1;j <= n;j++)
			cin >> arr[i][j];
	for (int i = 1;i <= n;i++)
		e[i] = i;
	for (int i = 1;i <= n;i++) {
		if (!book[i]) {
			count++;
			book[i] = 1;
			dfs(i);
		}
	}
	cout << count;
	return 0;
}





//int main() {
//	int n,m;
//	cin >> n;
//	for (int i = 1;i <= n;i++)
//		for (int j = 1;j <= n;j++)
//			arr[i][j] = 0;
//	cin >> m;
//	for (int i = 0;i < m;i++) {
//		int a, b;
//		cin >> a >> b;
//		arr[a+1][b+1] = 1;
//	}
//	for (int i = 1;i <= n;i++) {
//		for (int j = 1;j <= n;j++)
//			cout << arr[i][j] << ' ';
//		cout << endl;
//	}
//	return 0;
//}