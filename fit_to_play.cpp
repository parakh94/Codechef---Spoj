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
		ll n;
		sf("%lld",&n);
		ll a[n+1],i,min,diff;
		for(i=0;i<n;i++)
		sf("%lld",&a[i]);
		if(n==1)
		pf("UNFIT\n");
		else
		{
			diff=a[1]-a[0];
			if(a[1]>a[0])
			{
				min=a[0];
			}
			else
			{
				min=a[1];
			}
			for(i=2;i<n;i++)
			{
				if((a[i]-min>diff))
				diff=a[i]-min;
				if(a[i]<min)
				min=a[i];
			}
			if(diff>0)
			pf("%lld\n",diff);
			else
			pf("UNFIT\n");
		}
	}
	return 0;
}
	
