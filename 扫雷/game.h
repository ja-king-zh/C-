#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
//��ӡ����
void PrintBoard(char board[ROWS][COLS], int row, int col);
//������
void SetMine(char board[ROWS][COLS], int row, int col);
//�Ų���
void FindMine(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col);