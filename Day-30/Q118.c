#include <stdio.h>

int main() {

    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened.");
        return 0;
    }

    printf("Enter some text: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}