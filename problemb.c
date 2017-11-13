#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,s,d,g,p,q;
    double r;
    scanf("%I64d %I64d %I64d",&p,&q,&s);
    if(p>q)
    {
        if(s>0)
        {
    d=p;
    a=q;
        }
    else
    {
    d=q;
        a=p;
    }

    }
    else
    {
        if(s>0)
        {
        d=q;
        a=p;
        }
        else
        {
        d=p;
    a=q;
        }

    }
    //if()
    if(a<0&&s>0&&d<0)
    printf("-1");
    else if(a>0&&d>0&&s<0)
    printf("-1");
    else if(a>=s)
    {

    printf("-1");
    }
    else
    {
    r=(s-a)/(double)d;
    g=(int)r;
    if((r-g)!=0)
    g++;
    if(g>0)
    printf("%I64d",g);
    else
    printf("-1");
    }
    return 0;

}
