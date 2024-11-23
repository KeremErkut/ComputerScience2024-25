#include <stdio.h>
int year;
int takeYear(){
   
    printf("Enter a year for check leap or not : \n");
    if(scanf("%i",&year) != 1){
        printf("ERROR : Invalid input.");
        return 1;
    }else{
        return year;
    }
     
}

void isLeap(int year){
    if((year % 4) == 0){
        printf("This is leap year.");
    }else{
        printf("This is not a leap year.");
    }

    
}


int main(void){
    takeYear();
    isLeap(year);
}