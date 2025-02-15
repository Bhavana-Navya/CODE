#include<stdio.h>
void InsertionSort(int a[],int n)
{
  int i,j;
	for(i=0;i<n;i++)
{
   j=i-1;
	int temp=a[i];  	
	while(j>=0&&a[j]>temp)
{
	a[j+1]=a[j];
	j--;
}
	a[j+1]=temp;
}
}
	int main(){
  int n;
scanf("%d",&n);
int a[n],i;
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
	InsertionSort(a,n);
	for(i=0;i<n;i++){
	printf("%d ",a[i]);
}
}
//Time complexitiy--->O(n^2)
//Space complexitiy--->O(1)
