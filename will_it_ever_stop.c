#include<stdio.h>
int main()
{
	long long int n,c;
	scanf("%lld",&n);
	c=n&n-1;
	if(c==0)
	printf("TAK\n");
	else
	printf("NIE\n");
	return 0;
}
