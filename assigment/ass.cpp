#include <stdio.h>

int main() {
    int choice, quantity, totalAmount = 0, amount;
    char moreOrders;

    do {
        printf("-------- Manu --------\n");
        printf("1.Pizza\t\tprice = 180rs/pcs\n");
        printf("2.Burger\tprice = 100rs/pcs\n");
        printf("3.Dosa\t\tprice = 120rs/pcs\n");
        printf("4.Idli\t\tprice = 50rs/pcs\n");
        printf("Please Enter your choose... :");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYou have selected pizza.\n");
                printf("Enter the quantity :");
                scanf("%d", &quantity);
                amount = 180 * quantity;
                totalAmount += amount;
                printf("Amount : %d\n", amount);
                printf("Total Amount is = %d\n", totalAmount);
                break;
            case 2:
                printf("\nYou have selected Burger.\n");
                printf("Enter the quantity :");
                scanf("%d", &quantity);
                amount = 100 * quantity;
                totalAmount += amount;
                printf("Amount : %d\n", amount);
                printf("Total Amount is = %d\n", totalAmount);
                break;
            case 3:
                printf("\nYou have selected Dosa.\n");
                printf("Enter the quantity :");
                scanf("%d", &quantity);
                amount = 120 * quantity;
                totalAmount += amount;
                printf("Amount : %d\n", amount);
                printf("Total Amount is = %d\n", totalAmount);
                break;
            case 4:
                printf("\nYou have selected Idli.\n");
                printf("Enter the quantity :");
                scanf("%d", &quantity);
                amount = 50 * quantity;
                totalAmount += amount;
                printf("Amount : %d\n", amount);
                printf("Total Amount is = %d\n", totalAmount);
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

        printf("Do you want place more orders? y & n :");
        scanf(" %c", &moreOrders);

    } while (moreOrders == 'y' || moreOrders == 'Y');

    printf("\nThank you for your order. Total payable amount is: %d rs\n", totalAmount);

    return 0;
}

