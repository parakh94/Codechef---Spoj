#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,m,n,t,b[100000],k,c1,c2,max,min;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&m);
			
			for(i=0;i<m;i++)
			{
			scanf("%lld",&b[i]);
			}
			
			max=b[0];
			min=b[0];
			for(i=0;i<m;i++)
			{
				if(b[i]>max)
				max=b[i];
				if(b[i]<min)
				min=b[i];
			}
			for(i=0;i<n;i++)
			{
				c1=abs(max-i);
				c2=abs(min-i);
				if(c1>c2)
				printf("%lld ",c1);
				else
				printf("%lld ",c2);				
			}
			
			
		
	printf("\n");	
	}
	
	return 0;
}
