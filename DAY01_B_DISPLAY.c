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
