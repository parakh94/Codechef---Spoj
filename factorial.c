#include<stdio.h>
#include<math.h>
int main()
{
	long int n,x,p=0,i=1,j=1;
	scanf("%ld",&n);
	while(n--)
	{
		p=0,i=1,j=1;
		scanf("%ld",&x);
		while(j)
		{
			j=x/pow(5,i);
			p=p+j;
			i++;					
		}
		printf("%ld\n",p);		
	}
	return 0;
}
