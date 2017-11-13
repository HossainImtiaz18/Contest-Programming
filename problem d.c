#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,tc,len,ii=1;
    char str[30];
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%s",str);
        len=strlen(str);
        int count=0;
        for(j=0;j<len;j++)
        {
            if(str[j]=='q')
            {
                if(j!=len)
                if(str[j+1]=='u')
                {
                   count=2;
                   break;
                }
                else
                count=1;
            }
        }
        if(count==0)
        printf("Case %d: Ordinary Word\n",ii++);
        else if(count==1)
        printf("Case %d: :(\n",ii++);
        else if(count==2)
        printf("Case %d: I <3 U Q\n",ii++);
            str[0]='\0';
    }
    return 0;
}
