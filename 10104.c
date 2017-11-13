#include<stdio.h>
int gcd(int a,int b)
{
    int r=1;
    if(a>b)
    {
        while(r!=0)
        {
        r=a%b;
        a=b;
        b=r;
        }
        return a;
    }
    else if(b>a)
    {
        while(r!=0)
        {
            r=b%a;
            b=a;
            a=r;
        }
        return b;
    }
    else
    return a;
}
int main()
{
    long long a,b,x,y,d,i,j,g;
    scanf("%lld %lld",&a,&b);
    g=gcd(a,b);
  //  printf("%lld",g);
    if(g==a&&g==b)
    {
    printf("0 1 %lld",g);
    return 0;
    }
    else if(a<b)
    {
       x=a;
       y=b;
    }
    else if(a>b)
    {
       x=b;
       y=a;
    }
    s=-1;
    i=0;
    j=0;
    while(s!=g)
    {
        while(s!=g)
        {

        }
        i++;

    }
        return 0;

}
