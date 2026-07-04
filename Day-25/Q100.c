#include <stdio.h>
#include <string.h>

int main() {

    char word[5][30];
    char temp[30];

    printf("Enter 5 words:\n");

    for (int i = 0; i < 5; i++) {
        gets(word[i]);
    }

    for (int i = 0; i < 5 - 1; i++) {

        for (int j = i + 1; j < 5; j++) {

            if (strlen(word[i]) > strlen(word[j])) {

                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);

            }

        }

    }

    printf("\nWords sorted by length:\n");

    for (int i = 0; i < 5; i++) {
        puts(word[i]);
    }

    return 0;
}