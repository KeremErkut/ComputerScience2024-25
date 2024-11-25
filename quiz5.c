#include <stdio.h>
#include<stdlib.h>

int twoCount(int);

int main(void){
    int range;
    printf("Enter the range from 0.");
    scanf("%i", &range);
    twoCount(range);
    
}

int twoCount(int range ){
    int i;
    
    do{
        range -= 2;
        printf("%i\n",range);
        

    }while(range >= 2);
    return range;
}