
#include <stdio.h>

int main() {
    int a = 5;
    int *b = &a;
    *b = *b + 10;
    printf("a = %d\n",a);
    printf("bhavya = %d\n",*b);
    return 0;
}


a = 15
bhavya = 15

