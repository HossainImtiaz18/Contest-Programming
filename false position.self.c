#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double function(double x)
{
    return((x*x*x)-(2*x)-5);
}
int main()
{
    double a,b,x,delta=0.001,fa,fb,fx;
    printf("Enter the values to find out the required result:\n");
    scanf("%lf %lf",&a,&b);
    printf("Enter the value of accuracy:\n");
    scanf("%lf",&delta);
    fa=function(a);
    fb=function(b);
    if((fa>0&&fb>0)||(fb<0&&fa<0))
    {
        printf("They do not differ in sign:\n");
        return 0;
    }
    else
    {
        printf("______________________________________________________________\n");
        printf("n            a            b               x              f(x)\n");
        printf("_______________________________________________________________\n");
        int k=1,test=0;
       do
       {
           x=((a*fb)-(b*fa))/(fb-fa);
           printf("%d %15.6lf %15.6lf %15.6lf ",k++,a,b,x);
           fx=function(x);
           if(fx==0)
               test=1;
           else
           if(fx>0)
               b=x;
           else if(fx<0)
               a=x;
           if(test==1)
           break;
           else
               printf("%15.5lf\n",fx);
       }while(fabs(fx)>delta);
       printf("____________________________________________________________\n\n");
       printf("So the root is=%lf\n\n",x);
       printf("_____________________________________________________________\n\n");
    }
}
