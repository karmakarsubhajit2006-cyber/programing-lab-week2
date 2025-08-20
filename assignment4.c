#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Display original values
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
