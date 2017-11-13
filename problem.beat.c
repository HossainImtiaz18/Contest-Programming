#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
   double pa,pb,r,s;
    int tc,i;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%lf",&pa);
        pb=1.0-pa;
            r=(pb*2.0*pa*10000.0)+(pa*10000.0);

        printf("%lf\n",r);
    }
    return 0;
}
