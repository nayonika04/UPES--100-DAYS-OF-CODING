//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

    #include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

//Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    temp = num1;  
    num1 = num2;   
    num2 = temp;   

    printf("After swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}
