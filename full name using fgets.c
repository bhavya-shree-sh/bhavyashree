#include <stdio.h>

int main() {
   char name[8];
   printf("enter your name:");
   fgets(name,8,stdin);
   printf("your name is:%s",name);
   return 0;
}

enter your name:bhavya
your name is:bhavya
