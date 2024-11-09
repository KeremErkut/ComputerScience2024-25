#include <stdio.h>

//Column 1 Function
int cl1(int a) {
    return a * 5;
}

////Column 2 Function
int cl2(int b) {
    return 100 - ((b - 1) * 10 + 1);
}

//Print the functions 1 to 10
int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("%d %d %d\n", cl1(i), cl2(i), i);
    }
  
}

