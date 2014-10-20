/*************************************************************************
    > File Name: CChar.c
    > Author: 唐运河
    > Mail: tangyh.yes@gmail.com 
    > Created Time: 2014年10月20日 星期一 09时32分36秒
 ************************************************************************/

#include<stdio.h>
int main(){
	char  a[]="abcde";
	printf("字符串a=%s",a);
	printf("\n");
	int size=sizeof(a);
	printf("字符串a的长度为：%d",size);
	return 0;
}
