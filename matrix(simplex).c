#include<stdio.h>
#include<math.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,i=1,j=2,c=0,s=0,s2=0,c2=0;
		scanf("%lld",&n);
		while(s<n&&s2<n)
		{
			c=c+i;
			s=s+pow(i,3);
			i=i+2;
			c2=c2+j;
			s2=s2+pow(j,3);
			j=j+2;
			
		}
		if(s2==n)
		printf("%lld\n",c2);
		else
		printf("%lld\n",c);
	}
	return 0;
}
