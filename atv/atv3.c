#include<stdio.h>

main(){

    //Dadas as medidas de uma sala, informe sua área.

    float comprimento, largura, area;

    printf("Digite o comprimento da sala");
    scanf("%f", &largura);

    area = largura * comprimento;

    printf("A area da sala é: %.2fm2", area);

}