#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
int main()
{
	int i, j, t,n;//打印成分口诀表
	scanf("%d", &n);
	if (n <= 10&&n>0)
	{
		for (i = 1; i <=n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				t = i * j;
				printf("%d*%d=%d  ", j, i, t);//%xd 打印的数字为x位 右对齐 %-xd 打印的数字为x位 左对齐
				if (j == i)
				{
					printf("\n");
				}
			}
		}
	}
	else
	{
		printf("error");
	}
	return 0;
}
//struct stu
//{
//	int no;
//	float cj;
//	int age;
//};
//int main()
//{
//	struct stu p[5];
//	for (int i = 0;i < 5;i++)
//	{
//		scanf("%d%f%d", &p[i].no, &p[i].cj, &p[i].age);
//	}
//	for (int j = 0;j < 5;j++)
//	{
//		for (int k = 1 + j;k < 5;k++)
//		{
//			if (p[j].cj < p[k].cj)
//			{
//				struct stu tem = p[j];
//				p[j] = p[k];
//				p[k] = tem;
//			}
//		}
//	}
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d %.2f %d ", p[i].no, p[i].cj, p[i].age);
//	}
//	return 0;
//}


//struct chuang
//{
//	int year;
//	int month;
//	int day;
//};
//struct xiu
//{
//	int year;
//	int month;
//	int day;
//};
//struct stu
//{
//	char a[5];
//	char b[5];
//	struct chuang c;
//	struct xiu d;
//};
//int main()
//{
//	int n,a=0;
//	struct stu p[10];
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%s %s %d %d %d %d %d %d", &p[i].a, &p[i].b, &p[i].c.year, &p[i].c.month, &p[i].c.day, &p[i].d.year, &p[i].d.month, &p[i].d.day);
//	}
//	for (int j = 0;j < n;j++)
//	{
//		int k = (p[j].d.year - p[j].c.year) * 365 + (p[j].d.month - p[j].c.month) * 30 + p[j].d.day - p[j].c.day;
//		if (k >= 100)
//		{
//			printf("%s %s %d %d %d %d %d %d \n", p[j].a, p[j].b, p[j].c.year, p[j].c.month, p[j].c.day, p[j].d.year, p[j].d.month, p[j].d.day);
//			a++;
//		}
//	}
//	if (a == 0)
//	{
//		printf("Not Found\n");
//		printf("%s %s %d %d %d %d %d %d", p[0].a, p[0].b, p[0].c.year, p[0].c.month, p[0].c.day, p[0].d.year, p[0].d.month, p[0].d.day);
//	}
//	return 0;
//}

//int main()
//{
//	int x , y , n=1,z=3,m,c;
//	scanf("%d%d", &m, &c);
//	while (z < c-3)
//	{
//		z = 3 * n;
//		x = (m - 3 * c + 8 * n)/2;
//		y = (5 * c - m - 14 * n) / 2;
//		while (x > 0 && y > 0)
//		{
//			printf("cock=%d hen=%d chicken=%d\n", x, y, z);
//			break;
//		}
//		n++;
//	}
//	return 0;
//}