#include<stdio.h>
int  main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,a;
		scanf("%lld",&n);
		a=(((3*n*n)+n)/2)%1000007;
		printf("%lld\n",a);
	}
	return 0;
}
