#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[30];
};

int main() {

    struct Book b[3];

    printf("Enter Book Details:\n");

    for (int i = 0; i < 3; i++) {

        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Title: ");
        scanf("%s", b[i].title);

        printf("Author Name: ");
        scanf("%s", b[i].author);
    }

    printf("\nLibrary Records\n");

    for (int i = 0; i < 3; i++) {

        printf("\nBook ID : %d\n", b[i].id);
        printf("Title   : %s\n", b[i].title);
        printf("Author  : %s\n", b[i].author);
    }

    return 0;
}