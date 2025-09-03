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

//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main() {
    float num1,num2;
    printf("enter the first interger:");
    scanf("%f", &num1);
 
    printf("enter the second integer:");
    scanf("%f", &num2);

    printf("sum: %.2f\n", num1 + num2);
    printf("diffrence: %.2f\n", num1 - num2);
    printf("product: %.2f\n", num1 * num2);

    if("num2 !=0");{
    printf("quotient: %.2f\n", num1/num2);
    }
    else{
        printf("cannot calculate quotient: division by zero is not allowed.\n");
    }
    return 0;

}