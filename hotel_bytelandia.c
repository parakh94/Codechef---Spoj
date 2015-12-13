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
		ll n,a[200],b[200],c[1001],i,j,max;
		sf("%lld",&n);
		for(i=0;i<1001;i++)
		c[i]=0;
		for(i=0;i<n;i++)
		{
			sf("%lld",&a[i]);
			
		}
		for(i=0;i<n;i++)
		{
			sf("%lld",&b[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=a[i];j<b[i];j++)
			c[j]++;
		}
		max=c[0];
		for(i=1;i<1001;i++)
		{
			if(c[i]>max)
			max=c[i];
		}
		pf("%lld\n",max);
	}
	return 0;
}

