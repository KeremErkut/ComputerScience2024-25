#include <stdio.h>

int number;
int take_number(){  //this method for take the value from user.
    printf("Chose the fruit\n");
    printf("1-Apple\n");
    printf("2-Melon\n");
    printf("3-Strawberry\n");
    printf("4-Cherry\n");
    scanf("%i",&number);
    
}
void operation(int number){  //this method for find the fruit which user want it.
    switch (number){
        case 1:
        printf("Apple\n");
        break;
        case 2:
        printf("Melon\n");
        break;
        case 3:
        printf("Strawberry\n");
        break;
        case 4:
        printf("Cherry\n");
        break;
        default:
        printf("ERROR :Invalid value.\n");
        


    }
}

int main(void){  //we called two methods in main method
    take_number();
    operation(number);
}
