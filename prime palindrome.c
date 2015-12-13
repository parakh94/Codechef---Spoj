#include<stdio.h>
int main()
{
	long long int n,y=0,z=0,r=0,x=0,c=0,i;
	scanf("%lld",&n);
	y=n;
	while(1)
	{
		x=y,r=0,z=0;
		while(x)
		{
			r=x%10;
			printf("\nx=%lld",r);
			x=x/10;
			printf("\nr=%lld",x);
			z=(z*10)+r;
			printf("\nz=%lld",z);
		}
		if(z==y)
		{
			printf("llll");
		    for(i=2;i<z/2;i++)
			{
				if(z%i==0)
				c++;
	    	}
	    	if(c==0)
	    	{
	    		printf("\n%lld",z);
	    		printf("aaaaaaaaaaaaa");
	    		break;
	    	}
		}
		y++;
		printf("lllllllllllll");
	}
	return 0;
}
