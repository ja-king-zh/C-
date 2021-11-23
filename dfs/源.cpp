#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<queue>
#include<stdio.h>
using namespace std;

//dfs求岛屿面积
const int N = 1100;
int arr[N][N], book[N][N], sum = 1, m, n, x, y;
void dfs(int x, int y) {
	int dx[4] = { 1,0,-1,0 };
	int dy[4] = { 0,1,0,-1 };
	int ddx, ddy;
	for (int i = 0;i < 4;i++) {
		ddx = x + dx[i];
		ddy = y + dy[i];
		if (ddx > m || ddx<1 || ddy>n || ddy < 1)
			continue;
		if (arr[ddx][ddy] > 0 && book[ddx][ddy] == 0) {
			book[ddx][ddy] = 1;
			sum++;
			dfs(ddx, ddy);
		}
	}
}
int main() {
	cin >> m >> n >> x >> y;
	for (int i = 1;i <= m;i++)
		for (int j = 1;j <= n;j++)
			cin >> arr[i][j];
	book[x][y] = 1;
	dfs(x, y);
	cout << sum;
	return 0;
}




//bfs求岛屿面积
typedef pair<int, int> PII;
const int N = 110;
int arr[N][N], book[N][N] = { 0 },m,n,x,y,ans=1;

int main() {
	queue<PII>q;
	int dx[4] = { 1,0,-1,0 };
	int dy[4] = { 0,1,0,-1 };
	int ddx, ddy;
	cin >> m >> n>>x>>y;
	for (int i = 1;i <= m;i++)
		for (int j = 1;j <= n;j++)
			cin >> arr[i][j];
	book[x][y] = 1;
	q.push({ x,y });
	while (!q.empty()) {
		auto tmp = q.front();
		for (int i = 0;i < 4;i++) {
			ddx = tmp.first + dx[i];
			ddy = tmp.second + dy[i];
			if (ddx > m || ddx<1 || ddy>n || ddy < 1)
				continue;
			if (arr[ddx][ddy] > 0 && book[ddx][ddy] == 0) {
				book[ddx][ddy] = 1;
				q.push({ ddx,ddy });
				ans++;
			}
		}
		q.pop();
	}
	cout << ans;
	return 0;
}








//dfs求最短路（bfs也可以）
const int N = 110;
int Min = 99999, arr[N][N], m, n, book[N][N] = { 0 },p,q;
void dfs(int x,int y , int step) {
	int ddx, ddy;
	int dx[4] = { 1,0,-1,0 };
	int dy[4] = { 0,1,0,-1 };
	if (x == p && y == q) {
		if (step < Min) {
			Min = step;
		}
		return;
	}
	for (int i = 0;i < 4;i++) {
		ddx = x + dx[i];
		ddy = y + dy[i];
		if (ddx > m || ddx<1 || ddy>n ||ddy < 1)
			continue;
		if (arr[ddx][ddy] == 0 && book[ddx][ddy] == 0) {
			book[ddx][ddy] = 1;
			dfs(ddx, ddy, step + 1);
			book[ddx][ddy] = 0;
		}
	}
}
int main() {
	cin >> m >> n;
	for (int i = 1;i <= m;i++) {
		for (int j = 1;j <= n;j++) {
			cin >> arr[i][j];
		}
	}
	cin >> p >> q;
	book[1][1] = 1;
	dfs(1,1,0);
	cout << Min;
	return 0;
}