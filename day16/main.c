#include <stdio.h>

int main() {
    int i, j, customers, items, item_no, qty;
    int totalRevenue = 0, totalItemsSold = 0;

    int price[5] = {100, 120, 80, 100, 150};
    char *itemName[5] = {"Coffee", "Sandwich", "Burger", "Pasta", "Juice"};
    int quantitySold[5] = {0, 0, 0, 0, 0};

    printf("========== Café Order Management System ==========\n");
    printf("Enter total number of customers: ");
    scanf("%d", &customers);

    for (i = 1; i <= customers; i++) {
        int customerTotal = 0;
        printf("\n--- Customer %d ---\n", i);
        printf("Enter number of items: ");
        scanf("%d", &items);

        for (j = 1; j <= items; j++) {
            printf("Enter item number and quantity: ");
            scanf("%d %d", &item_no, &qty);

            customerTotal += price[item_no - 1] * qty;
            quantitySold[item_no - 1] += qty;
            totalItemsSold += qty;
        }

        printf("Total Bill for Customer %d: ₹%d\n", i, customerTotal);
        totalRevenue += customerTotal;
    }

    int mostOrdered = 0, leastOrdered = 0;
    for (i = 1; i < 5; i++) {
        if (quantitySold[i] > quantitySold[mostOrdered])
            mostOrdered = i;
        if (quantitySold[i] < quantitySold[leastOrdered])
            leastOrdered = i;
    }

    printf("\n========== Café Summary ==========\n");
    printf("Total Revenue: Rs. %d\n", totalRevenue);
    printf("Total Items Sold: %d\n", totalItemsSold);
    printf("Most Ordered Item: %s\n", itemName[mostOrdered]);
    printf("Least Ordered Item: %s\n", itemName[leastOrdered]);
    printf("=================================\n");
    return 0;
}
