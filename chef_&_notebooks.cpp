#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll x,y,n,k,flag=0;
		sf("%lld%lld%lld%lld",&x,&y,&k,&n);
		ll p[n],c[n],i;
		for(i=0;i<n;i++)
		{
			sf("%lld%lld",&p[i],&c[i]);
		}
		for(i=0;i<n;i++)
		{
			if(p[i]>=x-y&&c[i]<=k)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		pf("LuckyChef\n");
		else
		pf("UnluckyChef\n");
	}
	return 0;
}
	
