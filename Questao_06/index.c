/* 
    Defina uma funcao para inverter um numero. Exemplo:
        f(1234) = 4321
    (a) No formato n˜ao recursivo;
    (b) No formato recursivo.
*/

#include<stdio.h>

int inverteNumero(int numero){
    int inverso = 0;
    while (numero > 0)
    {
        int digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero = numero / 10;
    }
    return inverso;
}

int inverteNumeroRecursivo(int digi){

}

int main(){
    int num, numInvertido;

    printf("Insira um numero:\n");
    scanf("%d", &num);

    numInvertido = inverteNumero(num);

    printf("O inverso de %d e %d", num, numInvertido);
}