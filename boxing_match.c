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
		ll n,m,i,a[10000],x,y,sum=0;
		sf("%lld%lld",&n,&m);
		for(i=0;i<n;i++)
		sf("%lld",&a[i]);
		for(i=0;i<m;i++)
		{
			sf("%lld%lld",&x,&y);
			if(a[x-1]>a[y-1])
			sum+=a[y-1];
			else
			sum+=a[x-1];
		}
		pf("%lld\n",sum);
	}
	return 0;
}

