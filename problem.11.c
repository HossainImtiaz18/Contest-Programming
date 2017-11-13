
# include <stdio.h>
# include <conio.h>
# include<stdlib.h>
# include <math.h>
# define EPS .00001
double F(double x);
double root(double fVal1,double fVal2);
void main()
{
double fVal1,fVal2;
//clrscr();
printf("enter the values ");
scanf("%f %f",&fVal1,&fVal2);
printf("the roots of the euation is %1.9f\n",root(fVal1,fVal2));
getch();
}
double root(double fVal1,double fVal2)
{
int nCtr=0;
double fTest1,fTest2,fTest3,fVal,fNum;
fTest1=F(fVal1);
fTest2=F(fVal2);
if((fTest1*fTest2)>0)
{
printf("both are of equal sign");
exit(0);
}
else
{
do
{
nCtr++;
fVal1=(fVal1+fVal2)/2;
fTest3=F(fVal);
if(fTest1*fTest3>0)
{
fTest1=fTest3;
fVal1=fVal;
}
else
{
fTest2=fTest3;
fVal2=fVal;
}
fNum=fabs (fVal2-fVal1);
} while(fNum>EPS);
}
return fabs(fVal2)>fabs(fVal1)?fVal2:fVal1;
}
double F(double x)
{
return (x*x*x)+(3*x)-5;
}
