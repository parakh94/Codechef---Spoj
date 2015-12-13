#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int r,i,x1,x2,x3,y1,y2,y3;
		float d1,d2,d3;
		scanf("%lld",&r);
		scanf("%lld %lld",&x1,&y1);
		scanf("%lld %lld",&x2,&y2);
		scanf("%lld %lld",&x3,&y3);
		d1=pow(pow((x1-x2),2)+pow((y1-y2),2),0.5);
		d2=pow(pow((x2-x3),2)+pow((y2-y3),2),0.5);
		d3=pow(pow((x3-x1),2)+pow((y3-y1),2),0.5);
	//	printf("%f\n",d1);	
	//	printf("%f\n",d2);
	//	printf("%f\n",d3);	
		if(d1<=r&&d2<=r)
		printf("yes\n");
		else if(d2<=r&&d3<=r)
		printf("yes\n");
		else if(d1<=r&&d3<=r)
		printf("yes\n");
		else
		printf("no\n");
		
	}
	return 0;
}
