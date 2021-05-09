#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
struct stu
{
	char name[5];
	struct stu* next;
};
struct stu* create()
{
	struct stu* head = NULL, * p1, * p2;
	p1 = p2 = (struct stu*)malloc(sizeof(struct stu));
	scanf("%s", &p1->name);
	while (p1->name[0] != '0')
	{
		if (head == NULL)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;
		p1= (struct stu*)malloc(sizeof(struct stu));
		scanf("%s", &p1->name);
	}
	free(p1);
	p2->next = NULL;
	return head;
}
int main()
{
	int i = 0,j;
	struct stu* head,*p1,*p2,*p3;
	head = create();
	p1=p2 =p3= head;
	if (p1 == head)
	{
		while (p2 != NULL)
		{
			if (p1->name[0] == p2->name[0])
			{
				i=i+1;
			}
			p2 = p2->next;
		}
		printf("%s:%d\n", p1->name, i);
		p1 = p1->next;
	}
	while (p1!= NULL)
	{
		while(head!=p1)
		{
			if (head[0].name != p1[0].name&&head==p1)
			{
				break;
			}
			if (p1 == NULL)
			{
				break;
			}
			if (head->name[0] == p1->name[0])
			{
				p1 = p1->next;
				head = p3;
			}
			head = head->next;
		}
		head = p3;
		if(p1!=NULL)
		{
			p2 = p1;
			j = 0;
			while (p2 != NULL)
			{
				if (p1->name[0] == p2->name[0])
				{
					j++;
				}
				p2 = p2->next;
			}
			printf("%s:%d\n",p1->name,j);
			p1 = p1->next;
		}
	}
	return 0;
}