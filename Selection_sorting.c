#include<stdio.h>
void selection_sort(int A[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min_index=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[min_index])
			{
				min_index=j;
			}
		}
		int temp=A[i];
		A[i]=A[min_index];
		A[min_index]=temp;
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	selection_sort(A,n);
	for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
	}
}
