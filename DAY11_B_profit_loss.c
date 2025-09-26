//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float profitOrLossAmount;
    float percentage;

    // Input cost price and selling price
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        profitOrLossAmount = sellingPrice - costPrice;
        percentage = (profitOrLossAmount / costPrice) * 100;
        printf("Profit: %.2f\n", profitOrLossAmount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        profitOrLossAmount = costPrice - sellingPrice;
        percentage = (profitOrLossAmount / costPrice) * 100;
        printf("Loss: %.2f\n", profitOrLossAmount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
