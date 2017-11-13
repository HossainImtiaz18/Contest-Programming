#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-2*x-5
main()
{
double x,y,a,b,f,y1,y2,k,ac;
printf("Please, enter two intervals : ");
scanf("%lf %lf", &a, &b);
printf("Please, enter the least accuracy of the root : ");
scanf("%lf", &ac);
y1=a*a*a-2*a-5; y2=b*b*b-2*b-5;
if(y1<0&&y2>0)
{
if((y1*y2)>0)
printf("There is no root between the given intervals.");
else
{
do
{
x=((a*y2)-(b*y1))/(y2-y1);
f=x*x*x-2*x-5;
if(f<0) a=k;
else b=k;
}
while((b-a)>ac);
printf("The root is : %lf", k);
}
}
else if(y1>0&&y2<0)
{
y1=b*b*b-2*b-5; y2=a*a*a-2*a-5;
if((y1*y2)>0)
printf("There is no root between the given intervals.");
else
{
do
{
x=((b*y2)-(a*y1))/(y2-y1);
f=x*x*x-2*x-5;
if(f<0) b = x;
else a =x;
} while((a-b)>ac);
printf("The root is : %lf", x);
}
}
else printf("There is no root between the given intervals.");
printf("\nThank you very much. \n\n\n");
}
