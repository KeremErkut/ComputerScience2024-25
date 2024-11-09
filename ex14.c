#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;  
    } else if (n == 1) {
        return 1;  
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
    }
}

int show_num(int n) {
    printf("Fibonacci numbers for %d: ", n);
    for (int i = 0; i < n; i++) {  
        printf("%2d", fibonacci(i));       
    }
    printf("\n");
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The result is: %d\n", fibonacci(n));
    show_num(n);
}

