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
		ll n,a[100001],b[100001],c[2001],i,j,max;
		sf("%lld",&n);
		for(i=0;i<1001;i++)
		c[i]=0;
		for(i=0;i<n;i++)
		{
			sf("%lld %lld",&a[i],&b[i]);
			
		}
		for(i=0;i<n;i++)
		{
			
		}
		/*for(i=0;i<n;i++)
		{
			for(j=a[i];j<=b[i];j++)
			c[j]++;
		}
		max=c[0];
		for(i=1;i<1001;i++)
		{
			if(c[i]>max)
			max=c[i];
		}
	//	for(i=0;i<1001;i++)
	//	pf("%lld ",c[i]);
		pf("\n%lld\n",n-max+1);*/
	}
	return 0;
}

