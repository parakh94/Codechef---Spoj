#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll t,ans=0;
	sf("%lld",&t);
	while(t--)
	{
		ll s,c,k,i,a[1000],f=1,b,j;
		sf("%lld%lld%lld",&s,&c,&k);
		if(c==0&&s==0)
		pf("0\n");
		else if(c==0)
		{
			if(k>s)
			{
				pf("0\n");
			}
			else
			{
				a[s]=3;
				for(i=s-1;i>0;i--)
				{
					a[i]=pow(2,f)+a[i+1];
					f++;
				}
				pf("%lld\n",a[k]);	
			}
		}
		else if(k==1)
		{
			if(s==0)
			{
				ans=0;
				for(j=1;j<=c;j++)
				{
					ans=ans+pow(2,j);
				}
				pf("%lld\n",ans);
			}
		    else if(s==c)
			{
				ans=pow(2,(s-k+2))+1;
				pf("%lld\n",ans);
			}
			else if(s>c)
			{
				ans=pow(2,(s-k+1))+1;
				pf("%lld\n",ans);
			}
			else
			{
				ans=pow(2,(c+1))+1;
				pf("%lld\n",ans);
			}
		}
		else
		{
			if(k>s)
			pf("0\n");
			else if(k==s)
			pf("5\n");
			else if(s==c)
			{
				ans=pow(2,(s-k+2))+1;
				pf("%lld\n",ans);
			}
			else if(s>c)
			{
				if(k<=(s-c))
				{
					ans=pow(2,(s-k+1))+1;
					pf("%lld\n",ans);
				}
				else
				{
					ans=pow(2,(s-k+2))+1;
					pf("%lld\n",ans);
				}
			}
			else
			{
				ans=pow(2,(s-k+2))+1;
				pf("%lld\n",ans);
			}
		}
	}
	return 0;
}
	
