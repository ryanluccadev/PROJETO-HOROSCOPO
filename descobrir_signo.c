//Função que ultiliza a data recebida pelo usuário para saber qual signo exibir.

#include <stdio.h>

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