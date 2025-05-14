#include <stdio.h>

int main() {
    float num1, num2;
    

    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;

    
    if (num2 != 0) {
        float quotient = num1 / num2;
        printf("\nResults:\n");
        printf("Sum: %.2f\n", sum);
        printf("Difference: %.2f\n", difference);
        printf("Product: %.2f\n", product);
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("\nResults:\n");
        printf("Sum: %.2f\n", sum);
        printf("Difference: %.2f\n", difference);
        printf("Product: %.2f\n", product);
        printf("Quotient: Undefined (division by zero)\n");
    }

    return 0;
}



Enter first number: 3
Enter second number: 4

Results:
Sum: 7.00
Difference: -1.00
Product: 12.00
Quotient: 0.75
