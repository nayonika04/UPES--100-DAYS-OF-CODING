//Q27: Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main() {
    int n, sum = 0;
    printf("enter the number of odd terms(n): ");
    scanf("%d", &n);
    sum = n*n;
    printf("the sum of first %d odd numbers is: %d\n", n,sum);
    return 0;
}

//Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;
    long long product = 1; 

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i; 
    }
    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}
