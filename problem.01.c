
/* This program computes root of function with bisector method */
#include <stdio.h>
#include <math.h>
double myFunction(double x, double a, double b,double c){
return a*x*x + b*x +c;
}
int main(void){
double a,b,c;
double leftpt, rightpt, midpt, epsilon = .0000001;
double midvalue, rtvalue, root;
printf("\nEnter values for a,b,c:\n");
scanf("%lf %lf %lf", &a, &b, &c);
printf("\nEnter values for starting left and right points:\n");
scanf("%lf %lf", &leftpt, &rightpt);
printf(" Left and right starting points are: %lf , %lf\n", leftpt,rightpt);
do {
midpt = (leftpt + rightpt)/2;
rtvalue = myFunction(rightpt,a,b,c);
midvalue = myFunction(midpt,a,b,c);
if (rtvalue * midvalue >= 0)
rightpt = midpt;
else leftpt = midpt;
} while ((rightpt - leftpt) > epsilon);
root = (rightpt+leftpt)/2;
printf("\nRoot for equation %5.2lf *x**2 + %5.2lf *x + %5.2lf is:",a,b,c);
printf(" %15.10lf\n", root);
return 0;
}
/* This program computes root of funct*/
