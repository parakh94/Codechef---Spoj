#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf


int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,i,c,set[100];
		sf("%lld%lld",&n,&c);
		for(i=0;i<n;i++)
		sf("%lld",&set[i]);		
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
  ll pow_set_size = pow(2, n);
    ll counter, j,sum,min=10000000000,diff;
 
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
    	sum=0;
      for(j = 0; j < n; j++)
       {
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j))
            {
       //     	printf("%lld ", set[j]);
            	sum+=set[j];
            //	printf("%lld",sum);
            }
            if(c-sum>=0)
            {
            	     diff=c-sum;
            	     if(min>diff)
            	     min=diff;
            }   
       }
       
       
    }
    printf("%lld\n",min);
}
	return 0;
}

