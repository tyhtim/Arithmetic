/*************************************************************************
    > File Name: reorder.c
    > Author: 唐运河
    > Mail: tangyh.yes@gmail.com 
    > Created Time: 2014年10月21日 星期二 23时03分52秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void rev(char *a)
{
	int length=0,i,j;
	int n = strlen(a);
	for(i=n-1;i>=0;i--)
	{
		if (a[i]==' ')
		{
			for (j=0; j<length; j++)
				printf("%c",a[i+j+1]);
			printf(" ");
			length = 0;
		}
		else
			length++;
		if(i == 0)
		{
			for (j=0; j<=length; j++)
				printf("%c",a[i+j]);
		}
	}
}

int main()
{
	char *a = "I am a Student";
	printf("逆序前：%s\n",a);
	printf("逆序后：");
	rev(a);
	printf("\n");
	return 0;
}
