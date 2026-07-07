
#include <stdio.h>

struct Room {
    int roomNo;
    char guestName[30];
    int days;
};

int main() {

    struct Room r[3];

    printf("Enter details of 3 guests:\n");

    for (int i = 0; i < 3; i++) {

        printf("\nGuest %d\n", i + 1);

        printf("Room Number: ");
        scanf("%d", &r[i].roomNo);

        printf("Guest Name: ");
        scanf("%s", r[i].guestName);

        printf("Days Stayed: ");
        scanf("%d", &r[i].days);
    }

    printf("\nHotel Records\n");

    for (int i = 0; i < 3; i++) {

        printf("\nRoom No : %d\n", r[i].roomNo);
        printf("Guest   : %s\n", r[i].guestName);
        printf("Days    : %d\n", r[i].days);
    }

    return 0;
}