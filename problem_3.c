
#include <stdio.h>

int main() {
    int g, i;

    printf("Enter a number: ");
    scanf("%d", &g);

    for (i = 1; i <= 200; i++) {
        printf("%d x %d = %d\n", g, i, g * i);
    }

    return 0;
}
