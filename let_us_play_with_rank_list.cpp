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
		ll n,s;
		sf("%lld%lld",&n,&s);
		ll a[n],i;
		for(i=0;i<n;i++)
		a[i]=1;
		s=s-n;
		for(i=1;i<n;i++)
		{
		    if(s<i)
		    break;
		    else
		    s=s-i;
				
		}
		if(s==0&&i==n)
		pf("0\n");
		else
		pf("%lld\n",n-i);
	}
	return 0;
}
	
