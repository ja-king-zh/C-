#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;
#define max 100
#define add 10
typedef struct Seqlist {
	Elemtype* a;
	int capacity;
	int size;
}Seqlist;
void SeqlistInit(Seqlist *s) {
	s->a = (Elemtype*)malloc(max * sizeof(Elemtype));
	s->capacity = max;
	s->size = 0;
}
void PushBack(Seqlist* s, int x) {
	if (s->size == s->capacity) {
		//ÂúÁË£¬À©ÈÝ
		s->a = (Elemtype*)realloc(s->a, (s->capacity + add) * sizeof(Elemtype));
		s->capacity = s->capacity + add;
	}
	s->a[s->size] = x;
	s->size++;
}
void PushFront(Seqlist *s,int x) {
	if (s->size == s->capacity) {
		//ÂúÁË£¬À©ÈÝ
		s->a = (Elemtype*)realloc(s->a, (s->capacity + add) * sizeof(Elemtype));
		s->capacity = s->capacity + add;
	}
	for (int i = s->size - 1;i >= 0;i--) {
		s->a[i + 1] = s->a[i];
	}
	s->a[0] = x;
	s->size++;
}
void PopBack(Seqlist* s) {
	if (s->size == 0)return;
	s->size--;
}
void PopFront(Seqlist* s) {
	if (s->size == 0)return;
	for (int i = 1;i < s->size;i++) {
		s->a[i - 1] = s->a[i];
	}
	s->size--;
}



void Insert(Seqlist* s, int pos, int x) {
	if (s->size == s->capacity) {
		//ÂúÁË£¬À©ÈÝ
		s->a = (Elemtype*)realloc(s->a, (s->capacity + add) * sizeof(Elemtype));
		s->capacity = s->capacity + add;
	}
	for (int i = s->size - 1;i >= pos;i--) {
		s->a[i + 1] = s->a[i];
	}
	s->a[pos] = x;
}
void Delete(Seqlist* s, int pos) {
	if (s->size == 0)return;
	for (int i = pos + 1;i < s->size;i++) {
		s->a[i - 1] = s->a[i];
	}
	s->size--;
}

void Print(Seqlist* s) {
	for (int i = 0;i < s->size;i++) {
		printf("%d ", s->a[i]);
	}
	printf("\n");
}
int main() {
	Seqlist s;
	SeqlistInit(&s);
	PushBack(&s, 1);
	PushBack(&s, 2);
	PushBack(&s, 3);
	PushBack(&s, 4);
	PushFront(&s, 5);
	PopBack(&s);
	PopBack(&s);
	PopBack(&s);
	PopFront(&s);
	Print(&s);
	return 0;
}