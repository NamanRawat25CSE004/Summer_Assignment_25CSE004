#include <stdio.h>

struct Bus {
    int busNo;
    char passenger[30];
    int seatNo;
};

int main() {

    struct Bus b[3];

    printf("Enter Passenger Details:\n");

    for (int i = 0; i < 3; i++) {

        printf("\nPassenger %d\n", i + 1);

        printf("Bus Number: ");
        scanf("%d", &b[i].busNo);

        printf("Passenger Name: ");
        scanf("%s", b[i].passenger);

        printf("Seat Number: ");
        scanf("%d", &b[i].seatNo);
    }

    printf("\nReservation Details\n");

    for (int i = 0; i < 3; i++) {

        printf("\nBus No    : %d\n", b[i].busNo);
        printf("Passenger : %s\n", b[i].passenger);
        printf("Seat No   : %d\n", b[i].seatNo);
    }

    return 0;
}