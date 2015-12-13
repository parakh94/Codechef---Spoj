#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int l,n;
		scanf("%lld",&n);
		if(n%2==0)
		printf("%lld\n",n);
		else
		printf("%lld\n",n-1);	
	}
	return 0;
}
