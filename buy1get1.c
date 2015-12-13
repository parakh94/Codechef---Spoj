#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[1000];
		int b[1000],i=0,l,c=0;
		scanf("%s",a);
		l=strlen(a);
	//	printf("%d\n",l);
		for(i=0;i<200;i++)
		b[i]=0;
		for(i=0;i<l;i++)
		b[a[i]]++;
	//	printf("%d\n",a[2]);
	//	printf("%d\n",b[a[2]]);
		for(i=0;i<200;i++)
		{
			if(b[i]==0)
			continue;
			if(b[i]%2==0)
			c=c+b[i]/2;
			if(b[i]%2!=0)
			c=c+(b[i]/2)+1;
		}
		printf("%d\n",c);
	}
	return 0;
}
