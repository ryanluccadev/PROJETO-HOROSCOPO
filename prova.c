// Avaliação P1: Projeto Horóscopo (2026-1)
// Objetivo: Desenvolver um programa em linguagem C que receba a data de nascimento de um usuário (dia e mês) e, com base nessa data, identifique o seu signo do zodíaco e exiba na tela uma representação visual (imagem ou página html) correspondente aesse signo, contendo uma imagem e uma breve descrição das características deste signo.
// Ryan Lucca Marques Pereira e Renan Cesar Michelon

#include <stdio.h>

// Funcao que verifica se a data é valida
int data_valida(int dia, int mes, int ano)
{
    int max_dias;

    if (mes == 2)
        max_dias = 28;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        max_dias = 30;
    else
        max_dias = 31;

    // Ano bissexto: fevereiro tem 29 dias
    if (mes == 2 && ano % 4 == 0)
        max_dias = 29;

    if (mes < 1 || mes > 12)  return 0;
    if (dia < 1 || dia > max_dias) return 0;

    return 1;
}

// Funcao que recebe o dia e mes e retorna o numero do signo
// Retorna um numero de 1 a 12, cada um representa um signo
int descobrir_signo(int dia, int mes)
{
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) return 1;  // Aries
    if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) return 2;  // Touro
    if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) return 3;  // Gemeos
    if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) return 4;  // Cancer
    if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) return 5;  // Leao
    if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) return 6;  // Virgem
    if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) return 7; // Libra
    if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) return 8; // Escorpiao
    if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) return 9; // Sagitario
    if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) return 10; // Capricornio
    if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) return 11; // Aquario
    if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) return 12; // Peixes
    return 0;
}
 
// Funcao que imprime o nome do signo
void mostrar_signo(int signo)
{
    if (signo == 1) printf("Signo: ARIES\n");
    else if (signo == 2) printf("Signo: TOURO\n");
    else if (signo == 3) printf("Signo: GEMEOS\n");
    else if (signo == 4) printf("Signo: CANCER\n");
    else if (signo == 5) printf("Signo: LEAO\n");
    else if (signo == 6) printf("Signo: VIRGEM\n");
    else if (signo == 7) printf("Signo: LIBRA\n");
    else if (signo == 8) printf("Signo: ESCORPIAO\n");
    else if (signo == 9) printf("Signo: SAGITARIO\n");
    else if (signo == 10) printf("Signo: CAPRICORNIO\n");
    else if (signo == 11) printf("Signo: AQUARIO\n");
    else if (signo == 12) printf("Signo: PEIXES\n");
    else printf("Data invalida! Verifique o dia e o mes.\n");
}
 
int main()
{
    int dia, mes, ano;
 
    printf("\n=== DESCOBRIDOR DE SIGNOS ===\n");
 
    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &dia);
 
    printf("Digite o mes do seu nascimento (1 a 12): ");
    scanf("%d", &mes);
 
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano);
 
    // Valida a data ANTES de descobrir o signo
    if (data_valida(dia, mes, ano) == 0)
    {
        printf("\nData informada: %02d/%02d/%04d\n", dia, mes, ano);
        printf("\nData invalida! \n");
        return 1;
    }
 
    printf("\nData informada: %02d/%02d/%04d\n", dia, mes, ano);
 
    int signo = descobrir_signo(dia, mes);
    mostrar_signo(signo);
 
    return 0;
}
