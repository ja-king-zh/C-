#define _CRT_SECURE_NO_WARNINGS 1
#include  <iostream>
#include  <stdio.h>
#include  <stdlib.h>

using  namespace  std;

#define  LEN  sizeof(NODE)

//用  typedef  将结构体改名字
typedef struct note {
    int num;
    struct note* next;
}NODE;

//创建  无头结点  的链表
NODE* CreateLinkList() {
    NODE* head=NULL, * p1, * p2;
    p1 = p2 = (NODE*)malloc(LEN);
    scanf("%d", &p1->num);
    while (p1->num > 0) {
        if (head == NULL) {
            head = p1;
        }
        else {
            p2->next = p1;
        }
        p2 = p1;
        p1= (NODE*)malloc(LEN);
        scanf("%d", &p1->num);
    }
    free(p1);
    p2->next = NULL;
    return head;
}
void  HandleLinkList(NODE* head) {
    struct note* p1, * p2,*p;
    p1 = p2=p = head;
    int max = 0;
    while (p1 != NULL) {
        if (p1->num > max) {
            max = p1->num;
        }
        p1 = p1->next;
    }
    while (p->next != NULL) {
        p = p->next;
    }
    while (p2->num != max) {
        p2 = p2->next;
    }
    p2->num = p->num;
    p->num = max;
}
//创建  无头结点  的链表
NODE* CreateLinkList();
//找到链表中的最大整数，将最大的数值与表尾的数值对换。
void  HandleLinkList(NODE* head);
//显示链表，已提供
void  DisplayLinkList(NODE* head);
//释放链表空间，已提供
void  FreeLinkList(NODE* head);


int  main()
{
    NODE* head = NULL;

    head = CreateLinkList();
    HandleLinkList(head);
    DisplayLinkList(head);
    FreeLinkList(head);

    return  0;
}



void  DisplayLinkList(NODE* head)
{
    NODE* p;

    for (p = head; p != NULL; p = p->next)
        printf("%d  ", p->num);
}

void  FreeLinkList(NODE* head)
{
    if (head == NULL)
        return;

    NODE* p, * q;
    p = head;
    while (p->next != NULL)
    {
        q = p->next;
        p->next = q->next;
        free(q);
    }
    free(head);
}

//class chr {
//    char str[20];
//public:
//    char getCha(int idx) { 
//        if (str[idx] >= 'a' && str[idx] <= 'z' || str[idx] >= 'A' && str[idx] <= 'Z')
//            return str[idx];
//        else
//            return -1;
//    }
//    char* getStr() { return str; }
//    chr() { strcpy(str, "iloveu"); }
//    chr(char* a) { strcpy(str, a); }
//
//
//};
////定义并实现字符串类（需要补充完善程序部分3-1）
//
//int  main()
//{
//    char  s[20], ch;
//    int  i, m, n;
//
//    scanf("%d", &m);
//    if (m == 0)
//    {
//        //字符串类对象定义（需要补充完善程序部分3-2）
//        chr s1;
//
//
//
//        printf("%s", s1.getStr());
//        scanf("%d", &n);
//        ch = s1.getCha(n);
//        if (ch < 0)
//            printf("  error");
//        else
//            printf("  %c", ch);
//    }
//    else
//    {
//        //读m个字符存入s，并进行字符串类对象定义（需要补充完善程序部分3-3）
//        cin >> s;
//        chr s1(s);
//
//
//        printf("%s", s1.getStr());
//        scanf("%d", &n);
//        ch = s1.getCha(n);
//        if (ch < 0)
//            printf("  error");
//        else
//            printf("  %c", ch);
//    }
//
//    return  0;
//}

//class  A {
//private:
//    int  a;
//public:
//    A() {}
//    A(int x) {
//        a = x;
//    }
//    int show() {
//        return a;
//    }
//    void set(int x) {
//        a = x;
//    }
//    void print() {
//        printf("%d\n", a);
//    }
//};
//class  B : public  A {
//private:
//    int  b;
//public:
//    B() {
//        b = 4;
//        A::set(3);
//    }
//    void print() {
//        printf("%d\n", A::show());
//        printf("%d", b);
//    }
//
//};
//int  main() {
//    int  x;
//    scanf("%d", &x);
//    A  aa(x);
//    aa.print();//输出成员a的值
//    B  bb;
//    bb.print();//输出成员a和b的值
//    return  0;
//}