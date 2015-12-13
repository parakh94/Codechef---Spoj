#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll t,a[10001];
	a[0]=0;
	a[1]=0;
	a[2]=0;
	a[3]=0;
	ll i,c=0,v=1,diff=1;
	for(i=4;i<10001;i++)
	{
		a[i]=diff;
		c++;
		if(c==2)
		{
			c=0;
			v=v+1;
			diff=diff+v;
		}
	}
	sf("%lld",&t);
	while(t--)
	{
		ll b;
		sf("%lld",&b);
		pf("%lld\n",a[b]);
		
	}
	return 0;
}
	
