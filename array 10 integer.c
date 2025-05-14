#include <stdio.h>
int main() {
    int nums[10];
    int sum = 0;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &nums[i]);
        sum += nums[i]; 
    }
    printf("The sum of the 10 integers is: %d\n", sum);
  return 0;
}



Enter 10 integers:
Number 1: 2 3 4 5 6 7 8 9 5  1
Number 2: Number 3: Number 4: Number 5: Number 6: Number 7: Number 8: Number 9: Number 10: The sum of the 10 integers is: 50
