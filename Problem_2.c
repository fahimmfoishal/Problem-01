#include <stdio.h>

int main() {  
    int i, sum = 0;

    printf("The first 50 numbers are : \n");  

    for (i = 1; i <= 50; i++)  


    {
        sum = sum + i;  
        printf("%d ", i); 
    }

    printf("The Sum is : %d\n", sum); 
    return 0;

}