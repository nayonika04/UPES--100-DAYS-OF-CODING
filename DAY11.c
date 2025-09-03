// Q21: Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>

int main() {
    int month_number;
    char *month_name;
    int days_in_month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    switch (month_number) {
        case 1:
            month_name = "January";
            days_in_month = 31;
            break;
        case 2:
            month_name = "February";
            days_in_month = 28; 
            break;
        case 3:
            month_name = "March";
            days_in_month = 31;
            break;
        case 4:
            month_name = "April";
            days_in_month = 30;
            break;
        case 5:
            month_name = "May";
            days_in_month = 31;
            break;
        case 6:
            month_name = "June";
            days_in_month = 30;
            break;
        case 7:
            month_name = "July";
            days_in_month = 31;
            break;
        case 8:
            month_name = "August";
            days_in_month = 31;
            break;
        case 9:
            month_name = "September";
            days_in_month = 30;
            break;
        case 10:
            month_name = "October";
            days_in_month = 31;
            break;
        case 11:
            month_name = "November";
            days_in_month = 30;
            break;
        case 12:
            month_name = "December";
            days_in_month = 31;
            break;
        default:
            month_name = "Invalid Month";
            days_in_month = 0; 
            break;
    }

    if (days_in_month > 0) {
        printf("Month: %s\n", month_name);
        printf("Number of days: %d\n", days_in_month);
    } else {
        printf("%s\n", month_name);
    }

    return 0;
}

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
