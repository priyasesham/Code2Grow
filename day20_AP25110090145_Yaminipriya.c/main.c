#include <stdio.h>

void getProductCount(int *n) 
{
    printf("Enter the number of products: ");
    scanf("%d", n);
}

void getIDs(int n, int ids[]) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Enter Product %d ID: ", i + 1);
        scanf("%d", &ids[i]);
    }
}

void getNames(int n, char names[][20]) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Enter Product %d Name: ", i + 1);
        scanf("%s", names[i]);
    }
}

void getQuantities(int n, int qty[]) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Enter Product %d Quantity: ", i + 1);
        scanf("%d", &qty[i]);
    }
}

void getPrices(int n, float price[]) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Enter Product %d Price: ", i + 1);
        scanf("%f", &price[i]);
    }
}

void buildBillTable(int n, int ids[], int qty[], float price[], int bill[][3]) 
{
    for (int i = 0; i < n; i++) 
    {
        bill[i][0] = ids[i];
        bill[i][1] = qty[i];
        bill[i][2] = (int)price[i];
    }
}

void calculateTotals(int n, int qty[], float price[], float total[]) 
{
    for (int i = 0; i < n; i++) 
    {
        total[i] = qty[i] * price[i];
    }
}

void printLine() 
{
    for (int i = 0; i < 50; i++) 
    {
        printf("-");
    }
        printf("\n");
}

void showHeader() 
{
    printLine();
    printf("ID\tName\tQuantity\tPrice\tTotal\n");
    printLine();
}

void showRows(int n, int bill[][3], char names[][20], float total[]) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d\t", bill[i][0]);
        printf("%s\t", names[i]);
        printf("%d\t\t", bill[i][1]);
        printf("%d\t", bill[i][2]);
        printf("%.2f\n", total[i]);
    }
}

float calculateGrandTotal(int n, float total[]) 
{
    float sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += total[i];
    }
    return sum;
}

void showGrandTotal(float sum) 
{
    printLine();
    printf("Grand Total: %.2f\n", sum);
    printLine();
}

void showBill(int n, int bill[][3], char names[][20], float total[]) 
{
    showHeader();
    showRows(n, bill, names, total);
    float grand = calculateGrandTotal(n, total);
    showGrandTotal(grand);
}

int main() 
{
    int n;
    getProductCount(&n);

    int ids[n];
    char names[n][20];
    int qty[n];
    float price[n];
    int bill[n][3];
    float total[n];

    getIDs(n, ids);
    getNames(n, names);
    getQuantities(n, qty);
    getPrices(n, price);

    buildBillTable(n, ids, qty, price, bill);
    calculateTotals(n, qty, price, total);

    showBill(n, bill, names, total);
    return 0;
}
