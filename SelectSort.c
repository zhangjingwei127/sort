#include<stdio.h>

void SelectSort()
{
	int arr[]={0,12,35,54,67,57,125};
	int temp=0;
	for(int i=0;i<7;++i)
	{
		temp=arr[i];
		for(int j=i+1;j<7;++j)
		{
			if(arr[j]<temp)
			{
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(int a=0;a<7;a++)
	{
		printf("%d	",arr[a]);
	}
	printf("\n");
}
int main()
{
	SelectSort();
	return 0;
}
