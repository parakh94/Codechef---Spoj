#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int g;
		scanf("%d",&g);
		while(g--)
		{
			int i,n,q,h,t;
			scanf("%d %d %d",&i,&n,&q);
			if(n%2==0&&i==1)
			{
				t=n/2;
				h=n-t;
			}
			if(n%2==0&&i==2)
			{
				h=n/2;
				t=n-h;
			}
			if(n%2!=0&&i==1)
			{
				t=n/2+1;
				h=n-t;
			}
			if(n%2!=0&&i==2)
			{
				h=n/2+1;
				t=n-h;
			}
			if(q==1)
			printf("%d\n",h);
			else
			printf("%d\n",t);
		}
	}
}
