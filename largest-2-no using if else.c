#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("The largest number is: %.2f\n", num1);
    } else {
        printf("The largest number is: %.2f\n", num2);
    }

    return 0;
}
Enter the first number: 23
Enter the second number: 56
The largest number is: 56.00
