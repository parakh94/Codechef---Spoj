#include<stdio.h>
int main()
{
	long long int t,n,a[100000],temp=0,i,j,x1[100000],b,temp2=0;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		b=n;
		for(i=0;i<(2*n);i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0 ; i<(2*n); i++)
 		{
  			for(j=0 ; j<(2*n)-i-1 ; j++)
  			{
 				  if(a[j]>a[j+1]) 
   					{
    					temp=a[j];
    					a[j]=a[j+1];
    					a[j+1]=temp;
   					}
  			}
 		}
 		int c=2;
 		while(b--)
 		{
 			for(i=0;i<n;i++)
 			x1[i]=a[(2*n)-1]-a[(2*n)-c++];	
 		}
 		for(i=0 ; i<(n); i++)
 		{
  			for(j=0 ; j<(n)-i-1 ; j++)
  			{
 				  if(x1[j]>x1[j+1]) 
   					{
    					temp2=x1[j];
    					x1[j]=x1[j+1];
    					x1[j+1]=temp2;
   					}
  			}
 		}
 		for(i=0;i<n;i++)
 		printf("%lld ",x1[i]);
 		printf("\n");
 	}
 	return 0;
}
