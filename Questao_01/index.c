/* Escreva um programa para converter e imprimir os caracteres para os valores ASCII de 0 a 127.
O programa deve imprimir 10 caracteres por linha. */

#include <stdio.h>

int main() {
    int charCount = 0;

    for (int i = 0; i <= 127; ++i) {
        printf("%3d: '%c'   ", i, i);
        charCount++;
        if (charCount == 10) {
            printf("\n");
            charCount = 0;
        }
    }

    return 0;
}
