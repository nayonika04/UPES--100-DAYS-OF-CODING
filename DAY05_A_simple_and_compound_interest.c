//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main() {
    float principal,rate,time;
    float simple_interest,compound_int, amount;

    printf("enter the principal amount:");
    scanf("%f", &principal);

    printf("enter the annual interest rate (as a percentage):");
    scanf("%f", &rate);

    printf("enter the time in years:");
    scanf("%f", &time);

    simple_interest = principal*rate*time/100;
    rate = rate/100;

    amount = principal * pow((1 + rate), time);
    compound_interest = amount - principal;

    printf("\nSimple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;

}

