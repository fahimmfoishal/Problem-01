
#include <stdio.h>

int main() {
    int n, sum = 0; 

    printf("Enter a number : "); // press 0 if you want to stop the loop
    scanf("%d", &n);           

    while (n != 0) { 
        sum = sum + n; 

        printf("Enter a number : ");
        scanf("%d", &n);
    }

    printf("Total sum = %d\n", sum);

    return 0;
}
