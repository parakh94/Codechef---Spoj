#include<stdio.h>
#include<stdlib.h>
int main()
{ int n,k,t,*a,i,c=0;
  scanf("%d",&t);
  while(t--)
  {
  scanf("%d %d",&n,&k);
  a=(int *)calloc(n,sizeof(int));
  for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   if(a[i]%2==0)
   c++;  
   }
  if(c>=k)
  printf("YES\n");
  else
  printf("NO\n");
  free (a);
  c=0;
}
  
return 0;  
}
