#include <stdio.h>

int main(void) {
    int n;
    int check_int;

    do {
        printf("Enter a number: ");
        check_int = scanf("%d", &n);  
        if (check_int != 1) {
            printf("Invalid value type. Please enter an integer.\n");
            while (getchar() != '\n'); 
        }
    } while (check_int != 1); 

    
    if (n == 0) {
        printf("Result is 1.\n");
    } else {
        int i, fact = 1;
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("Result is %d\n", fact);
    }
}

