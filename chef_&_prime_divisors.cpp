#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
ll gcd(ll x,ll y)
{
	if(y==0)
	return x;
	else
	return gcd(y,x%y);
}
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll a,b,c=0,s;
		sf("%lld%lld",&a,&b);
		while(b!=1)
		{
			s=gcd(a,b);
			if(s==1)
			{
				c=1;
				break;
			}
			b/=s;
		}
		if(c==1)
		pf("No\n");
		else
		pf("Yes\n");
		
	}
	return 0;
}


