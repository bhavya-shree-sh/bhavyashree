#include <stdio.h>
int find_largest(int a, int b, int c) {
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}
int main() {
    int num1, num2, num3, largest;
    printf("Enter three integers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    largest = find_largest(num1, num2, num3);
   printf("The largest number is: %d\n", largest);
    return 0;
}

Enter three integers:
5
7
7
The largest number is: 7
