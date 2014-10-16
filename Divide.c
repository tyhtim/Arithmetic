/*************************************************************************
    > File Name: Divide.c
    > Author: 唐运河
    > Mail: tangyh.yes@gmail.com 
    > Created Time: 2014年10月16日 星期四 11时45分43秒
 ************************************************************************/

#include<stdio.h>
#include<malloc.h>
void Merge(int sourceArr[],int targetArr[],int startIndex,int midIndex,int endIndex)
{
	int i,j,k;
	for(i=midIndex+1,j=startIndex;startIndex<=midIndex&&i<=endIndex;j++)
	{
		if(sourceArr[startIndex]<=sourceArr[i])
		{
			targetArr[j]=sourceArr[startIndex++];
		}
		else
		{
			targetArr[j]=sourceArr[i++];
		}
	}
	if(startIndex<=midIndex)
	{
		for(k=0;k<=midIndex-startIndex;k++)
		{
			targetArr[j+k]=sourceArr[startIndex+k];
		}
	}
	 
	if(i<=endIndex)
	{

		for(k=0;k<=endIndex-i;k++)
		{

			targetArr[j+k]=sourceArr[i+k];
		}
	}
}
//内部使用递归，空间复杂度为n+logn
void MergeSort(int sourceArr[],int targetArr[],int startIndex,int endIndex)
{
	int midIndex,*tempArr;
	if(startIndex==endIndex)
	{
		targetArr[startIndex]=sourceArr[startIndex];
	}
	else
	{
		tempArr=(int*)malloc((endIndex-startIndex+1)*sizeof(int));
		midIndex=(startIndex+endIndex)/2;
		MergeSort(sourceArr,tempArr,startIndex,midIndex);
		MergeSort(sourceArr,tempArr,midIndex+1,endIndex);
		Merge(tempArr,targetArr,startIndex,midIndex,endIndex);
	}
}

//调用
int main()
{

	int a[8]={50,10,20,30,70,40,80,60};
	int b[8];
	MergeSort(a,b,0,7);
	for(int i=0;i<sizeof(a)/sizeof(*a);i++)
		printf("%4d",b[i]);
	printf("\n");
	return 0;
}
