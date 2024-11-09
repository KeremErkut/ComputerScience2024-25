#include <stdio.h>
int main(void){
  int i = 99;

//Print every number 100 to 50, which can divided by 3. 
  do{
    printf("%d,", i );
    i = i - 3;
  }while(i > 50);
}
