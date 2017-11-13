#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,c,n,i,m,t;
    while(1)
    {
    scanf("%lld",&n);
    int count=0;
    if(n<0)
    break;
    else
    {
          for(i=1;i<sqrt(n);i++)
          {
              t=pow(i,i);
              if(t>n)
              {
                 if((t-i+1)==n)
                  {
                     // m=(t-n)/i;
                      printf("%lld coconuts, %lld people and 1 monkey",n,i);
                      break;
                  }
                  else
                  {
                      count=1;
                      break;
                  }
              }
          }
          if(count==1)
          printf("%lld coconuts, no solution",n);
    }
    printf("\n");
    }
}
