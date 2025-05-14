#include <stdio.h>
int square(int num) {
    return num * num;
}
int main() {
    int number, result;
    printf("Enter an integer: ");
    scanf("%d", &number);
    result = square(number);
    printf("Square of %d is %d\n", number, result);

    return 0;
}


Enter an integer: 6
Square of 6 is 36
