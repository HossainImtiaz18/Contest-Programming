//#include<bits/stdc++.h>

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <deque>
#include <algorithm>
#include <iterator>
#include <vector>
#include <cctype>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <cassert>
#include <climits>
#include <complex>
#include <numeric>
#include <valarray>
#include <memory.h>


using namespace std;


#define in           freopen("input.txt","r",stdin)
#define out          freopen("output.txt","w",stdout)
#define li           long int
#define ull          unsigned long long int
#define ll           long long int
#define sc1(a)       scanf("%I64d",&a)
#define sc2(a,b)     scanf("%I64d %I64d",&a,&b)
#define sc3(a,b,c)   scanf("%I64d %I64d %I64d",&a,&b,&c)
#define pr1(a)       printf("%I64d",a)
#define pr2(a,b)     printf("%I64d %I64d",a,b)
#define pr3(a,b,c)   printf("%I64d %I64d %I64d",a,b,c)
#define scc(c)       scanf("%c",&c)
#define sccc(c1,c2)  scanf("%c %c",&c1,&c2)
#define prc(c1)      printf("%c",c1)
#define prcc(c1,c2)  printf("%c %c",c1,c2)
#define scd(a)       scanf("%lf",&a)
#define scdd(a,b)    scanf("%lf %lf",&a,&b)
#define prd(a)       printf("%lf",a)
#define prdd(a,b)    printf("%lf %lf",a,b)
#define sln(s)       s.size()
#define nl           printf("\n")
#define sp           printf(" ")
#define rp(i,a,b)    for(i=a;i<b;++i)
#define rpr(i,a,b)   for(i=a-1;i>=b;i--)
#define pb(x)        push_back(x)
#define pp           pop
#define ps(x)        push(x)
#define mem(x,a)     memset(x,a,sizeof(x))
#define vi           vector<int>
#define vl           vector<li>
#define vll          vector<ll>
#define vs           vector<str>
#define vc           vector<cr>
#define vii          vector< vector <int> >
#define lii          list<int>
#define lili         list<li>
#define lill         list<ll>
#define lis          list<str>
#define lic          list<cr>
#define pi           pair<int,int>
#define pli          pair<li,li>
#define pll          pair<ll,ll>
#define ppi          pair<int,pi>
#define ppli         pair<li,pli>
#define ppll         pair<ll,pll>
#define ff           frist
#define ss           second
#define all(x)       x.begin(),x.end()
#define repd(it,c)   for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define inf          INT_MAX
#define MX           100000000


template< class T>
T gcd(T a,T b){
if(b==0) return(a);
 else return(gcd(b,a%b));
}
bool test[MX]={false};
bool flag=false;
 vector<int> g[25];
  int vis[25];
    int lev[25];
int bfs(int s,int d){

    memset(vis,0,sizeof(vis));
    memset(lev,0,sizeof(lev));
       vis[s]=1;
       lev[s]=0;
       queue<int> Q;
       Q.push(s);
       while(!Q.empty()){
              int u=Q.front();
              Q.pop();
              int i,sz=g[u].size();
              rp(i,0,sz){
                 if(vis[g[u][i]]==0){
                    vis[g[u][i]]=1;
                    lev[g[u][i]]=lev[u]+1;
                    Q.push(g[u][i]);
                 }

              }

       }
       return lev[d];
}

int main()
{
    int x,i,a,n,res,s,t,ca=1,j;

    while(scanf("%d",&x)!=EOF){
         rp(i,0,20){ g[i].clear();}
             rp(i,0,x){
                cin>>a;
                g[0].pb(a-1);
                g[a-1].pb(0);
             }
             rp(i,1,19){
                cin>>x;
                rp(j,0,x){
                  cin>>a;
                  g[i].pb(a-1);
                  g[a-1].pb(i);
                }
             }
             cout<<"Test Set #"<<ca++<<endl;
             cin>>n;
             rp(i,0,n){
                cin>>s>>t;
                s--;t--;
                res =  bfs(s,t);
                printf("%2d to %2d: %d\n",s+1,t+1,res);
             }
             printf("\n");
    }
    return 0;
}
