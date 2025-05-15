// Online C compiler to run C program online
#include <stdio.h>

int main() {
       int x = 10, y = 20, z;
       int *ptr1 = &x;
       int *ptr2 = &y;
       printf("before swapx=%d y=%d", x, y);
       z=*ptr1;
       *ptr1 = *ptr2;
       *ptr2 = z;
       *ptr2=z;
    printf(" after swap:x=%d,y=%d\n,x,y");

    return 0;
}


before swapx=10 y=20 after swap:x=4202520,y=10
,x,y
