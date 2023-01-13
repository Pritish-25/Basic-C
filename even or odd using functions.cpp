#include<stdio.h>

void evenorodd(int n)
{
	if(n%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
}
int main()
{
	int n;
	scanf("%d",&n);
	evenorodd(n);
	return 0;
}