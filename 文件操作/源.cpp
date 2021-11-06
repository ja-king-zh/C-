#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	FILE*pf=fopen("./date.txt", "r");
	if (NULL == pf) {
		perror("fopen");
		return -1;
	}
	//随机读写
	//文件中放着abcdef，如果第一次要读c，则需使用fseek
	fseek(pf, 2, SEEK_SET);
	char ch = fgetc(pf);
	printf("%c", ch);

	//计算指针相对于起始位置的偏移量
	int ret = ftell(pf);
	printf("%d", ret);

	//让指针回到起始位置
	rewind(pf);

	fclose(pf);
	pf = NULL;
	return 0;
}




//int main() {
//	FILE* pf = fopen("C:\\Users\\james\\Desktop\\Python\\C-\\文件操作\\date.txt", "w");
//	if (pf == NULL) {
//		perror("fopen");
//		return -1;
//	}
//	fputc('b', pf);
//	fputc('b', pf);
//	fputc('b', pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}