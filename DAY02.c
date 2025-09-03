#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth
    perimeter = 2 * (length + breadth);

    // Display the calculated area
    printf("Area of the rectangle: %.2f\n", area);

    // Display the calculated perimeter
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}