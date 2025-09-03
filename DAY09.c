//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c; 
    double discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("root1 = %.2lf\n", root1);
        printf("root2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("root1 = root2 = %.2lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and conjugate:\n");
        printf("root1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("root2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}

//Q18: Write a program to assign grades based on a percentage input.
#include <stdio.h>

int main() {
    float percentage;

    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade: B\n");
    } else if (percentage >= 70 && percentage < 80) {
        printf("Grade: C\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("Grade: D\n");
    } else if (percentage >= 0 && percentage < 60) {
        printf("Grade: F\n");
    } else {
        printf("Invalid percentage entered. Please enter a value between 0 and 100.\n");
    }

    return 0;
}
