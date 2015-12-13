#include<stdio.h>
#include<string.h>
int main()
{
	char a[200];
	int k,n,i,b[200],r=0,j,c[200];
	scanf("%s",&a);
	//printf("%s",a);
	n=strlen(a);
	if(a[0]=='0'&&n==1)
	printf("0\n");
	else if(a[0]=='1'&&n==1)
	printf("1\n");
	else
	for(i=0;i<n;i++)
	b[i]=a[i]-'0';
	k=n;
	for(j=k;j>0;j--)
	{		
		c[j]=(b[j-1]*2+r)%10;
		r=(b[j-1]*2)/10;
	}
	if(r!=0)
	{
		c[0]=r;
	}
	else
	{
		c[0]=0;
	}
	if(c[n]<2)
	{
		
	}
	for(i=0;i<=n;i++)
	{
		a[i]=c[i]+'0';	
	}
	a[n+1]='\0';
	printf("%s",a);
	//printf("%ld\n",(2*n)-2);
	return 0;
}
