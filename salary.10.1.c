#include<stdio.h>
struct personal
    {
        char name[20];
        int day;
        char month[10];
        int year;
        float salary;
    }person={"Imtiaz",10,"April",2012,5000};
main()
{
  // struct personal person;
   printf("Input Values\n");
   //scanf("%s %d %s %d %f",person.name,&person.day,person.month,&person.year,&person.salary);
   printf("%s %d %s %d %f\n",person.name,person.day,person.month,person.year,person.salary);
   return 0;
}
