#include<stdio.h>
int partision(int a[],int key,int start,int end)
{
	int s=start;
	int e=end;
	while(s<e)
	{
		while(a[s]<=key)
		{
			s++;
		}
		while(a[e]>key)
		{
			e--;
		}
		//exchange
		if(s<e)
		{
			int temp=a[s];
			a[s]=a[e];
			a[e]=temp;
		}
	}
	int temp=a[e];
	a[e]=key;
	a[start]=temp;
	return e;
}
void quicksort(int a[],int n,int start,int end)
{
	if(start>end)
	return;
	if(start<end)
	{
		int p=a[start];
		p=partision(a,p,start,end);
		//0 to pi-1 left part
		quicksort(a,n,start,p-1);
		//pi+1 to end
		quicksort(a,n,p+1,end);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,n,0,n-1);
		for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
//Time complexitiy--->O(nlogn)
//Space complexitiy--->O(n)
