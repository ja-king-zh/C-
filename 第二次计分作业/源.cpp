#define _CRT_SECURE_NO_WARNINGS 1

#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 110;
int g[N][N], dist[N];
bool st[N];
int n, m;

int prim() {
	memset(dist, 0x3f, sizeof dist);
	int ans = 0;
	for (int i = 0;i < n;i++) {
		int t = -1;
		for (int j = 1;j <= n;j++) {
			if (!st[j] && (t == -1 || dist[t] > dist[j])) {
				t = j;
			}
		}
		st[t] = true;
		if (i)ans += dist[t];
		for (int j = 1;j <= n;j++)dist[j] = min(dist[j], g[t][j]);
	}
	return ans;
}

int main() {
	memset(g, 0x3f, sizeof g);
	cin >> n >> m;
	while (m--) {
		int a, b, c;
		cin >> a >> b >> c;
		g[a][b] = g[b][a] = min(g[a][b], c);
	}
	int t = prim();
	cout << t;
	return 0;
}









//#include <cstdio>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//#define MAX 105
//#define INFINITY 65535
//int N, M, A[MAX][MAX], ECT, EarliestTime[MAX] = { 0 }, LatestTime[MAX], D[MAX][MAX], idx; 
//int getMax(int arr[]) {
//	int max = 0;
//	for (int i = 0; i < N; i++)
//		if (max < arr[i]) {
//			max = arr[i];
//			idx = i;
//		}
//	return max;
//}
//int TopSort_Earliest() {
//	int V, cnt = 0, Indegree[MAX] = { 0 };
//	queue<int> q;
//	//计算各结点的入度
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			if (A[i][j] != INFINITY)
//				Indegree[j]++;	//对于有向边<i,j>累计终点j的入度
//	//入度为0的入队
//	for (int i = 0; i < N; i++)
//		if (Indegree[i] == 0)
//			q.push(i);
//	while (!q.empty()) {
//		V = q.front();
//		q.pop();
//		cnt++;
//		for (int j = 0; j < N; j++)
//			if (A[V][j] != INFINITY) {  //<V, j>有有向边
//				if (EarliestTime[V] + A[V][j] > EarliestTime[j]) { //如果 V的最早完成时间 + j所需时间 > j的最早完成时间
//					EarliestTime[j] = EarliestTime[V] + A[V][j];
//				}
//				if (--Indegree[j] == 0)  //去掉V后，如果j的入度为0
//					q.push(j);
//			}
//	}
//	ECT = getMax(EarliestTime); //最早完成时间应是所有元素中最大的
//	if (cnt != N) return 0;	//如果没有取出所有元素，说明图中有回路
//	else return 1;
//}
//void TopSort_Latest() {
//	int V, Outdegree[MAX] = { 0 };
//	queue<int> q;
//	//计算各结点的出度
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			if (A[i][j] != INFINITY)
//				Outdegree[i]++;	//对于有向边<i,j>累计起点i的出度
//	//出度为0的入队
//	for (int i = 0; i < N; i++)
//		if (Outdegree[i] == 0)
//			q.push(i);
//	//初始化LatestTime
//	for (int i = 0; i < N; i++)
//		LatestTime[i] = INFINITY;
//	LatestTime[idx] = ECT;	//将最后一个活动的最晚完成时间设为它的最早完成时间
//	while (!q.empty()) {
//		V = q.front();
//		q.pop();
//		//cnt++;	//不需要再算cnt了
//		for (int j = 0; j < N; j++)
//			if (A[j][V] != INFINITY) {  //<j, V>有有向边
//				if (LatestTime[V] - A[j][V] <= LatestTime[j]) {  //必须用<=,只<的话只能算一条关键路径，<=才能算出所有的关键路径(错误原因)
//					LatestTime[j] = LatestTime[V] - A[j][V];
//					D[j][V] = LatestTime[V] - EarliestTime[j] - A[j][V];
//				}
//				if (--Outdegree[j] == 0)  //去掉V后，如果j的出度为0
//					q.push(j);
//			}
//	}
//}
//void PrintKeyRoute() {
//	for (int i = 0; i < N; i++)
//		for (int j = N - 1; j >= 0; j--)	//根据题目要求，i相同时要j要逆序输出
//			if (D[i][j] == 0)
//				printf("%d %d\n", i + 1, j + 1);
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &N, &M);
//	//初始化图的边A，各组的机动时间D
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			D[i][j] = A[i][j] = INFINITY;
//	//read
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d", &a, &b);
//		scanf("%d", &A[--a][--b]);	//题目中编号从1开始（错误原因）
//	}
//	if (!TopSort_Earliest())
//		printf("0\n");
//	else {
//		printf("%d\n", ECT);
//		TopSort_Latest();
//		PrintKeyRoute();
//	}
//	system("pause");
//	return 0;
//}
//#include<cstring>
//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//const int N = 110;
//int dist[N], path[N], e[N], ne[N], h[N], w[N], idx = 0;
//bool st[N];
//int n, m,x,y,arr[N];
//void add(int a , int b, int c) {
//	e[idx] = b, ne[idx] = h[a], w[idx] = c, h[a] = idx++;
//}
//void spfa(int qi) {
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	queue<int>q;
//	q.push(qi);
//	st[qi] = true;
//	while (!q.empty()) {
//		int t = q.front();
//		q.pop();
//		st[t] = false;
//		for (int i = h[t];i != -1;i = ne[i]) {
//			int j = e[i];
//			if (dist[j] > dist[t] + w[i]) {
//				dist[j] = dist[t] + w[i];
//				path[j] = t;
//				if (!st[j]) {
//					st[j] = true;
//					q.push(j);
//				}
//			}
//		}
//	}
//}
//int main() {
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	for (int i = 0;i < m;i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	//cin >> x >> y;
//	spfa(1);
//	if (dist[n] == 0x3f3f3f3f)cout << 0;
//	else {
//		cout << dist[n]<<endl;
//		int i = 0,t=n;
//		while (path[t] != 1) {
//			arr[i] = path[t];
//			t = path[t];
//			i++;
//		}
//		arr[i] = 1;
//		for (;i >= 1;i--) {
//			cout << arr[i] << ' '<<arr[i-1]<<endl;
//		}
//		cout << arr[0] << ' ';
//		cout << n << endl;
//		
//	}
//	return 0;
//}











//#include <cstring>
//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <stdio.h>
//
//using namespace std;
//
//const int N = 100010;
//
//int n, m;
//int h[N], w[N], e[N], ne[N], idx;
//int dist[N], Path[N];
//bool st[N];
//
//void add(int a, int b, int c)
//{
//    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
//}
//
//void PrintPath(int k) {
//    if (Path[k])
//    {
//        PrintPath(Path[k]);
//    }
//    cout << k << " ";
//}
//
//int spfa(int s)
//{
//    memset(dist, 0x3f, sizeof dist);
//    dist[s] = 0;
//
//    queue<int> q;
//    q.push(s);
//    st[s] = true;
//
//    while (q.size())
//    {
//        int t = q.front();
//        q.pop();
//        st[t] = false;
//
//        for (int i = h[t]; i != -1; i = ne[i])
//        {
//            int j = e[i];
//            if (dist[j] > dist[t] + w[i])
//            {
//                dist[j] = dist[t] + w[i];
//                Path[j] = t;
//                if (!st[j])
//                {
//                    q.push(j);
//                    st[j] = true;
//                }
//            }
//        }
//    }
//
//    return dist[n];
//
//}
//
//int main()
//{
//    cin >> n >> m;
//
//    memset(h, -1, sizeof h);
//
//    while (m--)
//    {
//        int a, b, c;
//        cin >> a >> b >> c;
//        add(a, b, c);
//
//    }
//
//    int x, y;
//    cin >> x >> y;
//    spfa(x);
//
//
//    if (dist[y] == 0x3f3f3f3f)
//    {
//        cout << "0" << endl;
//    }
//    else
//    {
//        PrintPath(y);
//        cout << endl;
//        cout << dist[y] << endl;
//    }
//
//    return 0;
//
//}




//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//#define inf 999999
//const int N = 110;
//int g[N][N], dis[N], arr[N] = { 0 };
//int n, m;
//int main() {
//	cin >> n >> m;
//	for (int i = 1;i <= n;i++) {
//		for (int j = 1;j <= n;j++) {
//			if (i == j)g[i][j] = 0;
//			else g[i][j] = inf;
//		}
//	}
//	memset(dis, -1, sizeof dis);
//	for (int i = 0;i < m;i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		g[a][b] = c;
//		dis[b] = a;
//	}
//	int x, y;
//	cin >> x >> y;
//	for(int k=x;k<=y;k++)
//		for(int i=x;i<=y;i++)
//			for(int j=x;j<=y;j++)
//				if (g[i][j] > g[i][k] + g[k][j]) {
//					g[i][j] = g[i][k] + g[k][j];
//					dis[j] = k;
//				}
//	
//	if (dis[y] == -1)cout << 0;
//	else {
//		int i = 0,t=y;
//		while (dis[t] != x) {
//			arr[i] = dis[t];
//			t = dis[t];
//			i++;
//		}
//		arr[i] = x;
//		while(i>=0) {
//			cout << arr[i] << ' ';
//			i--;
//		}
//		cout << y << ' ' << endl;
//		cout << g[x][y];
//	}
//	return 0;
//}




//#include<iostream>
//#include<math.h>
//#include<queue>
//#include<stdio.h>
//using namespace std;
//typedef int BTData;
//typedef struct BinaryTreeNode {
//	struct BinaryTreeNode* l;
//	struct BinaryTreeNode* r;
//	BTData data;
//}BTNode;
//BTNode* PrevCreate() {
//	int a;
//	BTNode* cur = new BTNode;
//	cin >> a;
//	if (a == 0)return NULL;
//	cur->data = a;
//	cur->l = PrevCreate();
//	cur->r = PrevCreate();
//	return cur;
//}
//int Floortravel(BTNode* t) {
//	queue<BTNode*>q;
//	if (t)q.push(t);
//	int d1 = 0, d2 = 0;
//	while (!q.empty()) {
//		BTNode* cur = q.front();
//		q.pop();
//		if (cur->l && cur->r)d2++;
//		if (cur->l && !cur->r)d1++;
//		if (!cur->l && cur->r)d1++;
//		if (cur->l)q.push(cur->l);
//		if (cur->r)q.push(cur->r);
//	}
//	return d2 - d1;
//}
//
//int main() {
//	BTNode* t;
//	t=PrevCreate();
//	printf("%d", Floortravel(t));
//}





//typedef char BTData;
//typedef struct BinaryTreeNode {
//	struct BinaryTreeNode* l;
//	struct BinaryTreeNode* r;
//	BTData data;
//}BTNode;
//BTNode* PrevCreate() {
//	char a;
//	BTNode* cur = new BTNode;
//	cin >> a;
//	if (a == '#')return NULL;
//	cur->data = a;
//	cur->l = PrevCreate();
//	cur->r = PrevCreate();
//	return cur;
//}
//int Depth(BTNode* t) {
//	if (t == NULL)return 0;
//	int l = Depth(t->l);
//	int r = Depth(t->r);
//	return l > r ? l + 1 : r + 1;
//}
//int TreeSize(BTNode* t) {
//	if (t == NULL)return 0;
//	return TreeSize(t->l) + TreeSize(t->r) + 1;
//}
//int main() {
//	BTNode* t;
//	t=PrevCreate();
//	if (pow(2, Depth(t)) - 1 == TreeSize(t)) {
//		printf("1");
//	}
//	else {
//		printf("0");
//	}
//	return 0;
//}