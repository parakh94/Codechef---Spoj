#include<stdio.h>
#include<string.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		int k,i,l,j,n;
		scanf("%d",&k);
		j=k/25;
		n=k%25;
		if(n!=0)
		for(i=97+n;i>=97;i--)
		printf("%c",i);
		if(j>0)
			{
				while(j--)	
				{
					for(i=122;i>=97;i--)
					printf("%c",i);
				}
			}
		printf("\n");
	}
	return 0;
}
