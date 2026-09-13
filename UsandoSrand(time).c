#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao, numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1 - Iniciar jogo\n");
    printf("2 - Ver regras\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;
            printf("Digite um numero entre 0 e 9: \n");
            scanf("%d", &palpite);
            if (numeroSecreto == palpite)
            {
                printf("Voce acertou o numero secreto!\n");
                printf("Parabens! Voce acertou o numero secreto!\n", numeroSecreto);
            } else {
                printf("Voce errou! Tente novamente.\n");
                printf("Que pena! O numero secreto era %d.\n", numeroSecreto);
            }
        break;
        case 2:
            printf("Regras do jogo:\n");
            printf("1. O objetivo do jogo e adivinhar o numero secreto gerado aleatoriamente entre 0 e 9.\n");
            printf("2. Voce tem apenas uma chance para acertar o numero secreto.\n");
            printf("3. Se voce acertar, voce ganha! Se errar, voce perde.\n");
        break;
        case 3:
            printf("Saindo do jogo...Obrigado por jogar!\n");
        break;
        default:
            printf("Opcao invalida! Por favor, escolha uma opcao valida.\n");
        }

        return 0;
}
