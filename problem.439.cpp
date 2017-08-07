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
//......................................
int dx[]={-1,1,-1,1,2,2,-2,-2};
int dy[]={2,2,-2,-2,-1,1,-1,1};
int vis[10][10];
int lev[10][10];
struct node{
  int x,y;
};
bool isPos(int aa,int bb){
       if((aa>=0&&aa<=7)&&(bb>=0&&bb<=7)) return true;
       else return false;
}
int bfs(int a,int b,int c,int d){
         int i;
         node nd;
         memset(vis,0,sizeof(vis));
         lev[a][b]=0;
         nd.x=a;nd.y=b;
         queue<node> Q;
         Q.push(nd);
         while(!Q.empty()){
                node uu = Q.front();
                Q.pop();
                if(vis[uu.x][uu.y]==0){
                    rp(i,0,8){
                        if(isPos(uu.x+dx[i],uu.y+dy[i])){
                            lev[uu.x+dx[i]][uu.y+dy[i]]=lev[uu.x][uu.y]+1;
                            vis[uu.x][uu.y]=1;
                            nd.x=uu.x+dx[i];
                            nd.y=uu.y+dy[i];
                            Q.push(nd);
                        }
                        if(vis[c][d]==1){
                          break;
                        }
                    }
                }
                if(vis[c][d]==1)
                break;
         }
         return lev[c][d];
}
int main()
{
    int a,b,c,d;
    char s1[3],s2[3];
    while(cin>>s1){
             a=s1[0]-'a';
             b=s1[1]-'1';
             cin>>s2;
             c=s2[0]-'a';
             d=s2[1]-'1';
             int res =  bfs(b,a,d,c);
             printf("To get from %s to %s takes %d knight moves.\n",s1,s2,res);
    }
    return 0;
}
