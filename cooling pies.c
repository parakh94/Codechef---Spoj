#include<stdio.h>
int main()
{
	int t,n,a[10000],b[10000],i,j,c=0,swap=0;
	scanf("%d\n",&t);
	while(t--)
	{
		scanf("%d\n",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	    for(j=0;j<n;j++)
		scanf("%d",&b[j]);
        
    for (i = 0 ; i < ( n - 1 ); i++)
	   {
    	for (j = 0 ; j < n - i - 1; j++)
    		{
      			if (a[j] > a[j+1])
      			{
        			swap= a[j];
       				a[j]= a[j+1];
       		     	a[j+1] = swap;
      			}
    		}
  	    }
	
	for (i = 0 ; i < ( n - 1 ); i++)
	   {
    	for (j = 0 ; j < n - i - 1; j++)
    		{
      			if (b[j] > b[j+1])
      			{
        			swap= b[j];
       				b[j]= b[j+1];
       		     	b[j+1] = swap;
      			}
    		}
  	    }
  	    c=0;
  	    for(i=0,j=0;j<n;j++)
  	    {
  	    	if(a[i]<=b[j])
  	    	{
  	       		c++;
  	       		i++;
  	    	}

  	    }
  	printf("%d\n",c);
    }
	return 0;
}
