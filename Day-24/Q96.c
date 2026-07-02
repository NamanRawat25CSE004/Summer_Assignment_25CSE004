#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int visited[256] = {0};

    printf("Enter a string: ");
    gets(str);

    printf("String after removing duplicates: ");

    for (int i = 0; str[i] != '\0'; i++) {

        if (visited[(int)str[i]] == 0) {
            printf("%c", str[i]);
            visited[(int)str[i]] = 1;
        }

    }

    return 0;
}