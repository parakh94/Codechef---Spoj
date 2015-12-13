#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll i,n,j=1,a[100],p;
	sf("%lld",&n);
	while(n)
	{
		i=0;
		p=1;
		while(p<=n)
		{
			p=pow(2,i);
			i++;
		}
		a[j]=p/2;
		n=n-p/2;
		j++;
	}	
	for(i=j-1;i>0;i--)
	pf("%lld ",a[i]);
	return 0;
}

