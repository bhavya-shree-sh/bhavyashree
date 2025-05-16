#include <stdio.h>
int i, num, isprime;
int main(){
    printf("enter the num starting from positive no 2");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%2==0){
            printf("its not a ptime\n");
        }
        else{
            printf(" its a prime\n");
        }
         }
}

enter the num starting from positive no 25
 its a prime
