#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*******************************\n");
	printf("***  1 . play     0 . exit  ***\n");
	printf("*******************************\n");

}
void game()
{	
	char ret;
	char board[ROW][COL] = {0};//ȫ���ո�
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);//��ӡ����
	while(1)
	{
		PlayerMove(board,ROW,COL);//�������
		DisplayBoard(board,ROW,COL);
		ret=IsWin(board,ROW,COL);
		if(ret !='C')
		{
			break;
		}
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		ret=IsWin(board,ROW,COL);
		if(ret !='C')
		{
			break;
		}
	
	}
	if(ret=='*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}
void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n"); 
			break;
		}
	}while(input);

}

int main()
{
	test();
	return 0;

}