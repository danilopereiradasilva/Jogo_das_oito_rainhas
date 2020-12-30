//Tempo em anos para processar 1000 rainhas em um tabuleiro 1000X1000 em backtracking
//Calculo baseado no supercomputador Hawk - O mais rápido em 2020

#include <stdio.h>

int main() {
    long double divisao=1;
    long double multiplicacao1 = 1;
    long double multiplicacao2 = 1;
    long double resultado;
    int numero;
    long double tempo;
    
    
    for (numero = 999000;numero < 999500;numero++){
        multiplicacao1=multiplicacao1 * (numero + 1);
    }
    
    
    for (numero = 999501;numero < 1000000;numero++){
        multiplicacao2=multiplicacao2 * (numero + 1);
    }
    
    for (numero = 1;numero < 1000;numero++){
        divisao = divisao * (numero+1);
    }
    
    
    resultado = multiplicacao1*(multiplicacao2/divisao);
    printf("\n%.0Lf", resultado);
    
    printf("\n");
    tempo = resultado / (60*60*24*365.25*1000*1000*1000*1000*1000*26);
    
    printf("\n O tempo em anos é de ");
    printf("\n%.0Lf", tempo);
    
    

    return 0;
}
