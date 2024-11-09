#include <stdio.h>
int n;
int fac(int n){
  if(n == 0){
    return 1;
  } 
  else {
    return n*fac(n-1);
  }
}

int main(void){
  int n;
  printf("Enter a number :");
  scanf("%d",&n);
  if (n < 0){
    printf("Negative number factorials can't be calculated.");
  }else{
    printf("The result is %d",fac(n));
  }
}
