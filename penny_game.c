#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[100];
		int n,i;
		int b[100];
		scanf("%d",&n);
		scanf("%s",a);
		for(i=0;i<8;i++)
		b[i]=0;
		for(i=2;i<40;i++)
		{
			if(a[i]=='T')
			{
				if(a[i-1]=='T'&&a[i-2]=='T')
				b[0]++;
				if(a[i-1]=='H'&&a[i-2]=='T')
				b[2]++;
				if(a[i-1]=='T'&&a[i-2]=='H')
				b[4]++;
				if(a[i-1]=='H'&&a[i-2]=='H')
				b[6]++;
			}
			if(a[i]=='H')
			{
				if(a[i-1]=='T'&&a[i-2]=='T')
				b[1]++;
				if(a[i-1]=='H'&&a[i-2]=='T')
				b[3]++;
				if(a[i-1]=='T'&&a[i-2]=='H')
				b[5]++;
				if(a[i-1]=='H'&&a[i-2]=='H')
				b[7]++;
			}
		
		}
		printf("%d ",n);
		for(i=0;i<8;i++)
		printf("%d ",b[i]);
		printf("\n");
	}
	return 0;
}
