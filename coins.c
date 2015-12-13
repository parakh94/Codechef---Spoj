#include<stdio.h>
long long int total(long long int x)
{
	long long int s,s1,s2,s3,t1;
	s=x/2+x/3+x/4;
	if(x/2!=0)
	{
		s1=s+total(x/2);
		s2=s+total(x/3);
		s3=s+total(x/4);
		t1=s1+s2+s3;
		return t1;
	}
	else return s;	
}
int main()
{
	long long int t,n;
	scanf("%lld",&n);
	t=total(n);
	if(t>=n)
	printf("%lld",t);
	else
	printf("%lld",n);
	return 0;
}
