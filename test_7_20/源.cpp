#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu() {
	printf("*****************************\n");
	printf("**********  1.play  *********\n");
	printf("**********  0.exit  *********\n");
	printf("*****************************\n");
}

void game() {
	//���������
	int a = 0;
	int ret = rand()%100+1;//0-99+1 -> 1-100
	//������
	while (1) {
		printf("�������\n");
		scanf("%d", &a);
		if (a > ret) {
			printf("�´���\n");
		}
		else if (a < ret) {
			printf("��С��\n");
		}
		else {
			printf("�¶���\n");
			break;
		}
	}
}

int main() {
	//��������Ϸ
	int input;
	//������������
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��->\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
//system("shotdown -s -t 60")�ػ�����
//system("shotdown -a")ȡ���ػ�