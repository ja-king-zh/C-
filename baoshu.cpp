#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()

{
	int* a, i=0, j=0, k=0,n;
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	if (n > 3)
	{
		for (i = 0; i < n; i++)
		{
			a[i] = i + 1;
		}
		i = 0;
		while (j < n - 1)
		{
			if (a[i] != 0)
			{
				k++;
			}

			if (k == 3)
			{
				a[i] = 0;
				k = 0;
				j++;
			}
			i++;
			if (i == n)
				i = 0;

		}


			for (i = 0; i < n; i++)
			{
				if (a[i] != 0)
					printf("%d", a[i]);
			}
	}
	else
	{
		printf("%d error", n);
	}
	return 0;
}









//void m(int* p, int* q, int n)
//{
//
//	int i, t;
//	t = n;
//	for (i = 0; i < n; i++, t--)
//	{
//		*(q + i) = *(p + t - 1);
//	}
//}

//int test(int* p,int n)
//{
//	int t = 0, i;
//	for (i = 0; i < n; i += 2)
//	{
//		t = t + *(p + i);
//	}
//	return t;
//}
//int test(char* x, char* y,int n)
//{
//	int t,i;
//	for (i = 0; i < n; i++)
//	{
//		if (*(x + i) == *(y + i))
//		{
//			t = 0;
//			continue;
//		}
//		else
//		{
//			t = *(x + i) - *(y + i);
//			break;
//		}
//
//	}
//	return t;
//}
//void m(int* p, int* q, int a,int b,int c)
//{
//	int t = a + b - 1,i;
//	for (i = 0; i < a - 1; i++)
//	{
//		*(p + i) = *(q + i);
//	}
//	for (i = a-1; i < a+b; i++,t--)
//	{
//		
//		*(p + i) = *(q + t);
//	}
//	for (i = a + b ; i < c; i++)
//	{
//		*(p + i) = *(q + i);
//	}


//}
//int main()
//{
//	int n, j = 1, i, k, count = 0,count1, a,*arr;
//	scanf("%d", &n);
//	arr = (int*)malloc(n * sizeof(int));
//	arr[0] = 0;
	/*if (n > 3)
	{
		for (i = 1; i < n + 1; i++)
		{
			arr[i] = i;
		}
		for (;;)
		{
			k = 0;
			count1 = count;
			for (; j < n + count1 + 1; j++)
			{
				if (j % 3 != 0)
				{
					arr[n + count + 1] = arr[j];
					count++;
					k++;
				}
			}
			if (1 == k)
			{
				printf("%d", arr[j]);
				break;
			}
		}
	}
	else
	{
		printf("%d error", n);
	}*/

	
	/*int arr[100];
	arr[6] = 1;
	printf("%d",arr[6]);*/

	/*int i = 0,n,*a;
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	int t=test(a, n);
	printf("%d", t);*/
	/*int i, n, * a, * b;
	i = 0;
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	b = (int*)malloc(n * sizeof(int));
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	m(a, b, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(b + i));

	}*/
	/*char a[100],b[100];
	scanf("%s", &a);
	scanf("%s", &b);
	int n = strlen(a);
	int k = strlen(b);
	if (k > n)
	{
		n = k;
	}
	int t = test(a, b, n);
	printf("%d", t);

	*/
	/*int a[10], b[10],n=10,i=0,x,y;
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	scanf("%d%d", &x, &y);
	int ma = y - 1;
	m(b, a, x, ma, 10);
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(b + i));

	}*/



