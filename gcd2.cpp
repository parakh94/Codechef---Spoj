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
	ll t,ans;
	sf("%lld",&t);
	while(t--)
	{
		ll a,i,n,b1=0;
		char b[300];
		sf("%lld",&a);
		sf(" %s",b);
		n=strlen(b);
		if(a==0)
		pf("%s\n",b);
		else
		{
			for(i=0;i<n;i++)
			{
				b1=((b1*10)+b[i]-48)%a;
			}
			ans=gcd(a,b1);
			pf("%lld\n",ans);
		}
	}
	return 0;
}


