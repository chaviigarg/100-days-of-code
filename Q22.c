/*
Q22. Write a program to find profit or loss percentage
given cost price and selling price.
*/

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    scanf("%f %f", &costPrice, &sellingPrice);

    if (costPrice <= 0) {
        printf("Invalid cost price");
        return 0;
    }

    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit Percentage = %.2f%%", percentage);
    }
    else if (sellingPrice < costPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss Percentage = %.2f%%", percentage);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}