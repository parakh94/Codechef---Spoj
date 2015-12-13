#include<stdio.h>
int max(int,int,int);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int h,w,i,j,a[100][100],b[100][100],c=0;
		scanf("%d %d",&h,&w);
	
		for(i=0;i<h;i++)
		{
			for(j=0;j<w;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(j=0;j<w;j++)
		{
			b[0][j]=a[0][j];
		}
		
		for(i=1;i<h;i++)
		{
			for(j=0;j<w;j++)
			{
				if((j-1)<0)
				b[i][j]=a[i][j] + max(b[i-1][j],b[i-1][j+1],0);
				else if((j+1)>=w)
				b[i][j]=a[i][j]+max(b[i-1][j],b[i-1][j-1],0);
				else
				b[i][j]=a[i][j] + max(b[i-1][j-1],b[i-1][j+1],b[i-1][j]);
			}
		}
	
		c=b[h-1][0];
		for(j=0;j<w;j++)
			{
				if(b[h-1][j]>c)
				c=b[h-1][j];
			}
		printf("%d\n",c);
	}
	return 0;
}
int max(int x,int y,int z)
{
	if(x>y)
	{
		if(x>z)
		return x;
		else
		return z;
	}
	else
	{
		if(y>z)
		return y;
		else
		return z;
	}
}
