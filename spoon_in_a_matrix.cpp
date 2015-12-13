#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf 
int main()
{   
    char mat[100][101];
    int t,flag,i,j,r,c;
    scanf("%d",&t);
    while(t--)
    {         flag=0;
              scanf("%d %d",&r,&c);
              gets(mat[0]);
              for(i=0; i<r; i++)
              {
              gets(mat[i]);
              }
              
              
              
              
              
   
              for(i=0;i<r;i++)
              {
              for(j=0;j<c;j++)
              {
                              if((mat[i][j]=='s' || mat[i][j]=='S') && (j+4)<c)
                              {
                                                 if((mat[i][j+1]=='p' || mat[i][j+1]=='P') && (mat[i][j+2]=='O' || mat[i][j+2]=='o') && (mat[i][j+3]=='O' || mat[i][j+3]=='o') && (mat[i][j+4]=='n' || mat[i][j+4]=='N'))
                                                 { 
                                                                      flag=1; 
                                                                      break;
                                                 }
                              }
             
                              
              
              if((mat[i][j]=='s' || mat[i][j]=='S') && (i+4)<r)
              {
                              if((mat[i+1][j]=='p' || mat[i+1][j]=='P') && (mat[i+2][j]=='O' || mat[i+2][j]=='o') && (mat[i+3][j]=='O' || mat[i+3][j]=='o') && (mat[i+4][j]=='n' || mat[i+4][j]=='N'))
                              { 
                                                   flag=1; 
                                                   break;
                              }
                              }
              }    
              
              
              if(flag)
              break;
              }
              
              if(flag==1)
              printf("There is a spoon!\n");
              else
              printf("There is indeed no spoon!\n");
              
    }
    
    return 0;
}

