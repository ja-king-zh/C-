#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////����һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿�֡�
//void swap(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main() {
//	int arr[10];
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr, sz);
//	for (int i = 0;i < 10;i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//Ϊʲô��ѭ����
#include <stdio.h>
int main()

{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hello bit\n");
    }
    return 0;
}
