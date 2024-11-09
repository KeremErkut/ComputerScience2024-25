#include <stdio.h>
int main(){
  
  int num;
  int count = 0;
  int sum = 0; 
  float avg; //avg for average.

  printf("Type -1 for quit. \n");
  int check_int;
  do{
    while(1){
      printf("Enter a number: ");
      check_int = scanf("%d", &num);
      if(check_int !=1){
        printf("Invalid value type. Please enter integer.\n");
      }while (getchar() != '\n');

      if(num == -1){
        break;
      }
      
      if(check_int == 1){
        count++;
        sum += num;
      }
    }
  }while (check_int != 1);

  if(count>0){
    avg = (float)sum/count;
    printf("Sum is %d\n", sum);
    printf("Average is %.1f\n",avg);
    printf ("%d number counted", count);
  }else{
    printf("0 numbers entered.");
  }    
}
