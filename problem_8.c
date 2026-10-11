
#include <stdio.h>

int main() {
    int n, i = 1; 

    printf(" Give me a number: ");
    scanf("%d", &n);
    while (i <= 100) {  
        printf("%d x %d = %d\n", n, i, n * i);
        i++;    
    }

    return 0;
}
