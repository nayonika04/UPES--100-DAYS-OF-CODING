//Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>
int main() {
int num1,num2,sum;
    printf("enter first integer:");
    scanf("%d", &num1);

    printf("enter second number:");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("the sum of %d and %d is %d\n", num1,num2,sum);
    return 0;
}

