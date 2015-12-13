#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define gc getchar

inline long long int input() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
	long long int t;
	t=input();
	while(t--)
	{
		long long int n,a[5000],i,c=0,min;
		n=input();
		for(i=0;i<n;i++)
		a[i]=input();
		min=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i-1]>=a[i]&&a[i]<=min)
			{
				c++;
				min=a[i];
			}
		}
		printf("%d\n",c+1);
		
	}
	return 0;
}

