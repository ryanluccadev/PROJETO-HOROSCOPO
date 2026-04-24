// Avaliação P1: Projeto Horóscopo (2026-1)

// OBJETIVO: Desenvolver um programa em linguagem C que receba a data de nascimento de um usuário (dia e mês) e, com base nessa data, identifique o seu signo do zodíaco e exiba na tela uma representação visual (imagem ou página html) correspondente aesse signo, contendo uma imagem e uma breve descrição das características deste signo.

// Ryan Lucca Marques Pereira e Renan Cesar Michelon

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

#include "data_valida.c"
#include "descobrir_signo.c"
#include "mostrar_signo.c"

int main()
{
    int dia, mes, ano;
    char opcao;

    system("clear"); 

    do
    {
        printf("\n=== DESCOBRIDOR DE SIGNOS ===\n");
        printf("Digite o dia do seu nascimento: ");
        scanf("%d", &dia);
        printf("Digite o mes do seu nascimento (1 a 12): ");
        scanf("%d", &mes);
        printf("Digite o ano do seu nascimento: ");
        scanf("%d", &ano);

        if (data_valida(dia, mes, ano) == 0)
        {
            printf("\nData informada: %02d/%02d/%04d\n", dia, mes, ano);
            printf("\nData invalida! \n");
        }
        else
        {
            printf("\nData informada: %02d/%02d/%04d\n", dia, mes, ano);

            int signo = descobrir_signo(dia, mes);
            
            mostrar_signo(signo);
        }

        printf("\nDeseja descobrir outro signo? (S para sim / qualquer tecla para sair): ");
        scanf(" %c", &opcao);

    } 
        while (opcao == 'S' || opcao == 's');

    system("clear"); 
    
    getchar();
    return 0;
}