#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,a[1000],b[1000],i,j,c=0,freq,val;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(a[i]==a[j])
				c++;
			}
			b[i]=c;
			c=0;
		}
		freq=b[0],val=a[0];
		for(i=1;i<n;i++)
		{
			if(freq<b[i])
			{
				freq=b[i];
				val=a[i];
			}
			if(freq==b[i])
			{
				if(val>a[i])
				val=a[i];
			}
			
		
		}
		printf("\n%d %d\n",val,freq);
	}
	return 0;
}
