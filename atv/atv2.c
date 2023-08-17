#include<stdio.h>

main(){

    //Escreva um programa que receba um número qualquer e mostre o seu dobro.
    int numero, dobro;

    printf("digite um numero qualquer");
    scanf("%d", &numero);

    //dobro = numero + numero;
    dobro = numero * 2;

    printf("\nO dobro do valor digitado é: %d", dobro);

}