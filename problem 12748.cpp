//Aceepted code........................
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
//                                                            //
//               BISMILLAHIR RAHMANIR RAHIM                   //
//............................................................//
//                                                            //
//         Porom korunamoy ALLAH r name shuru korilam         //                                            //
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://


//#include<bits/stdc++.h>

#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<list>
#include<deque>
#include<algorithm>
#include<iterator>
#include<vector>
#include<cctype>
#include<iomanip>
#include<ctime>
#include<sstream>
#include<cassert>
#include<climits>
#include<complex>
#include<numeric>
#include<valarray>
#include<memory.h>


using namespace std;


#define in freopen("input.txt","r",stdin)
#define out freopen("output.txt","w",stdout)
#define li long int
#define ull unsigned long long int
#define ll long long int
#define dbl double
#define ldbl long double
#define str string
#define cr char
#define fl float
#define sci(a) scanf("%I64d",&a)
#define scii(a,b) scanf("%I64d %I64d",&a,&b)
#define sciii(a,b,c) scanf("%I64d %I64d %I64d",&a,&b,&c)
#define pri(a) printf("%I64d",a)
#define prin(a) printf("%d",a)
#define prii(a,b) printf("%I64d %I64d",a,b)
#define priii(a,b,c) printf("%I64d %I64d %I64d",a,b,c)
#define scc(c) scanf("%c",&c)
#define sccc(c1,c2) scanf("%c %c",&c1,&c2)
#define prc(c1) printf("%c",c1)
#define prcc(c1,c2) printf("%c %c",c1,c2)
#define scd(a) scanf("%lf",&a)
#define scdd(a,b) scanf("%lf %lf",&a,&b)
#define prd(a) printf("%lf",a)
#define prdd(a,b) printf("%lf %lf",a,b)
#define scs(s) cin>>s
#define prs(s) cout<<s
#define sln(s) s.size()
#define nl printf("\n")
#define sp printf(" ")
#define rep(a,b) for(ll i=a;i<b;++i)
#define repn(a,b) for(ll i=a;i<=b;++i)
#define repr(a,b) for(ll i=a-1;i>=b;i--)
#define reprn(a,b) for(ll i=a;i>=b;i--)
#define pb(x) push_back(x)
#define pp pop
#define ps(x) push(x)
#define mem(x,a) memset(x,a,sizeof(x))
#define vi vector<int>
#define vl vector<li>
#define vll vector<ll>
#define vs vector<str>
#define vc vector<cr>
#define vii vector< vector <int> >
#define lii list<int>
#define lili list<li>
#define lill list<ll>
#define lis list<str>
#define lic list<cr>
#define fr frist
#define sd second
#define all(x) x.begin(),x.end()
#define repd(it,c)    for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define inf INT_MAX
#define mx 1000000
#define pi M_PI
inline ll ln(cr *p){ return strlen(p);}
// string to int
ll stoi(str s){ll p=sln(s),n=0;rep(0,p){n=n*10+(s[i]-48);}return n;}
// int to string
str itos(ll n){str s;while(n){s+=(n%10)+48;n/=10;}reverse(all(s));return s;}
// gcd
template< class T> T gcd(T a,T b){if(b==0) return(a); else return(gcd(b,a%b));}
bool test[mx]={false};
bool flag=false;
long long x[10000000],y[10000000],r[10000000];
int main()
{
  ios_base::sync_with_stdio(false);
    long long tc,n,m,i,j,caseno=0,xx,yy;
    scanf("%lld",&tc);
    while(tc--)
    {
        scanf("%lld %lld",&n,&m);
        for(i=0;i<n;i++)
        {
            scanf("%lld %lld %lld",&x[i],&y[i],&r[i]);
        }
        printf("Case %lld:\n",++caseno);
        for(i=0;i<m;i++)
        {
            bool test=0;
            scanf("%lld %lld",&xx,&yy);
            for(j=0;j<n;j++)
            {
                bool chk=(((xx-x[j])*(xx-x[j]))+((yy-y[j])*(yy-y[j])))<=(r[j]*r[j]);
               if(chk)
               {
               printf("Yes");
               test=1;
               break;
               }


            }
           if(test==0)
               printf("No");
               printf("\n");
        }

    }
    return 0;
}
