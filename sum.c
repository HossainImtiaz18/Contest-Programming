#include<stdio.h>
#include<math.h>
int main()
{
    int tc,i,n,j,a[50000],s=0;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        s=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i]);
            s=s+a[i];
        }
        printf("Case %d: %d\n",i+1,s);
    }
}
