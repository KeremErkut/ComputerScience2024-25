#include <stdio.h>
#include <stdlib.h>


void takeValue(int arry[]);
void calculate(int arry[]);

int main(void) {
    int arry[5];  
    takeValue(arry);  
    calculate(arry);  
    return 0;
}

void takeValue(int arry[]) {
    for (int i = 0; i < 5; i++) {  
        printf("Enter the %i. number: ", i+1);
        if (scanf("%i", &arry[i]) != 1) { 
            printf("Invalid data type. Program failed.\n");
            exit(1);  
        }
    }
}

void calculate(int arry[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arry[i];
    }
    float average = (float)sum / 5; 
    printf("The average is: %.2f\n", average); 
}
