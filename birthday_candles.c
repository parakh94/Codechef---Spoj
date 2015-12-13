#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int a[1000],min,d=0,e=0,j=0,i,f=0;
		for(i=0;i<10;i++)
		scanf("%lld",&a[i]);
		if(a[0]==a[1])
		d=1;
		min=a[0];
		for(i=1;i<10;i++)
		{
			if(a[0]==a[i])
			{
				f=i;
				break;
			}
		}
		for(i=1;i<10;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				e=i;
			}
		}
		if(min==a[0]&&f!=0)
		{
			for(j=0;j<=a[0];j++)
			printf("%lld",f);
			printf("\n");
		}
		else if(min==a[0]&&f==0)
		{
			printf("1");
			for(j=0;j<=a[0];j++)
			printf("0");
			printf("\n");
		}
		else
		{
			for(j=0;j<=min;j++)
			printf("%lld",e);
			printf("\n");
		}
	}
	return 0;
}
