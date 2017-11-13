#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double ffunction(double x);
double ffunction(double x)
{
    return((x*x*x)-(2*x)-5);
}
void main()
{
    double delta=1E-6;
    int satisfied=0;
    double a,b;
    double ya,yb;
    int max;
    int k;
    double c,yc;
    printf("---------------------------------------------\n");
    printf("Please enter end point a and b of the intreval [a,b]\n");
    scanf("%lf %lf",&a,&b);
    printf("Tha interval ranges from %lf to %lf\n",a,b);
    ya=ffunction(a);
    yb=ffunction(b);
    max=(int)(1+floor((log(b-a)-log(delta))/log(2)));
    printf("max=%d\n",max);
    if(((ya>=0)&&(yb>=0))||((ya<=0)&&(yb<=0)))
    {
        printf("THe values ffunction(a) and ffunction(b)\n");
        printf("do not differ in sign.\n");
        return 0;
    }
    else
    {
        for(k=1;k<=max;k++)
        {
            if(satisfied==1)
            break;
        }
        c=(a+b)/2;
        yc=ffunction(c);
        if(yc==0)
        {
            a=c;
            b=c;
        }
        else if((yb>=0)&&(yc>=0)|((yb<0)&&(yc<0)))
        {
            b=c;
            yb=yc;
        }
        else
        {
            a=c;
            ya=yc;
        }
        if((b-a)<delta)
        satisfied=1;
    printf("-----------------------------------------\n");
    printf("The maximum number of iterations is : %d",max);
    printf("the number of performed iteration is : %d\n",k-1);
    printf("------------------------------------------\n");
    printf("The computed root of f(x)=0 is : %lf\n",c);
    printf("-------------------------------------------\n");
    printf("The accuracy is +- %lf\n",b-a);
    printf("--------------------------------------------\n");
    printf("the value of the function f(c) is %lf\n",yc);
}
    return 0;

}
