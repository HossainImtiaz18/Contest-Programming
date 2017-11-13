#include<stdio.h>
int main()
{
    int n,m,i,song;
    scanf("%d %d",&n,&m);
    song=(n+m)-1;
    printf("%d\n",song);
    for(i=1;i<=m;i++)
    printf("1 %d\n",i);
    for(i=2;i<=n;i++)
    printf("%d %d\n",i,m);
    printf("\n");
    return 0;
}
