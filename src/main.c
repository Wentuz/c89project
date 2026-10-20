#include <stdio.h>
#include "detab.h"

int main(void)
{
    int c;

    printf("test build\n");
    printf("hello, world\n");
    printf("%d + %d = %d\n", 1, 2, add(1, 2));
    printf("%d - %d = %d\n", 10, 5, substract(10, 5));


    printf("\nEnter a character: ");
    c = getchar();

    if (c != EOF) {
        printf("your variable: %c\n", c);
    }

    return 0;
}