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
		ll n,ans;
		sf("%lld",&n);
		if(n==1)
		pf("4\n");
		else
		{
			if(n%2&&n!=1)
			ans=power(3,n)-3;
			else
			ans=power(3,n)+3;
			pf("%lld\n",ans);
		}
	}
	return 0;
}
	
