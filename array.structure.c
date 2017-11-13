#include<stdio.h>
struct marks
{
    int sub1;
    int sub2;
    int sub3;
    int total;
};
main()
{
    int i;
    struct marks student[3]={{60,52,61,0},
                              {53,42,51,0},
                              {83,53,92,0}};
    struct marks total={0};
    for(i=0;i<3;i++)
    {
        student[i].total=student[i].sub1+student[i].sub2+student[i].sub3;
        total.sub1=total.sub1+student[i].sub1;
        total.sub2=total.sub2+student[i].sub2;
        total.sub3=total.sub3+student[i].sub3;
        total.total=total.total+student[i].total;
    }
    printf("Student        total\n\n");
    for(i=0;i<3;i++)
        printf("Student[%d]     %d\n",i,student[i].total);
    printf("Subject        total\n\n");
        printf("Subject1     %d\n",total.sub1);
        printf("Subject1     %d\n",total.sub2);
        printf("Subject1     %d\n",total.sub3);
        printf("Grant total=%d",total.total);
        return 0;
}
