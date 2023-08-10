/* 
Um numero inteiro e considerado um n´umero perfeito se seus fatores, incluindo 1 (mas nao o
proprio numero), somam o numero. Por exemplo, 6 e um n´umero perfeito porque 6 = 1 + 2 + 3.
Escreva uma fun¸cao isPerfect que determina se o numero do parametro e um numero perfeito. Use
esta funcao em um programa que determina e imprime todos os numeros perfeitos entre 1 e 1000.
Imprima os fatores de cada numero perfeito para confirmar que o numero e realmente perfeito.
*/

#include<stdio.h>

int isPerfect(int num){
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if(num % i == 0){
            sum += i;
        }
    }

    return sum;
}

void imprime(int num){
    for (int i = 1; i < num; i++)
    {
        if(num % i == 0){
            printf("%d + ", i);
        }
    }

    printf("= %d\n", num);
}

int main(){
    int sum;
    for (int i = 1; i < 1000; i++)
    {
        sum = isPerfect(i);

        if(sum == i){
            imprime(i);
        }
    }
    
}