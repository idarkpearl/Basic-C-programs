#include<stdio.h>
int select;

int main()
{
    printf("select the input and output unit of temp\n");
    printf("1 from Celsius to Fahrenheit\n2 from Celsius to Kelvin\n3 from Celsius to Rankine\n");
    printf("4 from Fahrenheit to Celsius\n5 from Fahrenheit to Kelvin\n6 from Fahrenheit to Rankine\n");
    printf("7 from Kelvin to Celsius\n8 from Kelvin to Fahrenheit\n9 from Kelvin to Rankine\n");
    printf("10 from Rankine to Celsius\n11 from Rankine to Kelvin\n12 from Rankine to Fahrenheit\n");
    scanf("%d",&select);
    switch (select)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    
    default:
        break;
    }
    return 0;
}