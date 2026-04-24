//Função que acessa e exibe a imgagem de seus respectivo signo.

#include <stdio.h>
#include <stdlib.h>

void mostrar_signo(int signo)
{
    if (signo == 1) printf("\nSigno: ÁRIES\n"), system("xdg-open ../imagens/aries.png");
    else if (signo == 2) printf("\nSigno: TOURO\n"), system("xdg-open ../imagens/touro.png");
    else if (signo == 3) printf("\nSigno: GEMEOS\n"), system("xdg-open ../imagens/gemeos.png");
    else if (signo == 4) printf("\nSigno: CANCER\n"), system("xdg-open ../imagens/cancer.png");
    else if (signo == 5) printf("\nSigno: LEAO\n"), system("xdg-open ../imagens/leao.png");
    else if (signo == 6) printf("\nSigno: VIRGEM\n"), system("xdg-open ../imagens/virgem.png");
    else if (signo == 7) printf("\nSigno: LIBRA\n"), system("xdg-open ../imagens/libra.png");
    else if (signo == 8) printf("\nSigno: ESCORPIAO\n"), system("xdg-open ../imagens/escorpiao.png");
    else if (signo == 9) printf("\nSigno: SAGITARIO\n"), system("xdg-open ../imagens/sagitario.png");
    else if (signo == 10) printf("\nSigno: CAPRICORNIO\n"), system("xdg-open ../imagens/capricornio.png");
    else if (signo == 11) printf("\nSigno: AQUARIO\n"), system("xdg-open ../imagens/aquario.png");
    else if (signo == 12) printf("\nSigno: PEIXES\n"), system("xdg-open ../imagens/peixes.png");
    else printf("Data invalida! Verifique o dia e o mes.\n");
}