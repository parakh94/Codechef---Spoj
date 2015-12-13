#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,n,k,b[501],i,c;
	scanf("%lld %lld %lld",&a,&n,&k);
	for(i=0;i<k;i++)
	b[i]=0;
	for(i=0;i<k;i++)
	{
		c=pow((n+1),i);	
		b[i]=(a/c)%(n+1);
	}
	for(i=0;i<k;i++)
	printf("%lld ",b[i]);
	return 0;
}

