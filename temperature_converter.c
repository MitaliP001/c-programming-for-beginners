#include <stdio.h>

void celsius_to_fahrenheit(float celsius) {
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, (celsius * 9/5) + 32);
}

void fahrenheit_to_celsius(float fahrenheit) {
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, (fahrenheit - 32) * 5/9);
}

int main() {
    float temp;
    int choice;

    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (choice == 1) {
        celsius_to_fahrenheit(temp);
    } else if (choice == 2) {
        fahrenheit_to_celsius(temp);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
