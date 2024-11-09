#include <stdio.h>
int main(void){
  int i = 0;
  int age;
  
  printf("Enter your age:\n");
  scanf("%d", &age);
  
  do
    {
      printf("Happy Birthday \n");
      i = i+1 ;
    }
    while (i < age);
}
