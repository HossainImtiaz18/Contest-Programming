#include<stdio.h>
#include<string.h>
void encryption(char line[],int n);
int main()
{
    char str[100];
    int n;
    printf("Enter a text to encrypt:(You should enter all UPPERCASE and Space):\n");
    gets(str);
    printf("Enter the number of loop to be encrypt:?\b");
    scanf("%d",&n);
   encryption(str,n);//passing string and loop number to a user define function
   return 0;

}
void encryption(char line[],int n)
{
    int len,i,j;
    len=strlen(line);
    //encryption process is started from here:
    for(j=0;j<n;j++)
    {
        for(i=0;i<len;i++)
        {
            if(line[i]!=32)
            {
           line[i]-=65;
           line[i]+=3;
           line[i]=line[i]%26;
           line[i]+=65;
            }
        }
    }
    printf("The encrypted massage is given bellow:\n\n");
    for(i=0;i<len;i++)
    printf("%c",line[i]);

}
