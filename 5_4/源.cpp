#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int panduan(int m)
{
	int i = 2;
	while (i < m)
	{
		if (m % i == 0)
		{
			return 0;
		}
		i++;
	}
	if (i == m)
	{
		return m;
	}
}
int main()
{
	int n,a=3;
	scanf("%d",&n);
	for (a = 3;a < n;a++)
	{
		if (panduan(a) != 0)
		{
			int b = n - a;
			if (panduan(b) != 0&&b>a)
			{
				if(b!=1)
				{ 
					printf("%d %d\n", a, b);
				}
			}
		}

	}
	return 0;
}