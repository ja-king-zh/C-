#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	int i=0;
	char password[20]={0};
	for(i=0;i<3;i++)
	{
		printf("ÇëÊäÈëÃÜÂë:");
		scanf("%s",password);
		if(strcmp(password,"123456")==0)
		{
			printf("µÇÂ¼³É¹¦\n");
			break;
		}
		else{printf("ÃÜÂë´íÎó\n");}
	}
	if (i==3)
		printf("Èý´ÎÃÜÂë¾ù´íÎó\n");
	return 0;
}
