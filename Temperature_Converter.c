#include <stdio.h>

int main() {
    int select;
    float temp, convertedTemp;
    char choice;

    do {
        printf("Select the input and output unit of temperature:\n");
        printf("1: Celsius to Fahrenheit\n");
        printf("2: Celsius to Kelvin\n");
        printf("3: Celsius to Rankine\n");
        printf("4: Fahrenheit to Celsius\n");
        printf("5: Fahrenheit to Kelvin\n");
        printf("6: Fahrenheit to Rankine\n");
        printf("7: Kelvin to Celsius\n");
        printf("8: Kelvin to Fahrenheit\n");
        printf("9: Kelvin to Rankine\n");
        printf("10: Rankine to Celsius\n");
        printf("11: Rankine to Kelvin\n");
        printf("12: Rankine to Fahrenheit\n");
        
        printf("Enter your choice (1-12): ");
        scanf("%d", &select);
        
        if (select < 1 || select > 12) {
            printf("Invalid selection. Please select a valid option.\n");
            continue; // if u don't know continue statement resets program control to the beginning of the loop
        }

        printf("Enter the temperature: ");
        scanf("%f", &temp);
        // we are using .2f to get only 2 decimal for eg 2.983297 is 2.98 till 2 decimal

        switch (select) {
            case 1:
                convertedTemp = (temp * 9/5) + 32; // Celsius to Fahrenheit
                printf("%.2f Celsius = %.2f Fahrenheit\n", temp, convertedTemp);
                break;
            case 2:
                convertedTemp = temp + 273.15; // Celsius to Kelvin
                printf("%.2f Celsius = %.2f Kelvin\n", temp, convertedTemp);
                break;
            case 3:
                convertedTemp = (temp + 273.15) * 9/5; // Celsius to Rankine
                printf("%.2f Celsius = %.2f Rankine\n", temp, convertedTemp);
                break;
            case 4:
                convertedTemp = (temp - 32) * 5/9; // Fahrenheit to Celsius
                printf("%.2f Fahrenheit = %.2f Celsius\n", temp, convertedTemp);
                break;
            case 5:
                convertedTemp = (temp - 32) * 5/9 + 273.15; // Fahrenheit to Kelvin
                printf("%.2f Fahrenheit = %.2f Kelvin\n", temp, convertedTemp);
                break;
            case 6:
                convertedTemp = temp + 459.67; // Fahrenheit to Rankine
                printf("%.2f Fahrenheit = %.2f Rankine\n", temp, convertedTemp);
                break;
            case 7:
                convertedTemp = temp - 273.15; // Kelvin to Celsius
                printf("%.2f Kelvin = %.2f Celsius\n", temp, convertedTemp);
                break;
            case 8:
                convertedTemp = (temp - 273.15) * 9/5 + 32; // Kelvin to Fahrenheit
                printf("%.2f Kelvin = %.2f Fahrenheit\n", temp, convertedTemp);
                break;
            case 9:
                convertedTemp = temp * 9/5; // Kelvin to Rankine
                printf("%.2f Kelvin = %.2f Rankine\n", temp, convertedTemp);
                break;
            case 10:
                convertedTemp = (temp - 491.67) * 5/9; // Rankine to Celsius
                printf("%.2f Rankine = %.2f Celsius\n", temp, convertedTemp);
                break;
            case 11:
                convertedTemp = temp * 5/9; // Rankine to Kelvin
                printf("%.2f Rankine = %.2f Kelvin\n", temp, convertedTemp);
                break;
            case 12:
                convertedTemp = temp - 459.67; // Rankine to Fahrenheit
                printf("%.2f Rankine = %.2f Fahrenheit\n", temp, convertedTemp);
                break;
            default:
                printf("Invalid selection. Please select a valid option.\n");
                break;
        }

        // Asking if the user want to do more conversion
        printf("Do you want to perform another conversion? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y'); // telling this dumb computer that y and Y is same

    return 0;
}
