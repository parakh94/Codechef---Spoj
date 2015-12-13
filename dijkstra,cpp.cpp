#include<bits/stdc++.h>
using namespace std ;
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef pair<int,int> ii;
typedef long long int lld;
 
#define sz(a) int((a).size())
#define PB push_back
#define MP make_pair 
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof(c.begin()) i = c.begin(); i != c.end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define F first
#define S second
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,b) for(i=0;i<b;i++)
#define rep1(i,b) for(i=1;i<=b;i++)
#define mod 1000000007
#define PI (3.141592653589793)
#define gc getchar
#define pc putchar 
#define size 10005
#define inf 1000000000
/*
inline void scanint(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
*/
 
int dijkstra(vector<ii>v[],int n,int a,int b)
{  
	int D[n+2];
	int var,var2,d,cost,i;
	for(i=0;i<n+1;i++)D[i]=inf;
	
    priority_queue<ii,vector<ii>,greater<ii> > q;
	q.push(MP(0,a));
	D[a]=0;
	while(!q.empty())
	{
		ii top;
		top=q.top();
		q.pop();
		d=top.F;
		var=top.S;
		if(d<=D[var])
		{
			tr(v[var],it)
			{ 
				var2= it->first;
				cost=it->second;
				
				if(D[var2]>D[var]+cost)
				{
					D[var2]=D[var]+cost;
					q.push(ii(D[var2],var2));
				}
			}
		}
	}
	return D[b];
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,a,b,c,i,m;
		scanf("%d%d",&n,&k);
		vector<ii>v[n+2];
		for(i=0;i<k;i++)
		{
			scanf("%d%d%d",&a,&b,&c);
			v[a].PB(MP(b,c));
		}
		scanf("%d%d",&a,&b);
		m=dijkstra(v,n,a,b);
		if(m==inf)printf("NO\n");
		else printf("%d\n",m);
	}
	return 0;
}
