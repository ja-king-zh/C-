#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct ListNode {
    int num;
    struct ListNode* next;
};
struct ListNode* create(struct ListNode* head) {
    struct ListNode * p1, * p2;
    p1 = p2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    scanf("%d", &p1->num);
    while (p1->num!=0){
        if (head == NULL) {
            head = p1;
        }
        else {
            p2->next = p1;
        }
        p2 = p1;
        p1= (struct ListNode*)malloc(sizeof(struct ListNode));
        scanf("%d", &p1->num);
    }
    p2->next = NULL;
    free(p1);
    return head;
}
void print(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->num);
        head = head->next;
    }
    printf("\n");
}
struct ListNode* insert(struct ListNode* head,int i) {
    struct ListNode* p1,*p2,*p;
    p1 =p2= head;
    for (int j = 1;j < i;j++) {
        p2 = p1;
        p1 = p1->next;
    }
    p= (struct ListNode*)malloc(sizeof(struct ListNode));
    printf("请输入插入的数：");
    scanf("%d", &p->num);
    p2->next = p;
    p->next = p1;
    return head;
}
struct ListNode* Delete(struct ListNode* head, int i) {
    struct ListNode* p1, * p2;
    p1 = p2 = head;
    while (p1!=NULL&&p1->num != i) {
        p2 = p1;
        p1 = p1->next;
    }
    if (p1 == head) {
        head = head->next;
    }
    else {
        p2->next = p1->next;
    }
    return head;
}
int main() {
    struct ListNode* head=NULL;
    int a, b;
    head=create(head);
    print(head);
    printf("请输入插入位置：");
    scanf("%d", &a);
    head = insert(head,a);
    print(head);
    printf("请输入删除值：");
    scanf("%d", &b);
    head = Delete(head, b);
    print(head);
	return 0;
}