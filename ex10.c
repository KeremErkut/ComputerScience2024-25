#include <stdio.h>
int main(void){
  int k;
  int i;
  for(k=1;k<=10;k++){
    for(i=1;i<=10;i++){
      printf("%2d ",i*k);
    }
    printf("\n");
  }
}
