#include<stdio.h>
#include<math.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int c=0,j,i,n,a[100000];
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				
				if((a[j]+a[i])==0)
				c++;
			}
		}
	printf("%lld\n",c);
	}
	return 0;
}
