#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
void test() {
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

}
int main() {
	test();
	return 0;
}