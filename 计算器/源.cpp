#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("******************************\n");
	printf("***  1 . Add    2 . Sub   ****\n");
	printf("***  3 . Mul    4 . Div   ****\n");
	printf("****      0  .  exit      ****\n");
}
int Add(int x,int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int (*pArr[])(int, int) = { 0,Add,Sub,Mul,Div };
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d",&input);
		if (input <= 4 && input > 0)
		{
			printf("请输入两个数：\n");
			scanf("%d%d",&x,&y);
			int ret = (*pArr[input])(x, y);
			printf("%d\n",ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);
	return 0;
}