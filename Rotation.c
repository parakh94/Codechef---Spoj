#include<stdio.h>
	long int n,m,i,j=0,y=0,r=0,p,b,z;
	long int a[10000];
	char x;
int main()
{
	scanf("%ld %ld\n",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	while(m--)
	{
		scanf(" %c %d",&x,&b);
		if(x=='R')
		{
			if(j+b<=n)
				{
					p=j+b-1;
					printf("%ld\n",a[p]);
				}
				else
				{
					p=j+b-n-1;	
					printf("%ld\n",a[p]);	
				}
		}
		
		if(x=='C')
		{
			if((j+b)<n)
			{
				j+=b;
			}
			else
			{
				r=(j+b)/n;
				j=j+b-n*r;
			}
		}
		if(x=='A')
		{
			z=j-b;
			if(z<0&&z>=-n)
			j=n+z;
			else if(z<-n)
			{
				y=z%n;
				j=y+n;
			}
			else if(z>=0)
			j=z;	
		}
	
	}
	return 0;
}
