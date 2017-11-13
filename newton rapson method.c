#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F(x)(x*x*x)-(4*x)
#define FD(x)(3*x*x)-4
#define MAXIT 20
void main()
{
int count;
float x0,x1,fx,fdx;

printf("NEWTON-RAPHSON METHOD\n");
printf("---------------------\n");
printf("initial value:");
scanf("%f",&x0);
count=1;
begin:

fx=F(x0);
fdx=FD(x0);
x1=(x0-(fx/fdx));
if(fabs((x1-x0)/x1)<0.00001)
{
printf("The root is:%f\n",x1);
printf("Iteration is:%d\n",count);
}

else
{
x0=x1;
count=count+1;
if((count<MAXIT));
goto begin;


}

}
