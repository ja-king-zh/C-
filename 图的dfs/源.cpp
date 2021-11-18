#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdio.h>
#include<queue>
#include<string.h>
using namespace std;

const int N = 110;
int e[N], ne[N], h[N], idx=1;
bool book[N],qbook[N];
int n,m;
void add(int a, int b) {
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx;
	idx++;
}
void dfs(int u) {
	//cout << u<<' ';
	printf("%c ", u + 'A' - 1);
	book[u] = true;
	for (int i = h[u];i != -1;i = ne[i]) {
		int j = e[i];
		if (!book[j]) {
			dfs(j);
		}
	}
}
int main() {
	memset(h, -1, sizeof h);
	cin >> n;
	for (int i = 1;i <= n;i++) {
		char a;
		cin >> a;
		book[i] = false;
		qbook[i] = false;
	}
	cin >> m;
	for (int i = 0;i < m;i++) {
		char a, b;
		cin >> a >> b;
		add(a-'A'+1, b-'A'+1);
	}
	for (int i = 1;i <= n;i++) {
		if(!book[i])
			dfs(i);
	}
	queue<int>q;
	q.push(1);
	qbook[1] = true;
	cout << endl;
	while (!q.empty()) {
		int cur = q.front();
		printf("%c ", cur + 'A' - 1);
		for (int i = h[cur];i != -1;i = ne[i]) {
			int j = e[i];
			if (!qbook[j]) {
				qbook[j] = true;
				q.push(j);
			}
		}
		q.pop();
	}
	for (int i = 1;i <= n;i++) {
		if (!qbook[i])printf("%c ", i - 1 + 'A');
	}
	return 0;
}









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