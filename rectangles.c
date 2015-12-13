#include<stdio.h>
int main()
{
	int i,j,n,f=0;
	scanf("%d",&n);
	if(n==1)
	printf("%d",1);
	else
	{
	
	for(i=1;i<=n/2;i++)
	{
		for(j=i;j<=n;j++)
		{
			if((i*j)<=n)
			f++;
		}
	}
	printf("%d",f);
	}
	return 0;
}


