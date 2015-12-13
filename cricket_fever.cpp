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
		ll o,r,s;
		sf("%lld%lld%lld",&o,&r,&s);
		float ans,r1;
		r1=o*r+s;
		ans=r1/(o+1);
		pf("%0.2lf\n",ans);
	}
	return 0;
}
	
