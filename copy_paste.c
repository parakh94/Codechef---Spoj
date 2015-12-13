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
		ll n,a,i,b[100002],c=0,d;
		sf("%lld",&n);
		for(i=0;i<100001;i++)
		b[i]=0;
		for(i=0;i<n;i++)
		{
			sf("%lld",&a);
			if(b[a]==0)
			c++;
			b[a]++;
		}
		pf("%lld\n",c);
	}
	return 0;
}

