#include<stdio.h>
main()
{
    struct marks
    {
        int sub[3];
        int total;
    };
    struct marks student[3]={45,35,57,0,65,83,95,0,24,34,45,0};
    struct marks total={0};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        student[i].total=student[i].sub[j];
        total.sub[j]+=student[i].sub[j];
        }
        total.total+=student[i].total;
    }
    printf("Student     Total\n\n");
    for(i=0;i<3;i++)
    printf("Student[%d]    %d\n",i+1,student[i].total);
    printf("Subject     Total\n\n");
    for(j=0;j<3;j++)
    printf("Subject[%d]    %d\n",j+1,total.sub[j]);
    printf("\nGrant Total   =  %d \n",total.total);
}
