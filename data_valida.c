#include <stdio.h>

// Função que verifica se a data é valida.

int data_valida(int dia, int mes, int ano)
{
    int max_dias;

    if (mes == 2)
        max_dias = 28;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        max_dias = 30;
    else
        max_dias = 31;

    // Função que que verifica e corrige anos bisextos.
    
    if (mes == 2 && ano % 4 == 0)
        max_dias = 29;

    if (mes < 1 || mes > 12)  return 0;
    if (dia < 1 || dia > max_dias) return 0;

    return 1;
}