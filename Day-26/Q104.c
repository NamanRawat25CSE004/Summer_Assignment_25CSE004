#include <stdio.h>

int main() {

    int answer;
    int score = 0;

    printf("Simple Quiz\n");

    printf("\nQ1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    scanf("%d", &answer);

    if (answer == 1) {
        score++;
    }

    printf("\nQ2. 5 + 7 = ?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 15\n");
    scanf("%d", &answer);

    if (answer == 3) {
        score++;
    }

    printf("\nQ3. C language was developed before Java?\n");
    printf("1. True\n2. False\n");
    scanf("%d", &answer);

    if (answer == 1) {
        score++;
    }

    printf("\nYour Score = %d/3\n", score);

    return 0;
}