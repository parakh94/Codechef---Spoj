#include<stdio.h>
#include<math.h>
//long long int powfunc(long long int,long long int);
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,a=0,i=2,e=4,c=0,f=0;
		scanf("%lld",&n);
		if(n>3)
		{
			n=n-3;
			while(n--)
			{
				f=e;
				//printf("%lld\n",f);
				c++;
				if(c==2)
				{
					c=0;								
					e=2*f;
					e=e%1000000007;
				}
				if((a+f)>1000000006)
				a=(a+f)%1000000007;
				else
				a=a+f;
			}
			a=(a+6)%1000000007;
		}
		else
		{
			while(n--)
			a+=2;
		}
		printf("%lld\n",a);
	}
	return 0;
}
/*long long int powfunc(long long int x,long long int y)
{
	long long int z=1;
	while(y--)
	{
		z=(z*2);
	}
	return z;
}*/
