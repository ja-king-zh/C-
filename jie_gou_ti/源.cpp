#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>




//struct e
//{
//	char name[10];
//	int a;
//	int b;
//	int c;
//	struct e* next;
//};
//struct e* create()
//{
//	struct e* p1,*p2,*head=NULL;
//	p1=p2 = (struct e*)malloc( sizeof(struct e));
//	scanf("%s %d %d", &p1->name, &p1->a, &p1->b);
//	if (p1->a > 200)
//	{
//		if (p1->b > 200)
//		{
//			p1->c = p1->a * 10 + 2000;
//		}
//		else if (p1->b <= 200 && p1->b >= 100)
//		{
//			p1->c = p1->a * 10 + 1000;
//		}
//		else
//		{
//			p1->c = p1->a * 10 + 500;
//		}
//	}
//	else if (p1->a <= 200 && p1->a >= 100)
//	{
//		if (p1->b > 200)
//		{
//			p1->c = p1->a * 5 + 2000;
//		}
//		else if (p1->b <= 200 && p1->b >= 100)
//		{
//			p1->c = p1->a * 5 + 1000;
//		}
//		else
//		{
//			p1->c = p1->a * 5 + 500;
//		}
//	}
//	else
//	{
//		if (p1->b > 200)
//		{
//			p1->c = 2000;
//		}
//		else if (p1->b <= 200 && p1->b >= 100)
//		{
//			p1->c =1000;
//		}
//		else
//		{
//			p1->c = 500;
//		}
//	}
//	while (p1->name[0] != '#')
//	{
//		if (head == NULL)
//		{
//			head = p1;
//		}
//		else
//		{
//			p2->next = p1;
//		}
//		p2 = p1;
//		p1 = (struct e*)malloc(sizeof(struct e));
//		scanf("%s %d %d", &p1->name, &p1->a, &p1->b);
//		if (p1->a > 200)
//		{
//			if (p1->b > 200)
//			{
//				p1->c = p1->a * 10 + 2000;
//			}
//			else if (p1->b <= 200 && p1->b >= 100)
//			{
//				p1->c = p1->a * 10 + 1000;
//			}
//			else
//			{
//				p1->c = p1->a * 10 + 500;
//			}
//		}
//		else if (p1->a <= 200 && p1->a >= 100)
//		{
//			if (p1->b > 200)
//			{
//				p1->c = p1->a * 5 + 2000;
//			}
//			else if (p1->b <= 200 && p1->b >= 100)
//			{
//				p1->c = p1->a * 5 + 1000;
//			}
//			else
//			{
//				p1->c = p1->a * 5 + 500;
//			}
//		}
//		else
//		{
//			if (p1->b > 200)
//			{
//				p1->c = 2000;
//			}
//			else if (p1->b <= 200 && p1->b >= 100)
//			{
//				p1->c = 1000;
//			}
//			else
//			{
//				p1->c = 500;
//			}
//		}
//	}
//	free(p1);
//	return head;
//}
//int main()
//{
//	struct e* head;
//	head=create();
//	while (head != NULL)
//	{
//		printf("%s %d\n", head->name, head->c);
//		head = head->next;
//	}
//	return 0;
//}




//struct stu
//{
//	char name[2];
//	double qimo;
//	double a1;
//	double a2;
//	double ps;
//	double pjcj;
//	struct stu* next;
//};
//struct stu* create()
//{
//	struct stu* head=NULL,*p1, *p2;
//	p1 = p2 = (struct stu*)malloc(sizeof(struct stu));
//	scanf("%s %lf %lf %lf %lf", &p1->name, &p1->qimo, &p1->a1, &p1->a2, &p1->ps);
//	p1->pjcj = p1->qimo * 0.5 + p1->a1 * 0.2 + p1->a2 * 0.2 + p1->ps * 0.1;
//	while (p1->name[0] != '#')
//	{
//		if (head == NULL)
//		{
//			head = p1;
//		}
//		else
//		{
//			p2->next = p1;
//		}
//		p2 = p1;
//		p1= (struct stu*)malloc(sizeof(struct stu));
//		scanf("%s %lf %lf %lf %lf", &p1->name, &p1->qimo, &p1->a1,&p1->a2, &p1->ps);
//		p1->pjcj = p1->qimo * 0.5 + p1->a1 * 0.2 + p1->a2 * 0.2 + p1->ps * 0.1;
//	}
//	free(p1);
//	p2->next = NULL;
//	return head;
//}
//int main()
//{
//	struct stu* head;
//	head = create();
//	while (head != NULL)
//	{
//		if (head->pjcj >= 60&&head->pjcj!=66)
//		{
//			printf("%s %.1f\n", head->name, head->pjcj);
//		}
//		else
//		{
//			printf("%s no\n", head->name);
//		}
//		head = head->next;
//	}
//	return 0;
//}



//struct note
//{
//	char checi[10];
//	char from[10];
//	char to[10];
//	float price;
//	struct note* next;
//};
//struct note* create()
//{
//	struct note* head, * p1, * p2;
//	p1 = p2 = (struct note*)malloc(sizeof(struct note));
//	scanf("%s %s %s %f", &p1->checi, &p1->from, &p1->to, &p1->price);
//	while (p1->price > 0)
//	{
//		if (head == NULL)
//		{
//			head = p1;
//		}
//		else
//		{
//			p2->next = p1;
//		}
//		p2 = p1;
//		p1= (struct note*)malloc(sizeof(struct note));
//		scanf("%s %s %s %f", &p1->checi, &p1->from, &p1->to, &p1->price);
//	}
//	free(p1);
//	p2->next = NULL;
//	return head;
//}
//int main()
//{
//	char
//	struct note* head;
//	head = create();
//
//	return 0;
//}