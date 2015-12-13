#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	char l;
	scanf("%d",&t);
	scanf("%c",&l);
	while(t--)
	{
		char a[1000];
		gets(a);
		printf("%s\n",a);
	}
	return 0;
}
