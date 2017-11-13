#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    int c,tc,i,ii=1,j,a[5],k,min;
    double f,p,s,r;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[j]);
        if((a[0]+a[1]>a[2])&&(a[1]+a[2]>a[0])&&(a[2]+a[0]>a[1]))
        {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                if(a[k]<a[k+1])
                {
                    min=a[k];
                    a[k]=a[k+1];
                    a[k+1]=min;
                }
            }
        }
        s=(a[0]+a[1]+a[2])/2.0;
       // printf("\n%lf\n",s);
      // r=sqrt((s*(s-a[2]))/((float)a[1]*(float)a[0]));
      // printf("\n%lf\n",r);
     // printf("%d %d %d",a[0],a[1],a[2]);
      r=((a[1]*a[1])+(a[0]*a[0])-(a[2]*a[2]))/((2.0)*((float)a[0])*((float)a[1]));
        p=acos(r);
        p=p*180/pi;
               int h=(int)p;
               //if(p-h>=0.5)
              // h++;
        printf("Case %d:\n\"Triangle\" should sit on chair with size %d\n",ii++,a[0]);
        printf("\"Dear\" should sit on chair with size %d\n",a[1]);
        if(a[0]==a[1]&&a[1]==a[2])
        printf("The angle between them is 60");
        else
       printf("The angle between them is %d",h);
        }
        else
        printf("Case %d:\nThey can't sit in a triangle :-\(",ii++);
        printf("\n");
    }
    return 0;
}
