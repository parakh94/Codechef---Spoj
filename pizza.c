#include<stdio.h>
int main()
{
	int n,i,x,y,a[30],b,c=0,d,f,e;
	for(i=0;i<3;i++)
	a[i]=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d/%d",&x,&y);
		if(x==1&&y==4)
		a[0]++;
		if(x==1&&y==2)
		a[1]++;
		if(x==3&&y==4)
		a[2]++;
	}
	//for(i=0;i<3;i++)
	//printf("%d\n",a[i]);
	if(a[0]>a[2])
	{
		d=a[0]-a[2];
		e=d/4;
		f=d%4;
		if(f!=0)
		e=e+1;
		if(f<3&&f!=0)
		{
			a[1]=a[1]-1;
		}
		if(a[1]%2==0)
		c=a[1]/2;
		else
		c=a[1]/2+1;
		
		b=1+e+a[2]+c;
	}	
	else
	{
		if(a[1]%2==0)
		c=a[1]/2;
		else
		c=a[1]/2+1;
		
		b=1+a[2]+c;
	}
	printf("%d\n",b);
	return 0;
}
