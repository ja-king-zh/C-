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
	//生成随机数
	int a = 0;
	int ret = rand()%100+1;//0-99+1 -> 1-100
	//猜数字
	while (1) {
		printf("请猜数字\n");
		scanf("%d", &a);
		if (a > ret) {
			printf("猜大了\n");
		}
		else if (a < ret) {
			printf("猜小了\n");
		}
		else {
			printf("猜对了\n");
			break;
		}
	}
}

int main() {
	//猜数字游戏
	int input;
	//设置随机数起点
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择->\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
//system("shotdown -s -t 60")关机命令
//system("shotdown -a")取消关机