#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	if(m>=n)
	{
		printf("bsa");
	}
	else
	{
		if(n%(m+1)!=0)
		{
			printf("bsa");
		}
		else
		{
			printf("bs");
		}
	}
	return 0;
}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//int main()
//{
//	char arr[]="hello\n";
//	struct T t={"hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n",t.ch);
//	printf("%s\n",t.s.arr);
//	printf("%lf\n",t.s.d);
//	printf("%s\n",t.pc);
//	return 0;
//}








//#include<stdio.h>
//int main()
//{
//	float x,y,i,j,k,a,b,c,d,m,n;
//	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
//	if(a*d-b*c != 0)
//		{i=(m*d-b*n);
//		j=(a*n-m*c);
//		k=(a*d-b*c);
//		x=i/k;
//		y=j/k;
//		printf("x=%.3f y=%.3f",x,y);}
//	return 0;
//}