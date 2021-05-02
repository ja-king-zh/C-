#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include"add.c"
int main()
{
	int a = 10;
	int b = 30;
	int sum = 0;
	sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}

//int main()
//{
//	int i=0;
//	char password[20]={0};
//	for(i=0;i<3;i++)
//	{
//		printf("请输入密码:");
//		scanf("%s",password);
//		if(strcmp(password,"123456")==0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else{printf("密码错误\n");}
//	}
//	if (i==3)
//		printf("三次密码均错误\n");
//	return 0;
//}
//{
//	char arr1[]="wo shi ni die!!!!!";
//	char arr2[]="##################";
//	int left=0;
//	int right=strlen(arr1)-1;
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//	
//}
////int main()
////{
////	int arr[]={1,2,3,4,5,6,7,8,9,10};
////	int k=7;
////	int sz=sizeof(arr)/sizeof(arr[0]);//计算元素个数
////	int left=0;//左下标
////	int right=sz-1;//右下标
////	while (left<=right)
////	{
////		int mid=(left+right)/2;
////		if(arr[mid]>k)
////		{
////			right=mid-1;
////		}
////		else if (arr[mid] < k )
////			{
////				left=mid+1;
////		}
////		else
////		{
////			printf("找到了，下标为:%d\n",mid);
////			break;
////		}
////	}
////	if(left>right)
////		{
////			printf("找不到\n");
////		}
////		return 0;
////}
//
//
////int main()
////{
////	int i=0;
////	int n=0;
////	int ret=1;
////	int sum=0;
////	for(n=1;n<=3;n++)
////	{
////		ret=1;
////		for(i=1;i<=n;i++)
////		{	
////			ret=ret*i;
//		}
//		sum=sum+ret;
//
//	}
//	printf("%d\n",sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//		{printf("%d ",i);
//		i++;}
//	while(i<=10);
//
//	return 0;
//}

//int main()
//{
//	int a =0;
//	int b =0;
//	for(;a<10;a++)
//	{
//		for(;b<10;b++)
//			printf("hehe\n");
//	}
//
//	return 0;
//}
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//			break;
//		printf(" %d",i);
//	}
//	return 0;
//}






//{
//	int i=0;
//	while(i<=10)
//	{
//		if (i==5)
//			continue;
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("学习日\n");
//		break;
//	case 6:
//	case 7:
//		printf("玩儿\n");
//		break;
//	default:
//		printf("输入错误(请输入1-7)\n");
//		break;
//	}
//	return 0;








//int main()
//{
//	int num = 1;
//	while (num<=100 )
//	{	
//		if (1==num % 2 )
//			printf("%d ",num);
//		num++;
//	}
//	return 0;
//}
//	
//



//struct book
//{
//	char name [20];
//	short price;
//};
//int main()
//{
//	struct book b1={"C语言",55};
//	printf("书名:%s\n",b1.name);
//	printf("价格:%d\n",b1.price);
//	return 0;
//}


//struct Book
//{
//	char name[20];
//	short price;
//	
//
//};
//
//
//int main()
//{
//	struct Book b1 = {"C语言"，55};
//	printf("书名：%s\n",b1.name);
//	printf("价格:%d\n",b1.price);
//	return 0;				
//
//}





//int main()
//{	
//	int a=10;
//	printf("%p\n",&a);
//	return 0;
//}
//
//
//
//
//
//
//
////int Max(int x,int y)
////{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=Max(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}


//int Max=(int x,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a=10;
//	int b=20;
//	int max=Max(a,b);
//	printf("max=%d\n",max);
//	max = MAX(a,b);
//	printf("max=%d\n",max);
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=0;
//	max = (a>b?a:b);
//	printf("max=%d\n",max);
//	return 0;
//}
//int main()
////{
////	char arr2[]={'a','b','c'};
////	printf("%d\n", strlen (arr2));
////	return 0;
////}
//{
//printf(")
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//printf("I am\n not happy\n beca se\n");
//return 0;
//}
//int main ()
//{
//	int input=0;
//	printf("你要好好学习嘛？(1/0)>: ");
//	scanf("%d",&input);
//	if (input == 1)
//		printf("good offer\n");
//	else
//		printf("cai ji\n");
//	return 0;
//}