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
		ll n,k,ans=1,i;
		sf("%lld%lld",&n,&k);
		n=n-1;
		k=k-1;
		if(k>n/2)
		k=n-k;
		for(i=1;i<=k;i++)
		{
			ans=ans*(n+1-i)/i;
		}
		pf("%lld\n",ans);
	}
	return 0;
}
	
