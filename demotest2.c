#include <stdio.h>
#include <unistd.h>

int main(void) {
    for (int i = 0; i < 20; i++) {
        printf("\033[H\033[J"); // Terminali temizle
        for (int j = 0; j < i; j++) {
            printf(" "); // Boşluk ekle
        }
        printf("\033[1;31m Kerem\033[0m\n");
        usleep(100000); // 100ms bekle
    }

    return 0;
}