#include <stdio.h>

int main(void) {
    int array[10];
    int i;
    int sum = 0;
    float average;

    for (i = 0; i < 10; i++) {
        int check_int;

        do {
            printf("Enter the number: ");
            check_int = scanf("%d", &array[i]);

            if (check_int != 1) {
                printf("Invalid value type. Please enter an integer.\n");
                while (getchar() != '\n');  
            }
        } while (check_int != 1);  

        sum += array[i];
    }

    average = (float) sum / 10;

    printf("The numbers you entered:\n");
    for (i = 0; i < 10; i++) {
        printf("%d, ", array[i]);
    }
    printf("\n");

    printf("The sum is %d\n", sum);
    printf("The average of the numbers is %.1f\n", average);    
}
