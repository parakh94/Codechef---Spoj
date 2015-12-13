#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
inline long long int input()
{
	char c=getchar();
	while(c<'0'||c>'9')
	c=getchar();
	long long int ret=0;
	while(c>='0'&&c<='9')
	{
		ret=10*ret+c-48;
		c=getchar();

	}
	return ret;
}
ll r[1005][1005],c[1005][1005];
char a[1005][1005];
int main()

{
	ll t;
	t=input();
	while(t--)
	{
		ll n,i,j;
  		n=input();
  		ll d=1;
  		for(i=0;i<n;i++)
  		{
  			gets(a[i]);
  		}
  		for(i=0;i<n;i++)
  		{
  			d=1;
  			for(j=n-1;j>=0;j--)
			{
				if(a[i][j]=='#')
				d=0;
				r[i][j]=d;
			}
  		}
  		
  		/*for(i=0;i<n;i++)
  		{
  			for(j=0;j<n;j++)
			{
				pf("%lld ",r[i][j]);
			}
			pf("\n");
  		}*/
   		for(i=0;i<n;i++)
  		{
  			d=1;
  			for(j=n-1;j>=0;j--)
			{
				if(a[j][i]=='#')
				d=0;
				c[j][i]=d;
			}
  		}
  		/*for(i=0;i<n;i++)
  		{
  			for(j=0;j<n;j++)
			{
				pf("%lld ",c[i][j]);
			}
			pf("\n");
  		}*/
  		ll ans=0;
   		for(i=0;i<n;i++)
  		{
  			for(j=0;j<n;j++)
			{
				if(r[i][j]==1&&c[i][j]==1)
				ans++;
			}
  		}
  		pf("%lld\n",ans);
	}
	return 0;
}
	
