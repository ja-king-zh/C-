#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;

const int N = 110;
int g[N][N];
int n, m;
void Floyd() {
	for (int k = 1;k <= n;++k) {
		for (int i = 1;i <= n;++i) {
			for (int j = 1;j <= n;++j)
				if (g[i][k] + g[k][j] < g[i][j])
					g[i][j] = g[i][k] + g[k][j];
		}
	}
	int Min[N], Sum[N] = { 0 };
	memset(Min, 0, sizeof Min);
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			Min[i] = max(Min[i], g[i][j]);
			Sum[i] += g[i][j];
		}
	}
	int m=999, s=999;
	for (int i = 1;i <= n;++i) {
		if (Min[i] < m)
			m = Min[i];
		if (Sum[i] < s)
			s = Sum[i];
	}
	for (int i = 1;i <= n;++i) {
		if (Min[i] == m)
			printf("%c\n", i - 1 + 'A');
	
	}
	for (int i = 1;i <= n;++i) {
		
		if (Sum[i] == s)
			printf("%c", i - 1 + 'A');
	}
}
int main() {
	memset(g, 0x3f, sizeof g);
	cin >> n;
	for (int i = 0;i < n;i++) {
		char q;
		cin >> q;
	}
	cin >> m;
	for (int i = 0;i < m;i++) {
		char a, b;
		int c;
		cin >> a >> b >> c;
		g[a - 'A' + 1][b - 'A' + 1] = c;
		g[b - 'A' + 1][a - 'A' + 1] = c;
	}
	Floyd();
	return 0;
}