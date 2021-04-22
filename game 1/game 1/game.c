#include"game.h"
#include<stdio.h>
void InitBoard(char board[ROW][COL],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			board[i][j] = ' ';
		}
	}


}
void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{	//打印一行数据
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		//打印分割行
		if(i<row-1)
			for(j=0;j<col;j++)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
			printf("\n");

	}


}
void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x,y;
	printf("玩家走:\n");
	while(1)
	{
		printf("请输入下的坐标:");
		scanf("%d%d",&x,&y);
		//判断xy合法性
	    if(x>=1 && x<=row && y>=1 &&y<=col)
		{
			if(board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("改点坐标被占用\n");
			}
		}
		else
		{
			printf("非法坐标，请重新输入！\n");
		}
	}
}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x,y;
	printf("电脑走:\n");
	while(1)
	{
		x=rand()%row;
		y=rand()%col;
		if(board[x][y]==' ')
		{
			board[x][y]='#';
			break;
		}
	}
}
int IsFull(char board[ROW][COL],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
			{
				return 0;//没满
			}
		}
	
	}
	return 1;//满了
}
char IsWin(char board[ROW][COL],int row,int col)
{
	int i;
	for(i=0;i<row;i++)
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		{
		return board[i][1];
		}
	for(i=0;i<row;i++)
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')
		{
		return board[i][1];
		}
		if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
			return board[1][1];
		if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[1][1]!=' ')
			return board[1][1];
		if(1==IsFull(board,ROW,COL))
		{
			return 'Q';
		}
		return'C';
}