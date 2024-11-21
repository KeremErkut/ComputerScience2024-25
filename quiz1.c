#include<stdio.h>
int main(){
    char name1[50];
    char name2[50];
    printf("Enter your first name.");
    scanf("%s", name1);
    printf("Enter your second name.");
    scanf("%s", name2);
    
    for(int i = 0; name1[i] != '\0'; i++){
        printf("%c\n", name1[i]);
    }

    for(int i = 0; name2[i] != '\0'; i++){
        printf("%c ", name2[i]);
    }
    
}
