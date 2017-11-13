#include<stdio.h>
int main()
{
    long long r,g,b,c[5],min,s=0,i;
    scanf("%I64d %I64d %I64d",&r,&g,&b);
    if(((r%3)==0)&&((g%3)==2)&&(b%3==2))
       {
           r=r-3;
           s=2;
           g=g-2;
           b=b-2;
       }
       else if((r%3==2&&g%3==0&&b%3==2))
       {
           g=g-3;
           s=2;
           r=r-2;
           b=b-2;
       }
       else if((r%3==2&&g%3==2&&b%3==0))
       {
           b=b-3;
           s=2;
           r=r-2;
           g=g-2;
       }
       c[0]=r;
       c[1]=g;
       c[2]=b;
       min=c[0];
       for(i=1;i<3;i++)
       {
           if(min>c[i])
           min=c[i];
       }
       s=s+min;
       for(i=0;i<3;i++)
       c[i]=c[i]-min;
       for(i=0;i<3;i++)
       s=s+c[i]/3;
       printf("%I64d",s);
       printf("\n");
       return 0;


}
