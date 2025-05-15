enter the nameshree
5
-1
bhavyacoder

// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    char name[8];
    printf("enter the name");
    scanf("%s",&name);
    int length = strlen(name);
    printf("%d\n",length);
    strcpy(name,"bhavya");
    int comparision = strcmp("bhavya","shree");
    printf("%d\n",comparision);
    strcat(name,"coder");
    printf("%s\n",name);
}
