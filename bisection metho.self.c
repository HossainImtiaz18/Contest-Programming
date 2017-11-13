#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double function(double x)
{
    return((x*x*x)-(2*x)-5);
}
int main()
{
    double a,b,d,x,fa,fb,fc;
    double delta=0.001;
    int max,k,test=0;
     printf("Enter two values to process [a ,b]:\n");
     scanf("%lf %lf",&a,&b);
     printf("Enter accuracy of roots:\n");
     scanf("%lf",&delta);
     fa=function(a);
     fb=function(b);
    max=(1+floor((log(b-a)-log(delta))/log(2)));
      if((fa>0&&fb>0)||(fa<0&&fb<0))
         {
             printf("They are same in sign:\n");
             return 0;
         }
         else
         {
             printf("\n________________________________________________________________________\n");
             printf("n           a               b                x              f(x)\n");
            printf("________________________________________________________________________\n");
             for(k=0;k<=max;k++)
             {
                 x=(a+b)/2;
                   fc=function(x);
              printf("%d %15.6lf %15.6lf %15.6lf %15.6lf\n",k+1,a,b,x,fc);
                 if(fc==0)
                     test=1;

                 else if(fc>0)
                     b=x;
                 else if(fc<0)
                     a=x;
                  //d=b-a;
                 //if(d<0.0)
                // d=d*(-1.0);
                 if(fc<0)
                 fc=fc*(-1);
                 if(fc<=delta)
                     test=1;
                     if(test==1)
                     break;

             }
             printf("\n_______________________________________________________________________\n\n");
             printf("So the root is=%lf\n\n",x);
             printf("_______________________________________________________________________\n");
         }
         return 0;


}
