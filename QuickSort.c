/*************************************************************************
    > File Name: QuickSort.c
    > Author: 唐运河
    > Mail: tangyh.yes@gmail.com 
    > Created Time: 2014年10月16日 星期四 18时29分18秒
 ************************************************************************/

#include<stdio.h>

void quicksort(int a[],int numsize)/*a是整形数组，numsize是元素个数*/
{
	int i=0,j=numsize-1;
	int val=a[0];/*指定参考值val大小*/
	if(numsize>1)/*确保数组长度至少为2，否则无需排序*/
	{
		while(i<j)/*循环结束条件*/
		{

			/*从后向前搜索比val小的元素，找到后填到a[i]中并跳出循环*/
			for(;j>i;j--)
			 	if(a[j]<val)
				{
 					a[i++]=a[j];
					break;
				}
			/*从前往后搜索比val大的元素，找到后填到a[j]中并跳出循环*/
			for(;i<j;i++)
	 			if(a[i]>val)
				{

	 				a[j--]=a[i];
					break;
				}
		}
		a[i]=val;/*将保存在val中的数放到a[i]中*/
		QuickSort(a,i);/*递归，对前i个数排序*/
		QuickSort(a+i+1,numsize-i-1);/*对i+1到numsize-1这numsize-1-i个数排序*/
	}
}
int main()
{
	void quicksort(int a[],int numsize);
	int a[10]={6,1,3,2,4,5,19,9,10,8};
	quicksort(a,10);
	return 0;
}
