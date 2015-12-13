#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
ll max(ll x, ll y)
{
	if(x>y)
	return x;
	else
	return y;
}
int main()
{
	ll t,j=1;
	sf("%lld",&t);
	while(t--)
	{
		ll n;
		sf("%lld",&n);
		ll a[1005],d[1005],i;
		for(i=0;i<n;i++)
		sf("%lld",&a[i]);
		d[0]=a[0];
		d[1]=max(d[0],a[1]);
		for(i=2;i<n;i++)
		{
			d[i]=max((a[i]+d[i-2]),d[i-1]);
		}
		pf("Case %lld: %lld\n",j,d[n-1]);
		j++;
	}
	return 0;
}
