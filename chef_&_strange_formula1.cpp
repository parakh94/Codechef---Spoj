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
	
	ll x,f,s=0,p1,ans=0;
	fact[0]=1%m;
	fact[1]=1%m;
	
	for(i=2;i<m;i++)
	fact[i]=(fact[i-1]*(i%m))%m;
	
	for(i=1;i<m;i++)
	{
		fact[i]=(fact[i]*(i%m))%m;
	}
	
	for(i=2;i<m;i++)
	{
		fact[i]=(fact[i-1]+fact[i])%m;
	}
	
	ll n1;
	for(i=0;i<n;i++)
	{
		
		if(p[i]%2==0)
		{
			x=p[i]/2;
			n1=(((x%m)*((p[i]+1)%m))%m*(p[i]%m))%m;
		}
		
		else
		{
			x=(p[i]+1)/2;
			n1=(((x%m)*((p[i])%m))%m*(p[i]%m))%m;
		}
		
		if(p[i]<m)
		ans=(fact[p[i]]+n1+ans)%m;
		
		else
		ans=(fact[m-1]+n1+ans)%m;
		
	}
	pf("%lld\n",ans);
	return 0;
}

