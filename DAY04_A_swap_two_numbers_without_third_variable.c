//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap logic using arithmetic operations
    num1 = num1 + num2; // num1 now holds the sum of original num1 and num2
    num2 = num1 - num2; // num2 now holds the original value of num1
    num1 = num1 - num2; // num1 now holds the original value of num2

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}


