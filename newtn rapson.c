#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define F(x) x*x-5*x+6
#define FD(x) 2*x-5
int main()
{
    double x0,x1,fx0,fxd,div;
    scanf("%lf",&x0);
    int i=0;
    while(1)
    {
    fx0=F(x0);
    fxd=FD(x0);
    div=fx0/fxd;
    x1=x0-div;
    if(fabs((x0-x1)/x1)<0.00005)
    break;
    x0=x1;
    i++;
    }
    printf("The root is ::%lf\n",x1);
    printf("The number of iteriations:%d",i);

}
