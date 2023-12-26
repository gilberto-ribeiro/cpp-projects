#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void abertura() {
    printf("*************************\n");
    printf("*     JOGO DA FORCA     *\n");
    printf("*************************\n\n");
}

void chuta(char chutes[26], int* tentativa) {
    char chute;
    printf("Insira seu chute: ");
    scanf(" %c", &chute);
    chutes[(*tentativa)] = chute;
    (*tentativa)++;
}

int ja_chutou(char letra, char chutes[26], int tentativa) {
    int achou = 0;
    for(int j = 0; j < tentativa; j++) {
        if(chutes[j] == letra) {
            achou = 1;
            break;
        }
    }
    return achou;
}

// Nos parâmetros desta função usei o conceito de que array é um ponteiro (char* palavra_secreta) ou o modo normal (char chutes[26]).
void desenha_forca(char* palavra_secreta, char chutes[26], int tentativa) {
    for(int i = 0; i < strlen(palavra_secreta); i++) {
        int achou = ja_chutou(palavra_secreta[i], chutes, tentativa);
        if(achou) {
            printf("%c ", palavra_secreta[i]);
        }
        else {
            printf("_ ");
        }
    }
    printf("\n\n");
}

void escolhe_palavra(char palavra_secreta[20]) {
    sprintf(palavra_secreta, "MELANCIA");
}

int main() {
    char palavra_secreta[20];
    int acertou = 0;
    int enforcou = 0;
    char chutes[26];
    int tentativa = 0;

    abertura();
    escolhe_palavra(palavra_secreta);

    do {
        desenha_forca(palavra_secreta, chutes, tentativa);
        chuta(chutes, &tentativa);
        printf("\n");
    } while(!acertou && !enforcou);
}
