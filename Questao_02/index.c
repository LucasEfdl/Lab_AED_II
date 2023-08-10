#include<stdio.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
} Data;

Data ultimaData = {23,10,2023};

int diasDeAula(Data primeiraData){
    int totalDeAulas = 0;
    
    if(primeiraData.mes > ultimaData.mes){
        printf("\nO semestre acabou!");
        return 0;
    }

    while (1)
    {
        
    }
    
    
}

int main(){
    Data dataDeHoje;
    int totalDeAulas = 0;
    printf("Infome a data de hoje (00/00/0000:\n");
    scanf("%d %d %d", &dataDeHoje.dia, &dataDeHoje.mes, &dataDeHoje.ano);

    totalDeAulas = diasDeAula(dataDeHoje);
    
    printf("%d", dataDeHoje.mes);
}