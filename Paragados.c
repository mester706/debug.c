#include <stdio.h>

int main () {

    char customerName[30];
    int customerID;
    char membership;

    float product1, product2, product3;

    int quantity1, quantity2, quantity3;
    
    float subtotal;
    float average;

	printf("--------------------\n");
    printf("ONLINE ORDER BILL\n");
    printf("--------------------\n");

    printf("Enter customer name: ");
    scanf(" %s", customerName);

    printf("Enter customer ID: ");
    scanf("%d", &customerID);

    printf("Enter membership type (R/G): ");
    scanf(" %c", &membership);

    printf("Enter price of Product 1: ");
    scanf(" %f", &product1);

    printf("Enter price of Product 2: ");
    scanf("%f", &product2);

    printf("Enter price of Product 3: ");
    scanf("%f", &product3);
    
    printf("Enter Quantity of Product1: ");
    scanf("%d", &quantity1);
    
    printf("Enter Quantity of Product2: ");
    scanf("%d", &quantity2);
    
    printf("Enter Quantity of Product3: ");
    scanf("%d", &quantity3);
    
    
    subtotal = (product1 * quantity1) + (product2 * quantity2) + (product3 * quantity3);
    average = subtotal / (quantity1 + quantity2 + quantity3);


    printf("\nORDER RECEIPT\n");
    printf("--------------------\n");

    printf("Customer Name: %s\n", customerName);
    printf("Customer ID: %d\n", customerID);
    printf("Membership: %c\n", membership);

    printf("Product 1: %.2f\n", product1);
    printf("Product 2: %.2f\n", product2);
    printf("Product 3: %.2f\n", product3);

    printf("--------------------\n");

    printf("Subtotal: %.2f\n", subtotal);
    printf("Average Price: %.2f\n", average);

    return 0;
}
