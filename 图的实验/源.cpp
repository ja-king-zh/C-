#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cstring>
using namespace std;
static const int MAX = 9;
static const int INF = 65535;
bool visited[MAX];
int D[MAX][MAX];
struct Graph {
    char Vertex[MAX];
    int Arc[MAX][MAX];
    int VertexNum;
    int ArcNum;
};
void InitGraph(Graph* G) {
    for (int i = 0;i < MAX;i++) {
        for (int j = 0;j < MAX;j++) {
            G->Arc[i][j] = 0;
        }
    }
    memset(G->Vertex, 0, sizeof(G->Vertex));
    G->VertexNum = 0;
    G->ArcNum = 0;
}
int LocateVertex(Graph* G, char x) {
    for (int i = 0;i < G->VertexNum;i++) {
        if (G->Vertex[i] == x)
            return i;
    }
    return -1;
}
void CreatGraph(Graph* G) {
    cin >> G->VertexNum;
    for (int i = 0;i < G->VertexNum;i++) {
        cin >> G->Vertex[i];
    }
    cin >> G->ArcNum;
    for (int j = 0;j < G->ArcNum;j++) {
        char m, n;
        int cost;
        cin >> m >> n;
        int x = LocateVertex(G, m);
        int y = LocateVertex(G, n);
        G->Arc[x][y] = 1;
    }
}
bool visited[MAX];	//访问标记数组
/*从顶点出发，深度优先遍历图G*/
void DFS(Graph* G, int v) {
    int w;
    //visit(v);	//访问顶点
    visited[v] = true;	//设已访问标记
    //FirstNeighbor(G,v):求图G中顶点v的第一个邻接点，若有则返回顶点号，否则返回-1。
    //NextNeighbor(G,v,w):假设图G中顶点w是顶点v的一个邻接点，返回除w外顶点v
    for (w = FirstNeighbor(G, v); w >= 0; w = NextNeighor(G, v, w)) {
        if (!visited[w]) {	//w为u的尚未访问的邻接顶点
            DFS(G, w);
        }
    }
}
/*对图进行深度优先遍历*/
void DFSTraverse(Graph* G) {
    int v;
    for (v = 0; v < G->VertexNum; ++v) {
        visited[v] = false;	//初始化已访问标记数据
    }
    for (v = 0; v < G->VertexNum; ++v) {	//从v=0开始遍历
        if (!visited[v]) {
            DFS(G, v);
        }
    }
}


int main() {
    Graph G;
    InitGraph(&G);
    CreatGraph(&G);
    DFSTraverse(&G);
    return 0;
}







//static const int MAX = 9;
//static const int INF = 65535;
//bool visited[MAX];
//int D[MAX][MAX];
//struct Graph {
//    char Vertex[MAX];
//    int Arc[MAX][MAX];
//    int VertexNum;
//    int ArcNum;
//};
//void InitGraph(Graph* G) {
//    for (int i = 0;i < MAX;i++) {
//        for (int j = 0;j < MAX;j++) {
//            if (i == j) G->Arc[i][j] = 0;
//            else G->Arc[i][j] = INF;
//        }
//    }
//    memset(G->Vertex, 0, sizeof(G->Vertex));
//    G->VertexNum = 0;
//    G->ArcNum = 0;
//}
//int LocateVertex(Graph* G, char x) {
//    for (int i = 0;i < G->VertexNum;i++) {
//        if (G->Vertex[i] == x)
//            return i;
//    }
//    return -1;
//}
//void CreatGraph(Graph* G) {
//    cin >> G->VertexNum;
//    for (int i = 0;i < G->VertexNum;i++) {
//        cin >> G->Vertex[i];
//    }
//    cin >> G->ArcNum;
//    for (int j = 0;j < G->ArcNum;j++) {
//        char m, n;
//        int cost;
//        cin >> m >> n >> cost;
//        int x = LocateVertex(G, m);
//        int y = LocateVertex(G, n);
//        G->Arc[x][y] = cost;
//        G->Arc[y][x] = cost;
//    }
//}
//int SMax(Graph* G) {
//    int max = D[0][0];
//    int arry[MAX];
//    for (int j = 0;j < G->VertexNum;j++) {
//        for (int i = 0;i < G->VertexNum;i++) {
//            if (D[i][j] > max) {
//                max = D[i][j];
//                arry[j] = max;
//            }
//        }
//        max = 0;
//    }
//    max = INF;
//    int index = 0;
//    for (int i = 0;i < G->VertexNum;i++) {
//        if (max > arry[i]) {
//            max = arry[i];
//            index = i;
//        }
//    }
//    return index;
//}
//int NMax(Graph* G) {
//    int arry[MAX] = { 0 };
//    for (int j = 0;j < G->VertexNum;j++) {
//        for (int i = 0;i < G->VertexNum;i++) {
//            arry[j] += D[i][j];
//        }
//    }
//    int min = INF;
//    int index = 0;
//    for (int i = 0;i < G->VertexNum;i++) {
//        if (min > arry[i]) {
//            min = arry[i];
//            index = i;
//        }
//    }
//    return index;
//}
//void Floyd(Graph* G, char* x, char* y) {
//    int v, w, k;
//    for (v = 0;v < G->VertexNum;v++) {
//        for (w = 0;w < G->VertexNum;w++) {
//            D[v][w] = G->Arc[v][w];
//        }
//    }
//    for (k = 0;k < G->VertexNum;k++) {
//        for (v = 0;v < G->VertexNum;v++) {
//            for (w = 0;w < G->VertexNum;w++) {
//                if (D[v][w] > D[v][k] + D[k][w]) {
//                    D[v][w] = D[v][k] + D[k][w];
//                }
//            }
//        }
//    }
//    *x = G->Vertex[SMax(G)];
//    *y = G->Vertex[NMax(G)];
//}
//int main(){
//    Graph G;
//    InitGraph(&G);
//    CreatGraph(&G);
//    char x, y;
//    Floyd(&G, &x, &y);
//    cout << x << endl << y << endl;
//    return 0;
//}