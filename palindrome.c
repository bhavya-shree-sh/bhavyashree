// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num, reversed=0,rem,original;
    printf("enter the number int");
    scanf("%d",&num);
    original = num;
    while(num!=0)
{
    rem = num%10;
    reversed = reversed*10 + rem;
    num = num/10;
}    
if (reversed == original){
    printf("the number is palindrome");
}
else{
    printf("not palindrome");
}
}


enter the number int238
not palindrome
