#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
ll fact[10000001];
int main()
{
	ll n,m,i;
	sf("%lld%lld",&n,&m);
	ll p[n];
	for(i=0;i<n;i++)
	sf("%lld",&p[i]);
	
	ll x,f,s=0,p1;
	fact[0]=1;
	fact[1]=1;
	
	for(i=2;i<=m;i++)
	fact[i]=(fact[i-1]*(i%m))%m;
	
	for(i=0;i<n;i++)
	{
		if(p[i]<m)
		f=fact[p[i]+1]%m;
		else
		f=fact[m];
		
		p[i]=p[i]%m;
		p1=p[i];
		
		if(p[i]%2==0)
		x=p[i]/2;
		
		else
		{
			x=p[i]/2+1;
			p1=p[i]-1;
		}
		x=x%m;
		s=(s+f+((x*p[i]*(p1+1)%m)%m)-1)%m;
		pf("p[i]=%lld\n",p[i]);
		pf("x=%lld\n",x);
		pf("f=%lld\n",f);
		pf("s=%lld\n",s);
	}
	pf("%lld",s);
	return 0;
}
