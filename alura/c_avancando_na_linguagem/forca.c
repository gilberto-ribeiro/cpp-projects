#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variáveis globais
char palavra_secreta[20];
char chutes[26];
int tentativa = 0;

void abertura() {
    printf("*************************\n");
    printf("*     JOGO DA FORCA     *\n");
    printf("*************************\n\n");
}

void chuta() {
    char chute;
    printf("Insira seu chute: ");
    scanf(" %c", &chute);
    chutes[tentativa] = chute;
    tentativa++;
}

int ja_chutou(char letra) {
    int achou = 0;
    for(int j = 0; j < tentativa; j++) {
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
    sprintf(palavra_secreta, "MELANCIA");
}

int main() {

    int acertou = 0;
    int enforcou = 0;

    abertura();
    escolhe_palavra();

    do {
        desenha_forca();
        chuta();
        printf("\n");
    } while(!acertou && !enforcou);
}
