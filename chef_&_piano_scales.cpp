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
		char a[500];
		ll l,i,n,j=1,c=0,ans=0;
		sf(" %s",a);
		sf("%lld",&n);
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='T')
			c+=2;
			if(a[i]=='S')
			c+=1;
		}
		ll d=c;
		while(c<12*n)
		{
			j++;
			ans+=12*n-c;
			c=d*j;
		}
		pf("%lld\n",ans);
	}
	return 0;
}
	
