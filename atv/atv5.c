#include<stdio.h>

main(){

    //Dado um  valor em reais e a cotação do dólar, converta esse valor para dólares.

    float reais, cotacaoDolar, valorConvertido;

    printf("Insira o valor em reais: ");
    scanf("%f", &reais);

    printf("Insira a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);

    valorConvertido = reais / cotacaoDolar;

    printf("O valor em dolar é: %f", valorConvertido);
    

}