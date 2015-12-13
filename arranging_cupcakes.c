#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,i,a,b,min,c;
		sf("%lld",&n);
		if(n==1)
		pf("0\n");
		else
		{
			min=n;
			for(i=1;i<=pow(n,0.5);i++)
			{
				a=n/i;
				if(n==(a*i))
				{
					b=n/a;
					c=abs(a-b);
					if(c<min)
					min=c;
				}
			}
		pf("%lld\n",min);
		}
	}
	return 0;
}

