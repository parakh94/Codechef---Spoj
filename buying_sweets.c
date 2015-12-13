#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int a2,x,y[200],i,b,s=0,a,n;
		scanf("%lld %lld",&n,&x);
		b=0;
		for(i=0;i<n;i++)
		{	
			scanf("%lld",&y[i]);
			s=s+y[i];
			if(y[i]<b)
			b=y[i];
		}
		a=s/x;
		s=s-b;
		a2=s/x;
		if(a2==a||a==0)
		printf("-1\n");
		else
		printf("%lld\n",a);
	}
	return 0;
}
