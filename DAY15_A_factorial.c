//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    
    else if (num == 0) {
        printf("Factorial of 0 = 1\n");
    } 
    
    else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}

//Q30: Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
