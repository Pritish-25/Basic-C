#include <stdio.h>
void natural(int n)
{
	for(int i=1;i<=n;i++)
	{
		printf("%d\n", i);
	}
}
int main() {
	printf("Enter the range ");
	int n;
	scanf("%d",&n);
	natural(n);
	return 0;
}