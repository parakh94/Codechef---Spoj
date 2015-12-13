#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,c=0,i=0;
	scanf("%lld",&n);
	while(1)
	{
		if((pow(2,i)<n)&&i<11)
		i++;
		else 
		break;
	}
	if(pow(2,i)==n)
	printf("1");
	else
	{
		while(n>=pow(2,i-1))
		{
			n=n-pow(2,i-1);
			c++;
		
	    }
    	while(n!=0)
    	{
    		n=n-pow(2,i-2);
    		i--;
    		c++;
    	}
    printf("%lld",c);
    }
}

