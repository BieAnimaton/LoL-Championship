#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    int x, idade,
    vitoria=0, maxVitoria=0, derrota=0, maxDerrota=0,
    ferro=0, bronze=0, prata=0, ouro=0, platina=0, diamante=0, mestre=0, desafiante=0,
    maiorOu18=0, menorOu16=0;
    char nome[40], nickname[40], liga[40],
    menorLigaChar[40], maiorLigaChar[40],
    maxVitoriaJogador[40], maxDerrotaJogador[40];

    setlocale(LC_ALL, "portuguese");

    puts("\t==== CAMPEONATO DE LOL ====");

    for (x = 1; x <= 6; x++) {
        printf("\n\t---- Jogador %d ----", x);
        printf("\nDigite o Nome Completo do jogador: ");
        fgets(nome, 40, stdin);

        printf("Digite o nickname do jogador: ");
        scanf("%s%*c", nickname);

        printf("Digite a idade do jogador: ");
        scanf("%d%*c", &idade);

        printf("Digite a liga do jogador: ");
        scanf("%s%*c", liga);

        printf("Digite o total de vitórias: ");
        scanf("%d%*c", &vitoria);

        printf("Digite o total de derrotas: ");
        scanf("%d%*c", &derrota);

        if (strcmp(liga, "Ferro") == 0) {
            ferro++;
        } else if (strcmp(liga, "Bronze") == 0) {
            bronze++;
        } else if (strcmp(liga, "Prata") == 0) {
            prata++;
        } else if (strcmp(liga, "Ouro") == 0) {
            ouro++;
        } else if (strcmp(liga, "Platina") == 0) {
            platina++;
        } else if (strcmp(liga, "Diamante") == 0) {
            diamante++;
        } else if (strcmp(liga, "Mestre") == 0) {
            mestre++;
        } else if (strcmp(liga, "Desafiante") == 0) {
            desafiante++;
        }

        if (idade >= 18) {
            maiorOu18++;
        } else if (idade <= 17) {
            menorOu16++;
        }

        if (vitoria > maxVitoria) {
            maxVitoria = vitoria;
            strcpy(maxVitoriaJogador, nome);
        }
        if (derrota > maxDerrota) {
            maxDerrota = derrota;
            strcpy(maxDerrotaJogador, nome);
        }
    }

    puts("\t==== RESULTADO ====");

    printf("\nJogadores na liga Ferro: %d", ferro);
    printf("\nJogadores na liga Bronze: %d", bronze);
    printf("\nJogadores na liga Prata: %d", prata);
    printf("\nJogadores na liga Ouro: %d", ouro);
    printf("\nJogadores na liga Platina: %d", platina);
    printf("\nJogadores na liga Diamante: %d", diamante);
    printf("\nJogadores na liga Mestre: %d", mestre);
    printf("\nJogadores na liga Desafiante: %d\n", desafiante);

    printf("\nJogador com 18 anos ou mais: %d", maiorOu18);
    printf("\nJogador com 17 anos ou menos: %d\n", menorOu16);

    printf("\nMaior vitória: %d pelo jogador %s", maxVitoria, maxVitoriaJogador);
    printf("\nMaior derrota: %d pelo jogador %s", maxDerrota, maxDerrotaJogador);

    return 0;
}
