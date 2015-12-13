#include<stdio.h>
int main()
{
	long long int t,n,d;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		d=((n*n)+(3*n))/2;
		printf("%lld\n",d);
	}
	return 0;
}
