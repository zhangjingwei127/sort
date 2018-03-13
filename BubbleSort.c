#include<stdio.h>
#include<stdlib.h>
/*
void BubbleSort(int** arr,int size)
{
	int i=0;
	int j=0;
	int temp=0;
	for(i=0;i<(size-1);++i)
	{
		for(j=0;j<(size-1);++j)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void Print(int** arr,int size)
{
	for(int i=0;i<size;++i)
	{
		printf("%d<",*arr[i]);
	}
	printf("\n");
}

int main()
{
	int* arr0[]={12,11,10,9,8,7,6,5,4,3,2,1,12,10,54};
	int* arr1[]={11,12,9,10,7,8,5,6,3,4,1,2,12,10,54};
	int* arr2[]={3,2,1,12,11,10,6,5,4,9,8,7,12,10,54};
	int size0=(sizeof(arr0)/sizeof(arr[0]));
	int size1=(sizeof(arr1)/sizeof(arr[0]));
	int size2=(sizeof(arr2)/sizeof(arr[0]));
	BubbleSort(arr0,size0);
	Print(arr0,size0);
	BubbleSort(arr1,size1);
	Print(arr1,size1);
	BubbleSort(arr3,size3);
	Print(arr03,size3);
	return 0;
}
*/
void BubbleSort()
{
	int temp=0;
	int arr[]={0,5,4,4,3,7,54};
	for(int i=0;i<7-1;++i)
	{
		for(int j=0;j<7-1;++j)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int a=0;a<7;++a)
	{
		printf("%d	",arr[a]);
	}
	printf("\n");
}
int main()
{
	BubbleSort();
	return 0;
}
