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
		ll n,i,c=0;
		sf("%lld",&n);
		ll a[n];
		for(i=0;i<n;i++)
		sf("%lld",&a[i]);
		for(i=1;i<n-1;i++)
		{
			if(a[i]==a[i-1]&&a[i]==a[i+1])
			continue;
			else
			c++;
		}
		if(a[0]!=a[1])
		c++;
		if(a[n-1]!=a[n-2])
		c++;
		pf("%lld\n",c);
	}
	return 0;
}
	
