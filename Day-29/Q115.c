
#include <stdio.h>

struct Food {
    char item[30];
    int quantity;
    float price;
};

int main() {

    struct Food f[3];

    printf("Enter Food Details:\n");

    for (int i = 0; i < 3; i++) {

        printf("\nItem %d\n", i + 1);

        printf("Food Name: ");
        scanf("%s", f[i].item);

        printf("Quantity: ");
        scanf("%d", &f[i].quantity);

        printf("Price: ");
        scanf("%f", &f[i].price);
    }

    printf("\nRestaurant Menu\n");

    for (int i = 0; i < 3; i++) {

        printf("\nFood     : %s\n", f[i].item);
        printf("Quantity : %d\n", f[i].quantity);
        printf("Price    : %.2f\n", f[i].price);
    }

    return 0;
}