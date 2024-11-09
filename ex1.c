#include <stdio.h>
int main(void){
  
  int guess;  
  do {
    printf("Guess a number 1 to 5: \n  ");
    scanf("%d", &guess);
  }
  while (guess > 5 || guess < 1); 

  if (guess ==3){
    printf("You guessed right. \n ");
  } else{
    printf("You guessed wrong. \n ");
  }    
}
