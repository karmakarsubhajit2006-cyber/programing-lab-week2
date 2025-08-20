#include <stdio.h>

int main() {
    int choice;
    float celsius, fahrenheit;

    // Menu for user
    printf("Temperature Converter\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Perform conversion based on user input
    if (choice == 1) {
        // Celsius to Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
    } else if (choice == 2) {
        // Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f°C\n", celsius);
    } else {
        printf("Invalid choice. Please run the program again and select 1 or 2.\n");
    }

    return 0;
}
