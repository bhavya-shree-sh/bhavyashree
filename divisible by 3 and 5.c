#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);


    if (number % 3 == 0 && number % 5 == 0) {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else {
        printf("%d is NOT divisible by both 3 and 5.\n", number);
    }

    return 0;
}
Enter a number: 3
3 is NOT divisible by both 3 and 5.

