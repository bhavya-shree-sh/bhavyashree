#include <stdio.h>
#define PI 3.14159
double calculate_area(double radius) {
    return PI * radius * radius;
}
int main() {
    double radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = calculate_area(radius);
    printf("The area of the circle is: %.2lf\n", area);

    return 0;
}

Enter the radius of the circle: 5
The area of the circle is: 78.54

