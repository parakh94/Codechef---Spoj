#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int a,b;
		scanf("%lld %lld",&a,&b);
		if(a>b)
		printf("%lld %lld\n",a,(a+b));
		else
		printf("%lld %lld\n",b,(a+b));
	}	
	return 0;
}
