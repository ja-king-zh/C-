#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ʼ������

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set) {
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			board[i][j] = set;
		}
	}
}

//��ӡ����

void PrintBoard(char board[ROWS][COLS], int row, int col) {
	printf("--------ɨ��--------\n");
	for (int i = 0;i <= 9;i++) {
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 1;i < row+1 ;i++) {
		printf("%d ", i);
		for (int j = 1;j < col+1;j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------------------\n");

}

//������

void SetMine(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
	while (count) {
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] != '1') {
			board[x][y] = '1';
			count--;
		}	
	}
}

//�Ų���
int GetMineCount(char board[ROWS][COLS],int x,int y) {
	int count=0;
	for (int i = x - 1;i <= x + 1;i++) {
		for (int j = y - 1;j <= y + 1;j++) {
			count += (board[i][j]-'0');
		}
	}
	return count;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x, y,win=0;
	while (win<row*col-EASY_COUNT) {
		printf("����������\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] != '1') {
				int count = GetMineCount(mine,x,y);
				show[x][y] = count + '0';
				PrintBoard(show, ROW, COL);
				win++;
			}
			else {
				printf("���ź����㱻ը����\n");
				PrintBoard(mine, ROW, COL);
				break;
			}
		}
		else {
			printf("����Ƿ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT) {
		printf("��ϲ�㣬���׳ɹ�\n");
		PrintBoard(mine, ROW, COL);
	}
		
}