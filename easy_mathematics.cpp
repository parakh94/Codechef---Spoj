#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
ll fact(ll,ll);
int main()
{
 	ll t;
 	sf("%lld",&t);
 	while(t--)
 	{
 		ll n,k,i,x,max=0,c;
 		sf("%lld%lld",&n,&k);
 		for(i=0;i<k;i++)
 		{
 			sf("%lld",&x);
 			if(x>max)
 			max=x;
 		}
 		c=fact(n,max);
 		pf("%lld\n",c);
 	}
	return 0;
}
ll fact(ll n,ll max)
{
	if(n==0||n==1)
	return 1;
	else
	return ((n%max)*(fact(n-1,max))%max)%max;
}
