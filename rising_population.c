#include<stdio.h>
#include<string.h>
#define ll long long int
#define sf scanf
#define pf printf
char a[50001],b[50001];
ll flag=0;
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
  
void permute(char *a, int i, int n) 
{
   int j; 
   if (i == n)
     {
     	if(strcmp(a,b)==0)
     	{
    		flag=1;
     	}
     }
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j)); //backtrack
       }
   }
} 

int main()
{
 	ll t;
 	sf("%lld",&t);
 	while(t--)
	 {
	 	flag=0;
	 	sf(" %s %s",a,b);
	 	permute(a, 0, strlen(a)-1);
	 	if(flag==1)
	 	pf("YES\n");
	 	else
	 	pf("NO\n");
	 } 	
	return 0;
}

