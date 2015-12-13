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
		ll m,i,ans=0,j;
		m=pow(n,0.5);
		for(i=m;i>0;i--)
		{
			if(n%i==0)
			{
				j=n/i;
				if(i!=j)
				{
					ans=ans+j+i;
				}
				else
				{
					ans+=i;
	            }
			}
		}
		pf("%lld\n",ans);
	}
	return 0;
}
	
