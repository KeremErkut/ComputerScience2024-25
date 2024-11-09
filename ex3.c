#include <stdio.h>
#include <string.h>
int main(void)
{
  char anml[10];
  printf("Do you have a cat or a dog? \n");
  scanf("%s", anml);

  if (strcmp(anml, "cat") == 0) {
    printf("meow \n");
  } else if (strcmp(anml, "dog") == 0){
    printf("woof \n");
  }else {
    printf("I don't know what sound that animal makes");
  }
  return 0;
}
