//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main() {
    char operator;
    double num1, num2;
    printf("enter an operator(+,-,*,/,%%): ");
    scanf("%c", &operator);

    printf("enter two numbers: ");
    scanf("%1f %1f", &num1, &num2);

    switch (operator) {
        case '+':
        printf("%.21f + %.21f = %.21f\n", num1, num2, num1 + num2);
        break;
        case '-':
        printf("%.21f - %.21f = %.21f\n", num1, num2, num1 - num2);
        break;
        case '*':
        printf("%.21f * %.21f = %.21f\n", num1, num2, num1*num2);
        break;
        case '/':
        if (num2 != 0) { 
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            case '%': 
            if (num2 != 0) {
                
                printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
    return 0;

}

//Q26: Write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    printf("Numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n"); 
    return 0; 
}

