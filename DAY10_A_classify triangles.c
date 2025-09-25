//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The given side lengths do not form a valid triangle.\n");
    }

    return 0;
}

//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>

int main() {
    int dayNumber;

    printf("Enter a number (1-7) to determine the day of the week: ");
    scanf("%d", &dayNumber);

    switch (dayNumber) {
        case 1:
            printf("Day %d is Sunday\n", dayNumber);
            break;
        case 2:
            printf("Day %d is Monday\n", dayNumber);
            break;
        case 3:
            printf("Day %d is Tuesday\n", dayNumber);
            break;
        case 4:
            printf("Day %d is Wednesday\n", dayNumber);
            break;
        case 5:
            printf("Day %d is Thursday\n", dayNumber);
            break;
        case 6:
            printf("Day %d is Friday\n", dayNumber);
            break;
        case 7:
            printf("Day %d is Saturday\n", dayNumber);
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
