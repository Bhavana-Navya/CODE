#include<stdio.h>
//Merge sort
void merge(int a[],int start,int mid,int end,int n)
{
	int i=start;//first part begin
	int j=mid+1;//second part begin
	int b[end-start+1];
	int k=0;
	while(i<=mid && j<=end)
	{
		if(a[i]<a[j])
		{
			b[k++]=a[i++];
		}
		else
		{
			b[k++]=a[j++];
		}
	}
	while(i<=mid)
		b[k++]=a[i++];
	while(j<=end)
		b[k++]=a[j++];
	k=0;
	for(i=start;i<=end;i++)
	{
		a[i]=b[k++];
	}
}
void mergesort(int a[],int n,int start,int end)
{
	if(start>=end)
	{
		return;
	}
	int mid=(start+end)/2;
	mergesort(a,n,start,mid);
	mergesort(a,n,mid+1,end);
	merge(a,start,mid,end,n);
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,n,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
//Time complexitiy--->O(n^2)
//Space complexitiy--->O(1)
