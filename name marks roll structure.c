#include <stdio.h>

int main() {
    struct shree{
        char name[50];
        int roll;
        float marks;
    };
    struct shree s1;
    printf("enter the name");
    scanf("%s", &s1.name);
    printf("enter the roll number:");
    scanf("%s",&s1.roll);
    printf("enter the marks:");
    scanf("%f", &s1.marks);
    printf("\nstudent details:\n");
    printf("name:%s\nroll:%f\nmarks:%.2f\n",s1.name,s1.roll,s1.marks);
    return 0;

        
    }

enter the namebhavya
enter the roll number:87
enter the marks:678

student details:
name:bhavya
roll:678.000000
marks:678.00
