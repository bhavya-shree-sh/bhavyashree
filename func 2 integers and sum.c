#include <stdio.h>

int add_numbers(int a, int b) {
    return(a+b);
}

int main() {
    int result = add_numbers(3, 5);
    printf("Sum: %d\n", result);  // Output: Sum: 8
    return 0;
}

Sum: 8
