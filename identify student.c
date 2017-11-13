#include<stdio.h>
struct class_records
{
    int number;
    char name[20];
    float marks;
};
main()
{
    int x;
    struct class_records student_1={1,"Imtiaz",95.5};
    struct class_records student_2={2,"Shourav",98.5};
    struct class_records student_3;
      scanf("%d %s %f",&student_3.number,student_3.name,&student_3.marks);
       x=((student_2.number==student_3.number)&&(student_2.marks==student_3.marks)&&(strcmp(student_2.name,student_3.name)==0))?1:0;
       if(x==1)
       printf("Student_2 and Student_3 are same.\n");
       else
       printf("Student_2 and Student_3 are not same.\n");
       return 0;
}
