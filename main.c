#include <stdio.h>

int main(void) {
    char character;

    if (scanf("%c", &character) != 1) {
        return 1;
    }

    printf("%c\n", character);

    return 0;
}
