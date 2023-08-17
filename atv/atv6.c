#include<stdio.h>

main(){

    //Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.

    float custo, frete, despesas, valorVenda, valorBruto, lucro;

    printf("\nDigite o valor de custo da mercadoria");
    scanf("%f", &custo);

    printf("\nDigite o valor do frete da mercadoria");
    scanf("%f", &frete);

    printf("\nDigite o valor das despesas");
    scanf("%f", &despesas);

    printf("\nDigite o valor de venda");
    scanf("%f", &valorVenda);

    valorBruto = custo + frete + despesas;

    lucro = (valorBruto / valorVenda)*100;

    printf("a porcentagem de lucro e: %.2f%%", lucro);



}