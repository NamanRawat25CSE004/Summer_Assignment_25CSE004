#include <stdio.h>

int main() {

    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found.");
        return 0;
    }

    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }

    fclose(fp);

    return 0;
}