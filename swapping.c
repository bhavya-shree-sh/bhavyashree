enter the first number (a): 54
enter the second number (b): 65
before swapping: a= 54, b=65


// Online C compiler to run C program online
#include <stdio.h>
 int main(){
 int a, b;
 
     printf("enter the first number (a): ");
     scanf("%d", &a);
     printf("enter the second number (b): ");
     scanf("%d",  &b);
     printf("before swapping: a= %d, b=%d\n", a, b);
   
   a=a+b;
   b=a-b;
   a=a-b;
 
    
}
