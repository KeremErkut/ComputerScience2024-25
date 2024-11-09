#include <stdio.h>

int up(int h)
{
    for (int i = 1; i <= h; i++) {
        
        for (int j = 1; j <= h - i; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int down(int h)
{
    for (int i = h - 1; i >= 1; i--) {
        
        for (int j = 1; j <= h - i; j++) {
            printf(" ");
        }
       
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int draw(int h)
{
    up(h);
    down(h);
}

int main(void)
{
    int h = 5;
    draw(h);
}
