/* 
    7. Implemente a seguinte funçãao matemática f(m, n) definida por partes:
        (a) f(m, n) = m + 1, se n = 1.
        (b) f(m, n) = n + 1, se m = 1.
        (c) f(m, n) = f(m, n − 1) + f(m − 1, n), se m > 1, n > 1.
*/

#include<stdio.h>

int f(int m, int n){
    if (n == 1)
    {
        return m + 1;
    } else if(m == 1){
        return n + 1;
    } else if(m > 1 && n > 1){
        return f(m, n -1) + f(m-1, n);
    }
    
}

int main(){
    int num1, num2, res;

    printf("Insira 2 numeros:\n");
    scanf("%d %d", &num1, &num2);

    res = f(num1, num2);

    printf("O retorno da funcao f e: %d", res);
}