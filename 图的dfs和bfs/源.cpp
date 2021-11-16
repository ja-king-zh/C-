#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//
//using namespace std;
//
//bool visited[20];
//
//typedef struct EdgeNode {
//    char adjvex;
//    struct EdgeNode* next;
//}EdgeNode;
//
//typedef struct VertexNode {
//    char data;
//    EdgeNode* firstedge;
//}VertexNode, AdjList[20];
//
//typedef struct {
//    AdjList adjlist;
//    int numvertexes, numEdges;
//}GraphAdjList;
//
//void create_algraph(GraphAdjList* G)
//{
//    scanf("%d", &G->numvertexes);
//    getchar();
//
//    for (int i = 0; i < G->numvertexes; i++)
//    {
//        scanf("%c", &G->adjlist[i].data);
//        getchar();
//        G->adjlist[i].firstedge = NULL;
//    }
//
//    scanf("%d", &G->numEdges);
//    getchar();
//
//    for (int i = 0; i < G->numEdges; i++)
//    {
//        char a, b;
//        scanf("%c %c", &a, &b);
//        getchar();
//
//        EdgeNode* e = (EdgeNode*)malloc(sizeof(EdgeNode));
//
//        e->adjvex = b;
//        e->next = G->adjlist[a - 'A'].firstedge;
//        G->adjlist[a - 'A'].firstedge = e;
//    }
//}
//
//void DFS(GraphAdjList G, char i)
//{
//    visited[i - 'A'] = true;
//    printf("%c ", G.adjlist[i - 'A'].data);
//
//    EdgeNode* p = G.adjlist[i - 'A'].firstedge;
//    while (p)
//    {
//        if (!visited[p->adjvex - 'A']) DFS(G, p->adjvex);
//        p = p->next;
//    }
//}
//
//void DFSTraverse(GraphAdjList G)
//{
//    for (int i = 0; i < G.numvertexes; i++) visited[i] = false;
//    for (int i = 0; i < G.numvertexes; i++)
//        if (!visited[i]) DFS(G, i + 'A');
//}
//
//void BFSTraverse(GraphAdjList G)
//{
//    char q[20];
//    int front = 0, rear = -1;
//
//    for (int i = 0; i < G.numvertexes; i++) visited[i] = false;
//
//    visited[0] = true;
//    q[++rear] = 0 + 'A';
//
//    while (front <= rear)
//    {
//        char t = q[front++];
//        printf("%c ", t);
//
//        for (EdgeNode* p = G.adjlist[t - 'A'].firstedge; p; p = p->next)
//        {
//            char j = p->adjvex;
//            if (!visited[j - 'A'])
//            {
//                visited[j - 'A'] = true;
//                q[++rear] = j;
//            }
//        }
//    }
//
//    for (int i = 0; i < G.numvertexes; i++)
//        if (!visited[i]) printf("%c ", i + 'A');
//}
//
//int main()
//{
//    GraphAdjList G;
//
//    create_algraph(&G);
//
//    DFSTraverse(G);
//
//    puts("");
//
//    BFSTraverse(G);
//
//    return 0;
//}



//#include<iostream>
//#include<queue>
//using namespace std;
//
//#define wuqiong 99999
//const int N = 110;
//char arr[N],an[N];
//int e[N][N], book[N] = { 0 }, n, x, ans = 0, qbook[N] = { 0 };
//void dfs(char a) {
//	an[ans] = a;
//	if (ans >= n)return;
//	for (int i = 1;i <= n;i++) {
//		if (e[a - 'A' + 1][i] == 1 && book[i] == 0) {
//			ans++;
//			book[i] = 1;
//			dfs(arr[i]);
//			book[i] = 0;
//			ans--;
//		}
//	}
//}
//int main() {
//	cin >> n;
//	for (int i = 1;i <= n;i++)
//		cin >> arr[i];
//	for (int i = 1;i <= n;i++) {
//		for (int j = 1;j <= n;j++) {
//			if (i == j)e[i][j] = 0;
//			else e[i][j] = wuqiong;
//		}
//	}
//	cin >> x;
//	char a,b;
//	for (int i = 0;i < x;i++) {
//		cin >> a >> b;
//		e[a - 'A' + 1][b - 'A' + 1] = 1;
//	}
//	
//    for (int i = 1;i <= n;i++) {
//        if (!book[i]) {
//            book[i] = 1;
//			ans++;
//            dfs(arr[i]);
//        }
//    }
//	for (int i = 1;i <= n;i++)
//		cout << an[i] << ' ';
//	cout << '\n';
//	queue<char>q;
//	q.push(arr[1]);
//	qbook[1] = 1;
//	while (!q.empty()) {
//		char cur = q.front();
//		cout << cur << ' ';
//		for (int i = 1;i <= n;i++) {
//			if (qbook[i] == 0 && e[cur - 'A' + 1][i] == 1) {
//				qbook[i] = 1;
//				q.push(arr[i]);
//			}
//		}
//		q.pop();
//	}
//	for (int i = 1;i <= n;i++) {
//		if (!qbook[i])cout << arr[i] << ' ';
//	}
//	return 0;
//}