#include <stdio.h>
int main() 
{
    int productID[100], quantity[100];
    float price[100];
    int n = 0, choice = 0, id, i, j;
    float total;

    while (1) 
     {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Product\n");
        printf("2. View All Products\n");
        printf("3. Search Product by ID\n");
        printf("4. Calculate Total Inventory Value\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
         {
            printf("Enter Product ID: ");
            scanf("%d", &productID[n]);
            printf("Enter Quantity: ");
            scanf("%d", &quantity[n]);
            printf("Enter Price: ");
            scanf("%f", &price[n]);
            n++;
         }

        else if (choice == 2) 
          {
            if (n == 0) 
             {
                printf("No products available.\n");
             } 
            
              else 
              {
                printf("\nID\tQty\tPrice\n");
 
                for (i = 0; i < n; i++) 
                {
                    printf("%d\t%d\t%.2f\n", productID[i], quantity[i], price[i]);
                }
              }
           }

        else if (choice == 3) 
        {
            printf("Enter Product ID to search: ");
            scanf("%d", &id);
            j = -1;

            for (i = 0; i < n; i++) 
              {
                if (productID[i] == id) 
                {
                    j = i;
                    break;
                }
              }

            if (j == -1) 
            {
                printf("Product not found.\n");
            }
 
         else 
          {
           printf("ID: %d\nQuantity: %d\nPrice: %.2f\n", productID[j],quantity[j],price[j]);
          }
       }

        else if (choice == 4) 
         {
            total = 0;

            for (i = 0; i < n; i++) 
            {
                total += quantity[i] * price[i];
            }

            printf("Total Inventory Value: %.2f\n", total);
         }

        else if (choice == 5) 
        {
            break;
        }

        else 
        {
            printf("Invalid choice.\n");
        }
     }
      return 0;
}
