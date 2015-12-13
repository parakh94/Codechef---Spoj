#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	while(a!=0||b!=0||c!=0)
	{
	
		if(2*(b)==(a+c))
		{
			printf("AP %d\n",c+(b-a));
		}
		else 
		{   
			printf("GP %d\n",((c*c)/b));
		}
		scanf("%d %d %d",&a,&b,&c);
	}
	return 0;
}
