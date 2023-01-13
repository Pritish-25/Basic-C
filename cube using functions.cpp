#include<stdio.h>
int cube(int n){
	return (n*n*n);
}
int main()
{
	int n;
	scanf("%d",&n);
	int k = cube(n);
	printf("%d",k);
	return 0;
}