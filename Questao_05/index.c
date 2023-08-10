/* 
    Defina uma funcao recursiva que, dado os valores inteiros de x1 e x2, determine y = x1x2.
*/

#include<stdio.h>


int funcaoRecursiva(int num1, int num2){
    if(num2 == 0){
        return num2;
    } else {
        return num1 + funcaoRecursiva(num1, num2 - 1);
    }
}

int main(){
    int res, x, y;
    printf("Infome dois numeros:\n");
    scanf("%d %d", &x, &y);
    res = funcaoRecursiva(x,y);
    printf("A operacao de %d e %d e igual a %d", x, y, res);
}
