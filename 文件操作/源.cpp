#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	FILE*pf=fopen("./date.txt", "r");
	if (NULL == pf) {
		perror("fopen");
		return -1;
	}
	//�����д
	//�ļ��з���abcdef�������һ��Ҫ��c������ʹ��fseek
	fseek(pf, 2, SEEK_SET);
	char ch = fgetc(pf);
	printf("%c", ch);

	//����ָ���������ʼλ�õ�ƫ����
	int ret = ftell(pf);
	printf("%d", ret);

	//��ָ��ص���ʼλ��
	rewind(pf);

	fclose(pf);
	pf = NULL;
	return 0;
}




//int main() {
//	FILE* pf = fopen("C:\\Users\\james\\Desktop\\Python\\C-\\�ļ�����\\date.txt", "w");
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