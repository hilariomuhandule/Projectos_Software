#include<stdio.h>

void main(){

    // declaracao das variaveiscar
 
    char nome[50], cargo[20], sexo[15], idade, salario;
    // int idade[2], salario[5];                                                                                                 
    int contador;

    // inicio da programa

    printf("============================\n");
    printf("  Cadastro de Funcionarios  \n");
    printf("============================\n");

    // Estrutura de repeticao FOR

    for ( contador = 1 ; contador <= 5 ; contador++)
    {
        printf( " Digite o nome do funcionario %d: \n" , contador);
        scanf("%s", &nome); 
       
        printf( " Digite a idade:\n");
        scanf("%d", &idade);

        printf( " Digite o sexo:\n");
        scanf("%s", &sexo);

        printf( " Digite o cargo:\n");
        scanf("%s", &cargo);

        printf( " Digite o salario:\n");
        scanf("%d", &salario);
    
    // apresentacao final dos dados 

        printf("Nome  do funcionario: %s\n", nome);
        printf("Idade do funcionario: %d\n " , idade);
        printf("Sexo  do funcionario: %s\n" , sexo);
        printf("Cargo do funcionario: %s\n" , cargo);
        printf("Salario do funcionario: %d \n" , salario);

    }




}