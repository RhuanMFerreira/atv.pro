#include<stdio.h>

main(){

    //passo1 - alocar espaco de memoria para armazenar dados de entrada, ou seja, definir variaveis

    char nome[50];
    int idade;
    char matricula[15];
    char endereco[100];
    char curso[50];
    int periodo;
    char disciplinas[50];
    float mensalidade;

    //passo1 - inserir os dados nos enderecos de memoria, ou seja, nas variaveis
    
    printf("-----------------------------------");
    printf("Dados Cadastrados");
    printf("-----------------------------------");

    printf("Nome:");
    fgets(nome, 50, stdin);
    fflush(stdin);

    printf("-----------------------------------");
    
    printf("\nIdade:");
    scanf("%d" &idade);
    fflush(stdin);

    printf("-----------------------------------");

    printf("\nMatricula:");
    fgets(matricula, 15, stdin);
    fflush(stdin);

    printf("-----------------------------------");

    printf("\nEndereco:");
    fgets(endereco, 100, stdin);
    fflush(stdin);

    printf("-----------------------------------");

    printf("\nCurso:");
    fgets(curso, 50, stdin);
    fflush(stdin);

    printf("-----------------------------------");

    printf("\nPeriodo:");
    fgets("%d", &periodo);
    fflush(stdin);

    printf("-----------------------------------");

    printf("\nDisciplinas:");
    fgets(disciplinas, 50, stdin);
    fflush(stdin);

    printf("-----------------------------------");

    printf("\nMensalidade:");
    scanf("%f", &mensalidade);
    fflush(stdin);

    printf("-----------------------------------");

    //passo3 - apresentação das informaç~ões armazenadas.

    printf("-----------------------------------");
    printf("Dados Cadastrados");
    printf("-----------------------------------");

    printf("\nNome: %s", nome);
    printf("\nIdade: %i", idade);
    printf("\nMatricula: %s", matricula);
    printf("\nEndereco: %s", endereco);
    printf("\n:Mensalidade: %.2f", mensalidade);
    printf("\nCurso: %s", curso);
    printf("\nPeriodo: %i", periodo);
    printf("\nDisciplinas: %s", disciplinas);

}