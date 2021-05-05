#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include <stdlib.h>
struct note
{
	int no;
	struct note* next;
};
struct note* Create()
{
	struct note* head, * p1, * p2;
	head = p1 = p2 = (struct note*)malloc(sizeof(struct note));
	scanf("%d ", &p1->no);
	head->next = NULL;
	while (p1->no != 0)
		{
			p1= (struct note*)malloc(sizeof(struct note));
			scanf("%d", &p1->no);
			p1->next = p2;
			p2 = p1;
		}
	p1 = p1->next;
	return p1;
}
int main()
{
	struct note* head;
	head = Create();
	while (head != NULL)
	{
		printf("%d ", head->no);
		head = head->next;
	}
	return 0;
}

//struct note
//{
//	int no;
//	struct note* next;
//};
//struct note* Create()
//{
//	struct note* head, * p1, * p2;
//	head = p1 = p2 = (struct note*)malloc(sizeof(struct note));
//	scanf("%d",&p1->no);
//	head->next = NULL;
//	while (p1->no > 0)
//	{
//		p1= (struct note*)malloc(sizeof(struct note));
//		scanf("%d", &p1->no);
//		p1->next = p2;
//		p2 = p1;
//	}
//	p1 = p1->next;
//	return p1;
//}
//int main()
//{
//	int n,i=1;
//	struct note* head;
//	scanf("%d", &n);
//	head = Create();
//	while (i < n && head != NULL)
//	{
//		head = head->next;
//		i++;
//	}
//	if (i==n)
//	{
//		printf("%d", head->no);
//	}
//	else
//	{
//		printf("Not Found");
//	}
//	return 0;
//}


//struct stu
//{
//	int no;
//	struct stu* next;
//};
//struct stu* Create()
//{
//	struct stu* p1, * head = NULL, * p2;
//		p1 = p2 = (struct stu*)malloc(sizeof(struct stu));
//		scanf("%d",&p1->no);
//		while(p1->no>0)
//		{
//			if (head == NULL)
//			{
//				head = p1;
//			}
//			else
//			{
//				p2->next = p1;
//			}
//			p2 = p1;
//			p1 = (struct stu*)malloc(sizeof(struct stu));
//			scanf("%d", &p1->no);
//		}
//		p2->next = NULL;
//		free(p1);
//		return head;
//}
//int main()
//{
//	struct stu* head;
//	head=Create();
//	while (head != NULL)
//	{
//		printf("%d ", head->no + 3);
//		head = head->next;
//	}
//	return 0;
//}



//typedef struct  Node
//{
//    char elem;
//    struct Node* next;
//}Node;
//
//struct Node* Create()
//{
//    struct Node* head, * p1, * p2;
//    head = p1 = p2 = (struct Node*)malloc(sizeof(struct Node));
//    scanf("%c", &p1->elem);
//    p2->next = NULL;
//    while (p1->elem != '#')
//        {
//            p1= (struct Node*)malloc(sizeof(struct Node));
//            scanf("%c", &p1->elem);
//            p1->next = p2;
//            p2 = p1;
//        }
//    p1 = p1->next;
//    return p1;
//}
//void Print(struct Node* head)
//{
//    struct Node* p1=head;
//    while (p1 != NULL)
//    {
//        printf("%c", p1->elem);
//        p1 = p1->next;
//    }
//    return;
//}
//int main()
//{
//    Node* head = 0;
//    head = Create();
//    Print(head);
//    return 1;
//
//}





//typedef struct  Node
//{
//    char elem;
//    struct Node* next;
//}Node;
//void Print(struct Node* head)
//{
//    if (head == 0)
//        return;
//
//    struct Node* p = head;
//
//    while (p != 0)
//    {
//        printf("%c", p->elem);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//struct Node* Create()
//{
//    struct Node* head, * p1, * p2;
//    head = p1 = p2 = (struct Node*)malloc(sizeof(struct Node));
//    scanf("%c", &p1->elem);
//    while (p1->elem != '#')
//    {
//        p1= (struct Node*)malloc(sizeof(struct Node));
//        scanf("%c", &p1->elem);
//        p1->next = p2;
//        p2 = p1;
//    }
//    head = NULL;
//    p1 = p1->next;
//    return p1;
//}
//int main()
//{
//    struct Node* head = 0;
//    head = Create();
//    Print(head);
//    return 1;
//}



//struct stu
//{
//	char num;
//	struct stu* next;
//};
//struct stu* Create()
//{
//	struct stu * p1, * p2,*p;
//	p1 = p2 = (struct stu*)malloc(sizeof(struct stu));
//	scanf("%c", &p1->num);
//	p = p1;
//	while (p1->num != '\n')
//	{
//		p2 = p1;
//		p1= (struct stu*)malloc(sizeof(struct stu));
//		scanf("%c", &p1->num);
//		p1->next = p2;
//	}
//	p->next = NULL;
//	return p1;
//}
//int main()
//{
//	struct stu* p;
//	p = Create();
//	p = p->next;
//	while (p != NULL)
//	{
//		printf("%c ", p->num);
//		p = p->next;
//	}
//	return 0;
//}

//typedef struct  Node
//{
//    char elem;
//    struct Node* next;
//
//}Node;
//
//void Print(struct Node* head)
//{
//    if (head == 0)
//        return;
//    struct Node* p = head;
//    while (p != 0)
//    {
//        printf("%c", p->elem);
//        p = p->next;
//    }
//    printf("\n");
//}
//struct Node* Create()
//{
//    struct Node* head=NULL, * p1, * p2;
//    p1 = p2 = (struct Node*)malloc(sizeof(struct Node));
//    scanf("%c",&p1->elem);
//    while (p1->elem != '#')
//    {
//        if (head == NULL)
//        {
//            head = p1;
//        }
//        else
//        {
//            p2->next = p1;
//        }
//        p2 = p1;
//        p1 = (struct Node*)malloc(sizeof(struct Node));
//        scanf("%c", &p1->elem);
//    }
//    p2->next = NULL;
//    free(p1);
//    return head;
//}
//
//int main()
//{
//    struct Node* head = 0;
//    head = Create();
//    Print(head);
//    return 1;
//}


//struct zifu
//{
//	char a;
//	struct zifu* next;
//};
//struct zifu* Creat()
//{
//	struct zifu* head=NULL, * p1, * p2;
//	p1 = p2 = (struct zifu*)malloc(sizeof(struct zifu));
//	scanf("%c", &p1->a);
//	while (p1->a != '\n')
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
//		p1= (struct zifu*)malloc(sizeof(struct zifu));
//		scanf("%c", &p1->a);
//	}
//	p2->next = NULL;
//	free(p1);
//	return head;
//}
//int main()
//{
//	int n=0,a,i,b;
//	struct zifu* head = NULL,*p1,*p2;
//	head = Creat();
//	struct zifu* p = head;
//	while (p!= NULL)
//		{
//			n++;
//			p = p->next;
//		}
//	b=n/2+1;
//	a = n / 2;
//	p1 = head;
//	p2 = head;
//	for (i = 0;i < b;i++)
//	{
//		p1 = p1->next;
//	}
//	for (i = 1;i < a;i++)
//	{
//		p2 = p2->next;
//	}
//	for (i = 0;i < a;i++)
//	{
//		if (p2->a == p1->a)
//		{
//			p2 = head;
//			for (int j = 1;j < a - i-1;j++)
//			{
//				p2 = p2->next;
//			}
//			p1 = p1->next;
//		}
//	}
//	p2 = head;
//	if (p1 == NULL)
//	{
//		for (i = 0;i < n;i++)
//		{
//			printf("%c", p2->a);
//			p2 = p2->next;
//		}
//		printf(" is symmetrical");
//	}
//	else
//	{
//		p1 = head;
//		for (i = 0;i < n;i++)
//		{
//			printf("%c", p1->a);
//			p1 = p1->next;
//		}
//		printf(" is not symmetrical");
//	}
//	return 0;
//}



//struct stu
//{
//	int no;
//	int num;
//	struct stu* next;
//};
//struct stu* Creat()
//{
//	struct stu* p1,*head=NULL, * p2;
//	p1 = p2 = (struct stu*)malloc(sizeof(struct stu));
//	scanf("%d",&p1->no);
//	p1->num = 1;
//	for (int i=1;p1->no != 0;i++)
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
//		p1 = (struct stu*)malloc(sizeof(struct stu));
//		scanf("%d", &p1->no);
//		p1->num = i + 1;
//	}
//	p2->next = NULL;
//	free(p1);
//	return head;
//}
//struct stu* Find(struct stu *head,int n)
//{
//	struct stu* p = head;
//	while (p != NULL && p->no != n)
//	{
//		p = p->next;
//	}
//	return p;
//}
//int main()
//{
//	int n;
//	struct stu *head=NULL,*p=NULL;
//	head=Creat();
//	scanf("%d", &n);
//	p=Find(head,n);
//	if (p == NULL)
//	{
//		printf("-1");
//	}
//	else
//	{
//		printf("%d", p->num);
//	}
//	return 0;
//}



//struct stu
//{
//	char name[10];
//	float qimo;
//	float a1;
//	float a2;
//	float ps;
//	float sum;
//};
//int main()
//{
//	int i;
//	struct stu s[20];
//	scanf("%s%f%f%f%f", &s[0].name, &s[0].qimo, &s[0].a1, &s[0].a2, &s[0].ps);
//	for (i=0;;i++)
//	{
//		if (s[i].name != "#")
//		{
//			scanf("%s%f%f%f%f", &s[i + 1].name, &s[i + 1].qimo, &s[i + 1].a1, &s[i + 1].a2, &s[i + 1].ps);
//			s[i].sum = s[i].qimo * 0.5 + s[i].a1 * 0.2 + s[i].a2 * 0.2 + s[i].ps * 0.1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (i = 0;s[i].name != "#";i++)
//	{
//		if (s[i].sum >= 60)
//		{
//			printf("%s %f", s[i].name, s[i].sum);
//		}
//		else
//		{
//			printf("%s no", s[i].name);
//		}
//	}
//	return 0;
//}





//struct stu
//{
//	char name[10];
//	char from[10];
//	char go[10];
//};
//int main()
//{
//	int n,i,j;
//	struct stu* p;
//	scanf("%d",&n);
//	p = (struct stu*)malloc(n * sizeof(struct stu));
//	for (i = 0;i < n;i++)
//	{
//		scanf("%s%s%s", &p[i].name, &p[i].from, &p[i].go);
//	}
//	for (i = 0;i < n;i++)
//	{
//		printf("%s:%s ", p[i].from, p[i].name);
//		for (j = i+1;j < n;j++)
//		{
//			if (p[i].from == p[j].from)
//			{
//				printf("%s",p[j].name);
//			}
//		}
//		printf("\n");
//	}
//	printf("zichuan:");
//	for (i = 0;i < n;i++)
//	{
//		if (p[i].go =="zichuan")
//		{
//			printf("%s ",p[i].go);
//		}
//	}
//	printf("\n");
//	printf("linzi:");
//	for (i = 0;i < n;i++)
//	{
//		if (p[i].go == "linzi")
//		{
//			printf("%s ", p[i].go);
//		}
//	}
//	printf("\n");
//	printf("zhoucun:");
//	for (i = 0;i < n;i++)
//	{
//		if (p[i].go == "zhoucun")
//		{
//			printf("%s ", p[i].go);
//		}
//	}
//	printf("\n");
//	printf("boshan:");
//	for (i = 0;i < n;i++)
//	{
//		if (p[i].go == "boshan")
//		{
//			printf("%s ", p[i].go);
//		}
//	}
//	printf("\n");
//	return 0;
//}





//int main()
//{
//	int i;
//	int a[30], b[30];
//	for (i = 0;;i++)
//	{
//		scanf("%c", &a[i]);
//		if (a[i] != '\n')
//		{
//			b[i] = a[i];
//		}
//		else
//		{
//			break;
//		}
//	}
//	b[i] = '\0';
//	printf("%s", b);
//	return 0;
//}

//int main()
//{
//	char a[50];
//	int i,j=0;
//	for (i = 0;;i++)
//	{
//		scanf("%c", &a[i]);
//		if (a[i] != '\n')
//		{
//			;
//		}
//		else
//		{
//			break;
//		}
//	}
//	a[i] = '\0';
//	for (i = 0;a[i] != '\0';i++)
//	{
//		switch (a[i])
//		{
//		case'A':
//		case'B':
//		case'C':
//		case'D':
//		case'E':
//		case'F':
//		case'G':
//		case'H':
//		case'I':
//		case'J':
//		case'K':
//		case'L':
//		case'M':
//		case'N':
//		case'O':
//		case'P':
//		case'Q':
//		case'R':
//		case'S':
//		case'T':
//		case'U':
//		case'V':
//		case'W':
//		case'X':
//		case'Y':
//		case'Z':
//			j++;
//			break;
//		default:
//			break;
//		}
//	}
//	printf("%d",j);
//	return 0;
//}
//struct stu
//{
//	int no;
//	char name[10];
//	char sex;
//	int jishu;
//};
//int main()
//{
//	int i,n,input,max=1;
//	struct stu* p;
//	scanf("%d",&n);
//	p = (struct stu*)malloc(n * sizeof(struct stu));
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d %s %c", &p[i].no, &p[i].name, &p[i].sex);
//		p[i].jishu = 0;
//	}
//	scanf("%d", &input);
//	while (input > 0)
//	{
//		for (i = 0;i < n;i++)
//		{
//			if (input == p[i].no)
//			{
//				p[i].jishu=p[i].jishu+1;
//				input = 0;
//			}
//		}
//		scanf("%d", &input);
//	}
//	for (i = 0;i < n;i++)
//	{
//		if (max < p[i].jishu)
//		{
//			max = p[i].jishu;
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		if (max == p[i].jishu)
//		{
//			printf("%d %s %c\n",p[i].no,p[i].name,p[i].sex);
//		}
//	}
//	return 0;
//}




//struct stu
//{
//	char name[5];
//	float nl;
//	float jkd;
//	float bizhi;
//};
//int main()
//{
//	int i,j,k,l;
//	float min1 =1000, min2 =1000, min3 = 1000;
//	struct stu s[9];
//	for (i = 0;i < 9;i++)
//	{
//		scanf("%s%f%f", &s[i].name,&s[i].nl,&s[i].jkd);
//		s[i].bizhi = s[i].nl / s[i].jkd;
//	}
//	for (j = 0;j < 3;j++)
//	{
//		if (s[j].bizhi < min1)
//		{
//			min1 = s[j].bizhi;
//		}
//	}
//	for (j = 0;j < 3;j++)
//	{
//		if (min1 == s[j].bizhi)
//		{
//			printf("%s ", s[j].name);
//		}
//	}
//	for(k=3;k<6;k++)
//	{
//		if (s[k].bizhi < min2)
//		{
//			min2 = s[k].bizhi;
//		}
//	}
//	for (k = 3;k < 6;k++)
//	{
//		if (min2 == s[k].bizhi)
//		{
//			printf("%s ", s[k].name);
//		}
//	}
//	for (l = 6;l < 9;l++)
//	{
//		if (s[l].bizhi < min3)
//		{
//			min3 = s[l].bizhi;
//		}
//	}
//	for (l = 6;l < 9;l++)
//	{
//		if (min3 == s[l].bizhi)
//		{
//			printf("%s", s[l].name);
//		}
//	}
//	return 0;
//}





//struct huoche
//{
//	char no[5];
//	float chushi;
//	float chufen;
//	float moshi;
//	float mofen;
//	int price;
//	float a;
//};
//int main()
//{
//	int n, i, k, j;
//	float min = 1000;
//	struct huoche* emp;
//	scanf("%d", &n);
//	emp = (struct huoche*)malloc(n * sizeof(struct huoche));
//	for (i = 0;i < n;i++)
//	{
//		scanf("%s%f%f%f%f%d", &emp[i].no, &emp[i].chushi, &emp[i].chufen, &emp[i].moshi, &emp[i].mofen, &emp[i].price);
//		emp[i].a = emp[i].moshi - emp[i].chushi+(emp[i].mofen-emp[i].chufen)*0.016;
//	}
//	for (j = 0;j < n;j++)
//	{
//		if (emp[j].a < min)
//		{
//			min = emp[j].a;
//		}
//	}
//	for (k = 0;k < n;k++)
//	{
//		if (emp[k].a == min)
//		{
//			printf("%s %.0f %.0f %.0f %.0f %d", emp[k].no, emp[k].chushi, emp[k].chufen, emp[k].moshi, emp[k].mofen, emp[k].price);
//		}
//	}
//	return 0;
//}





//struct zifu
//{
//	char i;
//	struct zifu* next;
//};
//int main()
//{
//	struct zifu* p1,*head=NULL,*p2;
//	p1=p2 = (struct zifu *)malloc(sizeof(struct zifu));
//	scanf("%c",&p1->i);
//	while (p1->i != '\n')
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
//		p1 = (struct zifu*)malloc(sizeof(struct zifu));
//		scanf("%c", &p1->i);
//	}
//	return 0;
//}