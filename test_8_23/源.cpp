#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
////Aѡ��˵��B�ڶ����ҵ�����
////Bѡ��˵���ҵڶ���E���ģ�
////Cѡ��˵���ҵ�һ��D�ڶ���
////Dѡ��˵��C����ҵ�����
////Eѡ��˵���ҵ��ģ�A��һ��
////����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//int checkData(int* p)
//{
//	int tmp[7] = { 0 }; 
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		if (tmp[p[i]]) 
//		{
//			return 0;
//		}
//		tmp[p[i]] = 1; 
//	}
//	return 1;
//}
//
//int main()
//{
//	int p[5]; 
//	for (p[0] = 1; p[0] <= 5; p[0]++)
//	{
//		for (p[1] = 1; p[1] <= 5; p[1]++)
//		{
//			for (p[2] = 1; p[2] <= 5; p[2]++)
//			{
//				for (p[3] = 1; p[3] <= 5; p[3]++)
//				{
//					for (p[4] = 1; p[4] <= 5; p[4]++)
//					{
//						if ((p[1] == 2) + (p[0] == 3) == 1 && 
//							(p[1] == 2) + (p[4] == 4) == 1 && 
//							(p[2] == 1) + (p[3] == 2) == 1 && 
//							(p[2] == 5) + (p[3] == 3) == 1 && 
//							(p[4] == 4) + (p[0] == 1) == 1 && 
//							checkData(p)
//							)
//						{
//							for (int i = 0; i < 5; i++)
//							{
//								printf("%d ", p[i]);
//							}
//							putchar('\n');
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

int main(void)
{

	int n = 9;
	float* pFloat = (float*)&n;
	printf("n -> %d\n", n);
	printf("pFloat -> %f\n", *pFloat);

	*pFloat = 9.0;
	printf("n -> %d\n", n);
	printf("pFloat -> %f\n", *pFloat);

	
	return 0;
}