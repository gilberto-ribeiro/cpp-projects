#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "forca.h"

// Variáveis globais
char palavra_secreta[20];
char chutes[26];
int chutes_dados = 0;

void abertura() {
    printf("*************************\n");
    printf("*     JOGO DA FORCA     *\n");
    printf("*************************\n\n");
}

void chuta() {
    char chute;
    printf("Insira seu chute: ");
    scanf(" %c", &chute);
    chutes[chutes_dados] = chute;
    chutes_dados++;
}

int ja_chutou(char letra) {
    int achou = 0;
    for(int j = 0; j < chutes_dados; j++) {
        if(chutes[j] == letra) {
            achou = 1;
            break;
        }
    }
    return achou;
}

void desenha_forca() {
    for(int i = 0; i < strlen(palavra_secreta); i++) {
        int achou = ja_chutou(palavra_secreta[i]);
        if(achou) {
            printf("%c ", palavra_secreta[i]);
        }
        else {
            printf("_ ");
        }
    }
    printf("\n\n");
}

void escolhe_palavra() {
    FILE* f;
    f = fopen("palavras.txt", "r");
    if(f == 0) {
        printf("Desculpe, houve um problema ao ler o banco de dados.");
        exit(1);
    }
    int n_palavras;
    fscanf(f, "%d", &n_palavras);
    srand(time(0));
    int n_aleatorio = rand() % n_palavras;
    for(int i = 0; i < n_aleatorio; i++) {
        fscanf(f, "%s", palavra_secreta);
    }
    fclose(f);
}

int acertou() {
    for(int i = 0; i < strlen(palavra_secreta); i++) {
        if(!ja_chutou(palavra_secreta[i])) {
            return 0;
        }
    }
    return 1;
}

int enforcou() {
    int erros = 0;
    for(int i = 0; i < chutes_dados; i++) {
        int existe = 0;
        for(int j = 0; j < strlen(palavra_secreta); j++) {
            if(chutes[i] == palavra_secreta[j]) {
                existe = 1;
                break;
            }
        }
        // Uma linha de código apenas dentro de um if:
        if(!existe) erros++;
    }
    return erros >= 5;
}

int main() {

    abertura();
    escolhe_palavra();

    do {
        desenha_forca();
        chuta();
        printf("\n");
    } while(!acertou() && !enforcou());
}
