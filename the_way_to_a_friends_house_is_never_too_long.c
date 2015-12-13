#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		printf("\n");
		ll i,j,n,x[10001],y[10001],x1[10001],y1[10001];
		float d=0;
		sf("%lld",&n);
		for(i=0;i<=n+1;i++)
		{
			x1[i]=0;
			y1[i]=0;
		}
		for(i=0;i<n;i++)
		{
			sf("%lld %lld",&x[i],&y[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(x[i]<x[j])
				{
					x1[i]=x[i];
					y1[i]=y[i];
				}
				if(x[i]==x[j])
				{
					if(y[i]>y[j])
					{
						x1[i]=x[i];
						y1[i]=y[i];
					}
					else
					{
						x1[i]=x[i];
						y1[i]=y[j];
					}
				}
			}
		}
		for(i=0;i<n;i++)
		pf("%lld %lld",x1[i],y1[i]);
		for(i=0;i<n-1;i++)
		{
			d+=pow((pow((x1[i]-x1[i+1]),2)+pow((y1[i]-y1[i+1]),2)),0.5);
		}
		pf("%0.2f\n",d);
	}
	return 0;
}

