#include<stdio.h>

struct ren s
{
	char name[20];
	int age;
};
int main()
{
	int n;
	struct ren *s;
	scanf("%d",n);
	s=(struct ren *)malloc(n*sizeof(struct ren));
	return 0;
}







//int paiduan(int a,int b)
//{
//	int i;
//    for(i=3;i<b-1;i+=2)
//	{
//		if(a%i==0)
//			return 0;
//	}
//    return a;
//}
//int main()
//{
//	int n,x,c;
//	scanf("%d",&n);
//	for(x=3;x<n;x=x+2)
//	{
//		paiduan(x,n);
//		}
//	c=n-x;
//	paiduan(c,n);
//	if(c)
//	{
//		if(x>c)
//		{
//			int tem=x;
//			x=c;
//			c=tem;
//		}
//			printf("%d %d",x,c);
//	}
//	return 0;
//}