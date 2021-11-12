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
            if (i == j) G->Arc[i][j] = 0;
            else G->Arc[i][j] = INF;
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
        cin >> m >> n >> cost;
        int x = LocateVertex(G, m);
        int y = LocateVertex(G, n);
        G->Arc[x][y] = cost;
        G->Arc[y][x] = cost;
    }
}
int SMax(Graph* G) {
    int max = D[0][0];
    int arry[MAX];
    for (int j = 0;j < G->VertexNum;j++) {
        for (int i = 0;i < G->VertexNum;i++) {
            if (D[i][j] > max) {
                max = D[i][j];
                arry[j] = max;
            }
        }
        max = 0;
    }
    max = INF;
    int index = 0;
    for (int i = 0;i < G->VertexNum;i++) {
        if (max > arry[i]) {
            max = arry[i];
            index = i;
        }
    }
    return index;
}
int NMax(Graph* G) {
    int arry[MAX] = { 0 };
    for (int j = 0;j < G->VertexNum;j++) {
        for (int i = 0;i < G->VertexNum;i++) {
            arry[j] += D[i][j];
        }
    }
    int min = INF;
    int index = 0;
    for (int i = 0;i < G->VertexNum;i++) {
        if (min > arry[i]) {
            min = arry[i];
            index = i;
        }
    }
    return index;
}
void Floyd(Graph* G, char* x, char* y) {
    int v, w, k;
    for (v = 0;v < G->VertexNum;v++) {
        for (w = 0;w < G->VertexNum;w++) {
            D[v][w] = G->Arc[v][w];
        }
    }
    for (k = 0;k < G->VertexNum;k++) {
        for (v = 0;v < G->VertexNum;v++) {
            for (w = 0;w < G->VertexNum;w++) {
                if (D[v][w] > D[v][k] + D[k][w]) {
                    D[v][w] = D[v][k] + D[k][w];
                }
            }
        }
    }
    *x = G->Vertex[SMax(G)];
    *y = G->Vertex[NMax(G)];
}
int main(){
    Graph G;
    InitGraph(&G);
    CreatGraph(&G);
    char x, y;
    Floyd(&G, &x, &y);
    cout << x << endl << y << endl;
    return 0;
}