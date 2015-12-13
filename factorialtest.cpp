#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
ll fact1[10000];
ll fact (ll x,ll m)
{
	if(x==1||x==0)
	return 1;
    if(fact1[x]!=0)
	return fact1[x];
	else
	return fact1[x]=(x%m*fact(x-1,m)%m)%m;
}
int main()
{
	fact1[10000]={0};
	fact1[0]=1;
	fact1[1]=1;
	ll ans=0,n,m,i;
	sf("%lld%lld",&n,&m);
	ll p[n],j,s=0;
	for(i=0;i<n;i++)
	sf("%lld",&p[i]);
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=1;j<=p[i];j++)
		{	
			s=(s%m+(j%m*((fact(j,m)+p[i]%m)%m)%m))%m;
		//	pf("%lld\n",s);
		}
		ans=(ans%m+s)%m;
		
	}
	pf("%lld\n",ans);
	return 0;
}
	
