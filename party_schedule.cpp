#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
ll max(ll x,ll y)
{
return (x>y)? x:y;
}

ll knapsack(ll b,ll fees[],ll fun[],ll n)
{
   ll i,j,p[n+1][b+1],q=0;
   for(i=0;i<=n;i++)
   {
   	for(j=0;j<=b;j++)
   	{
   		if(j==0||i==0)
   		p[i][j]=0;
   		else if(fees[i-1]<=j)
   		p[i][j]=max((fun[i-1]+p[i-1][j-fees[i-1]]),p[i-1][j]);
   		else
   		p[i][j]=p[i-1][j];
    }
   }	
    ll x= p[n][b];
	for(i=b;i>=1;i--)
	{
		if(p[n][i]==x)
		q=i;
	}
	
	pf("%lld ",q); 
   return x;
}
int main()
{
	ll b,n;
	sf("%lld%lld",&b,&n);
	while(b||n)
	{
		ll i,fees[500],fun[500],ans;
		for(i=0;i<n;i++)
		sf("%lld%lld",&fees[i],&fun[i]);
		ans=knapsack(b,fees,fun,n);
		pf("%lld\n",ans);
		sf("%lld%lld",&b,&n);	
	}
	return 0;
}
	
