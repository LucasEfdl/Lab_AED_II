/* 
Um triângulo retângulo pode ter lados inteiros. O conjunto do comprimento de três valores
inteiros para os lados de um triângulo retaângulo á chamado de triplo pitagórico. Esses três lados
devem satisfazer a relaçâo de que a soma dos quadrados de dois dos lados é igual ao quadrado da
hipotenusa. Encontre todos os triplos pitagóricos para cateto1, cateto2 e a hipotenusa, todos com
até o valor de, indicado como parˆametro.
*/

#include <stdio.h>

void TriplosPitagoricos(int limite) {
    printf("Triplos pitagoricos ate %d:\n", limite);

    for (int cateto1 = 1; cateto1 <= limite; cateto1++) {

        for (int cateto2 = cateto1; cateto2 <= limite; cateto2++) {

            for (int hipotenusa = cateto2; hipotenusa <= limite; hipotenusa++) {

                if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) {
                    printf("(%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }
}

int main() {
    int limite;
    printf("Digite o valor limite para os lados dos triangulos pitagoricos: ");
    scanf("%d", &limite);

    TriplosPitagoricos(limite);

    return 0;
}
