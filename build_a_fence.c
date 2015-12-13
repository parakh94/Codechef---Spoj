#include<stdio.h>
#include<math.h>

int main()
{
	int l;
	scanf("%d",&l);
	while(l)
	{
		double a;
		a=(l*l)/(2*3.141593);
		printf("%0.2f\n",a);
		scanf("%d",&l);
	}
	return 0;
}
