#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
#define m 1000000007
ll power(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2)%m;
    if (y%2 == 0)
        return (temp*temp)%m;
    else
        return (x%m*temp*temp)%m;
}
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,k,i;
		sf("%lld%lld",&n,&k);
		ll a[n];
		a[2]=k;
		for(i=3;i<=n;i++)
		{
			a[i]=power(k,i-1)-a[i-1];
		}
		pf("%lld\n",a[i-1]);
	}
	return 0;
}
	
