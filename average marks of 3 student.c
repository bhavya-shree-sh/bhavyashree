#include <stdio.h>

int main() {
    struct student{
        char name[50];
        int marks;
    };
    struct student s[3];
    float total=0,avg;
    for(int i=0;i<3;i++){
          printf("enter the name of student:\n",i+1);
          scanf("%s", &s[i].name);
          printf("enter the marks of %s:",s[i].name);
          scanf("%d",&s[i].marks);
          total+=s[i].marks;
    }
    avg=total/3;
    printf("\nstudent details:\n");
   for(int i=0;i<3;i++){
       printf("name:%s,marks:%d\n",s[i].name,s[i].marks);
   }
    printf("average marks=%.2f\n",avg);
}


enter the name of student:
bhavya
enter the marks of bhavya:25
enter the name of student:
harshitha
enter the marks of harshitha:24
enter the name of student:
anusha
enter the marks of anusha:24

student details:
name:bhavya,marks:25
name:harshitha,marks:24
name:anusha,marks:24
average marks=24.33


