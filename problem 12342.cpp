//Accepted code................
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
int main()
{
  //ios_base::sync_with_stdio(false);
    long long tc,tt,take,caseno=0;
    double tax,taka;
    scanf("%lld",&tc);
    while(tc--)
    {
        scanf("%lld",&take);
        taka=take;
        tax=0;
          printf("Case %lld: ",++caseno);
        if(taka<=180000)
        printf("0");
        else{
              taka=taka-180000;
              if(taka<=300000)
              {
                  tax=tax+taka*(0.1);
              }
              else
              {
                  tax=tax+(300000)*(0.1);
                  taka=taka-300000;
                  if(taka<=400000)
                  {
                     tax=tax+taka*(0.15);
                  }
                  else
                  {
                      tax=tax+(400000)*(0.15);
                      taka=taka-400000;
                      if(taka<=300000)
                      {
                           tax=tax+taka*(0.2);
                      }
                      else
                      {
                           tax=tax+(300000)*(0.2);
                            taka=taka-300000;
                            tax=tax+(taka)*(0.25);
                      }

                  }


              }
                if(tax<2000)
                tax=2000;
              tt=int(tax);

                  if(tax-tt==0)
                 printf("%lld",tt);
                  else
                  printf("%lld",tt+1);


        }
         printf("\n");

    }
    return 0;
}
