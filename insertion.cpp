#include <stdio.h>
int main()
{
	int n,ele,pos;
	scanf("%d",&n);
	int arr[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element and position to insert at : ");
	scanf("%d %d",&ele,&pos);
	for(int i=(n-1);i>=(pos-1);i--)
	{
		arr[i+1] = arr[i];
	}
	arr[pos-1] = ele;
	n++;
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}