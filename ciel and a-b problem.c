#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a-b;
	while(1)
	if(c%10==9||b==1||c!=0)
	{
		
		if(c%10==0)
		c=c+1;
		else
		c=c-1;
	}
	else
	c=c+1;
	printf("\n%d",c);
	return 0;
}
