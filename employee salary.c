#include<stdio.h>
struct Employee{
char name[50];
int id;
float salary;
};
int main(){
struct Employee employees[5];
for(int i=0;i<5;i++){
printf("Enter details for employee %d:\n", i+1);
printf("Name:");
scanf("%s", &employees[i].name);
printf("ID:");
scanf("%d", &employees[i].id);
printf("salary:");
scanf("%f", &employees[i].salary);}
printf("\nEmployee Details:in");
for(int i=0;i<5;i++){
printf(“Name:%s, ID:%d, Salary:%.2f1n", employees[i].name , employees[i].id,employees[i].salary);



Enter details for employee 1:
Name:lakhmi
ID:67
salary:30000
Enter details for employee 2:
Name:radha
ID:56
salary:19000
Enter details for employee 3:
Name:veena
ID:56
salary:24000
Enter details for employee 4:
Name:sowjanya
ID:87
salary:24000
Enter details for employee 5:
Name:sushma
ID:65
salary:

}
return 0;
}


Enter details for employee 1:
Name:lakhmi
ID:67
salary:30000
Enter details for employee 2:
Name:radha
ID:56
salary:19000
Enter details for employee 3:
Name:veena
ID:56
salary:24000
Enter details for employee 4:
Name:sowjanya
ID:87
salary:24000
Enter details for employee 5:
Name:sushma
ID:65
salary:
