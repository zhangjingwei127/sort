#include<stdio.h>
#include<stdlib.h>
int QuickSort(int* arr,int left,int right)
{
	if(left>=right)
	{
		return 0;
	}
	int key;
	int i=0;
	int j=0;
	i=left;
	j=right;
	key=arr[i];
	while(i<j)
	{
		while((i<j)&&(arr[j]>=key))
		{
			--j;
		}
		arr[i]=arr[j];
		while((i<j)&&(arr[i]<=key))
		{
			++i;
		}
		arr[j]=arr[i];
	}
	arr[i]=key;
	QuickSort(arr,left,i-1);
	QuickSort(arr,i+1,right);
	return 0;
}

void Print(int *arr,int size)
{
	int i = 0;
	for (i = 0; i < size; ++i)
	{
		printf("%d	", arr[i]);
	}
	printf("\n");
	return;
}
int main()
{
	
	int arr0[]={0,5,3,5,6,4,8,6,5};
	int arr1[]={0,5,7,54,33,444,444,555,555,56,5};
	int arr2[]={0,5,33,54,16,54,8,6,5};
	int size_arr0=sizeof(arr0)/sizeof(arr0[0]);
	int size_arr1=sizeof(arr1)/sizeof(arr1[0]);
	int size_arr2=sizeof(arr2)/sizeof(arr2[0]);
	int left=0;
	int right0;
	int right1;
	int right2;
	right0 = size_arr0 - 1;
	right1 = size_arr1 - 1;
	right2 = size_arr2 - 1;
    QuickSort(arr0,left,right0);
    QuickSort(arr1,left,right1);
    QuickSort(arr2,left,right2);
	Print(arr0, size_arr0);
	Print(arr1, size_arr1);
	Print(arr2, size_arr2);
	
	int i=0;
    for (; i < size_arr1; ++i)
	{
		printf(" %d	",arr1[i]);
	}
	
	return 0;
}
