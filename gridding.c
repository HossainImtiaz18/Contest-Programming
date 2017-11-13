#include<stdio.h>
#include<string.h>
int main()
{
    int na[50][50],p,n,i,j,m,l,res[500],check[500];
    char str[500],fin[500],c;
    while(scanf("%d",&n)!=EOF)
    {
        p=n*n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&na[i][j]);
            }
        }

        scanf("%c",&c);
        //scanf("%s",str);
           gets(str);
          //
        int k=0,s;
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=0;j<n;j++)
            {
                s=s+na[i][j];
            }
            res[k++]=s;
        }
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=0;j<n;j++)
            {
                s=s+na[j][i];
            }
            res[k++]=s;
        }
        int test,temp=0;
        test=res[0];


        j=0;
        s=0;
        for(i=0;i<n;i++)
        {
           s=s+na[i][j++];
        }
        res[k++]=s;
        s=0;
        j=0;
        for(i=n-1;i>=0;i--)
        {
            s=s+na[i][j++];
        }
        res[k++]=s;





        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(na[i][j]>p||na[i][j]<=0)
                {
                    temp=1;
                    break;
                }
            }
        }
        int w=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                check[w++]=na[i][j];
            }
        }
        for(i=0;i<w;i++)
        {
            for(j=i+1;j<w;j++)
            {
               if(check[i]==check[j])
               {
                   temp=1;
                   break;
               }
            }
        }
        for(i=1;i<k;i++)
        {
            if(test!=res[i])
            {
                temp=1;
                break;
            }
        }
        i=0;
            for(l=0;l<n;l++)
            {
                for(m=0;m<n;m++)
                {
                    fin[na[l][m]-1]=str[i++];
                }
            }
            fin[p]='\0';
            if(temp==0)
        printf("%s",fin);
        else
        printf("NOT A MAGIC SQUARE");
        printf("\n");
    }
    return 0;
}
