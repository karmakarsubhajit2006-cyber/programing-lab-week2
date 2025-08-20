#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.1416;

    // Input the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Display result
    printf("Area of the circle = %.2f\n", area);

    return 0;
}

