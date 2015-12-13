#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		int gh,bh,bm,gm,dist;
		float gmm,bmm,diff,c;
		scanf("%d:%d",&gh,&gm);
		scanf("%d:%d",&bh,&bm);
		scanf("%d",&dist);
		gmm=gh*60+gm;
		bmm=bh*60+bm;
		printf("%0.1f ",(gmm-bmm+dist));
		if(((gmm-bmm)/2)>=dist)
		printf("%0.1f\n",(gmm-bmm));
		else
		{
			diff=gmm-bmm;
			c=dist-diff;
			gmm=gmm+c;
			//printf("%d\n",gmm);
			gmm=gmm+(dist-c)/2;
			printf("%0.1f\n",(gmm-bmm));
		}
	}
	return 0;
}
