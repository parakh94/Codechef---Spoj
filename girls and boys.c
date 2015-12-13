#include<stdio.h>
#include<math.h>
void ans(int,int);
int main()
{
	int g,b;
	while(1)
	{
		scanf("%d %d",&g,&b);
		if(b==-1&&g==-1)
		break;
		if(g>b)
		ans(g,b);
		if(b>g)
		ans(b,g);
		if(b==g&&b!=0)
		printf("1\n");
		if(b==0&&g==0)
		printf("0\n");
	}
	return 0;
}
void ans(int x,int y)
{
	if(x%(y+1)==0)
	printf("%d\n",x/(y+1));
	else
	printf("%d\n",x/(y+1)+1);
}
