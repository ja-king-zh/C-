#include<stdio.h>
struct worker
{
	int no;
	char name[20];
	double jbgz;
	double jj;
	double bx;
};
int main()
{
	int i;
	double* c={0};
	struct worker s[5];
	for(int i=0;i<5;i++)
	{
		scanf("%lf%s%lf%lf%lf",&s[i].no,&s[i].name,&s[i].jbgz,&s[i].jj,&s[i].bx);
		c[i]=s[i].jbgz+s[i].jj-s[i].bx;
	}
	for(int j=0;j<5;j++)
	{
		printf("%d %.2f\n",s[j].no,c[j]);
	}
	return 0;
}







//struct sr
//{
// int year;
// int month;
// int day;
//};
//struct stu
//{
//	int no;
//	char name[20];
//	struct sr s;
//};
//int main()
//{
//	int max=0;
//	int i,min=0;
//	struct stu s[5];
//	for(i=0;i<5;i++)
//	{
//		scanf("%d %s %d %d %d",&s[i].no,&s[i].name,&s[i].s.year,&s[i].s.month,&s[i].s.day);
//	}	
//	for(int j=0;j<5;j++)
//	{
//		if(s[j].s.year>max)
//		{
//			min = s[j].s.year+s[j].s.month+s[j].s.day;
//			max=s[j].s.year;
//		}
//		if(s[j+1].s.year==max)
//		{
//			max=s[j+1].s.month;
//			if(s[j+1].s.month>max)
//			{
//				min=s[j+1].s.year+s[j+1].s.month+s[j+1].s.day;
//				max=s[j+1].s.year;
//			}
//			if(s[j].s.month==s[j+1].s.month)
//			{
//				max=s[j].s.day;
//				if(s[j+1].s.day>max)
//				{
//					min=s[j+1].s.year+s[j+1].s.month+s[j+1].s.day;
//					max=s[j+1].s.year;
//				}
//			}
//		}
//	}
//	for(int k=0;k<5;k++)
//	{
//		if(min==s[k].s.year+s[k].s.month+s[k].s.day&&max==s[k].s.year)
//		{
//			printf("%d %s %d %d %d",s[k].no,s[k].name,s[k].s.year,s[k].s.month,s[k].s.day);
//		}
//	}
//	return 0;
//}





//#include<stdio.h>
//struct stu
//{
//	int no;
//	float a1;
//	float a2;
//	float a3;
//	float a4;
//};
//int main()
//{
//	int i;
//	double a,b,d,e,c;
//	struct stu s[5];
//	for(int i=0;i<5;i++)
//	{
//		scanf("%d%f%f%f%f",&s[i].no,&s[i].a1,&s[i].a2,&s[i].a3,&s[i].a4);
//		c=(s[i].a1+s[i].a2+s[i].a3+s[i].a4)/4.0;
//		printf("%d %.2f\n",s[i].no,c);
//	}
//	a=(s[0].a1+s[1].a1+s[2].a1+s[3].a1+s[4].a1)/5.0;
//	b=(s[0].a2+s[1].a2+s[2].a2+s[3].a2+s[4].a2)/5.0;
//	c=(s[0].a3+s[1].a3+s[2].a3+s[3].a3+s[4].a3)/5.0;
//	e=(s[0].a4+s[1].a4+s[2].a4+s[3].a4+s[4].a4)/5.0;
//	printf("%.2f %.2f %.2f %.2f",a,b,c,e);
//	return 0;
//}