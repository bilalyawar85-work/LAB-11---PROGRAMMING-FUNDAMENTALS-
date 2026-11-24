
#include <stdio.h>

struct Product
{
    int ID;
    char Name[50];
    char Category[30];
    float Price;
    int Stock;
};

void displayProductDetails(struct Product p)
{
    float finalPrice;

    finalPrice = p.Price - (p.Price * 0.05);

    printf("\n--- Product Details ---\n");
    printf("ID: %d\n", p.ID);
    printf("Name: %s\n", p.Name);
    printf("Category: %s\n", p.Category);
    printf("Original Price: %.2f\n", p.Price);
    printf("Available Stock: %d\n", p.Stock);
    printf("Final Price after 5%% discount: %.2f\n", finalPrice);
}

int main()
{
    struct Product p1 = {101, "Keyboard", "Electronics", 5000, 20};

    displayProductDetails(p1);

    return 0;
}
