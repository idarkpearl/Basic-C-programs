#include <stdio.h>
#include <math.h>

float num1, num2, sum, diff, times, div;
int b, p;
int select;

int main() {
    printf("Select the operation:\n");
    printf("1: ADDITION\n");
    printf("2: SUBTRACTION\n");
    printf("3: MULTIPLICATION\n");
    printf("4: DIVISION\n");
    printf("5: EXPONENT\n");

    char choice;

    do {
        printf("Enter your choice (1-5): ");
        scanf("%d", &select);

        switch (select) {
            case 1:
                printf("Enter the first number: ");
                scanf("%f", &num1);
                printf("Enter the second number: ");
                scanf("%f", &num2);
                sum = num1 + num2;
                printf("The sum is: %f\n", sum);
                break;

            case 2:
                printf("Enter the first number: ");
                scanf("%f", &num1);
                printf("Enter the second number: ");
                scanf("%f", &num2);
                diff = num1 - num2;
                printf("The difference is: %f\n", diff);
                break;

            case 3:
                printf("Enter the first number: ");
                scanf("%f", &num1);
                printf("Enter the second number: ");
                scanf("%f", &num2);
                times = num1 * num2;
                printf("The product is: %f\n", times);
                break;

            case 4:
                printf("Enter the first number: ");
                scanf("%f", &num1);
                printf("Enter the second number: ");
                scanf("%f", &num2);
                if (num2 != 0) {
                    div = num1 / num2;
                    printf("The quotient is: %f\n", div);
                } else {
                    printf("Error: Division by zero.\n");
                }
                break;

            case 5:
                printf("Enter the base number: ");
                scanf("%d", &b);
                printf("Enter the power number: ");
                scanf("%d", &p);
                printf("The result is: %.2f\n", pow(b, p));
                break;

            default:
                printf("Invalid choice, please choose between 1-5.\n");
                break;
        }

        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}