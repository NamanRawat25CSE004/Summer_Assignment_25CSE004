#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int quantity;
};

int main() {

    struct Item item[3];

    printf("Enter details of 3 items:\n");

    for (int i = 0; i < 3; i++) {

        printf("\nItem %d\n", i + 1);

        printf("Item ID: ");
        scanf("%d", &item[i].id);

        printf("Item Name: ");
        scanf("%s", item[i].name);

        printf("Quantity: ");
        scanf("%d", &item[i].quantity);
    }

    printf("\nInventory Details\n");

    for (int i = 0; i < 3; i++) {

        printf("\nID       : %d\n", item[i].id);
        printf("Name     : %s\n", item[i].name);
        printf("Quantity : %d\n", item[i].quantity);
    }

    return 0;
}