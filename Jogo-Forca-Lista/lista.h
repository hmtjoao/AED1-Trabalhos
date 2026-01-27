#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
    char letra;
    struct No* proximo;
}No;

void criaNo(No** base, char letra){
    No* novo = (No*)malloc(sizeof(No));
    novo->letra=letra;
    novo->proximo = NULL;

    if (*base == NULL){
        *base = novo;
        return;
    }

    No* atual = *base;
    while(atual->proximo != NULL){
        atual = atual->proximo;
    }
    atual->proximo = novo;
}

void inicializaLista(No** base, int tamanho){
    for (int i = 0; i < tamanho; i++){
        criaNo(base, '_');
    }
}


void imprimePalavra(No *base){
    while (base != NULL){
        printf("%c ", base->letra);
        base = base->proximo;
    }
    printf("\n");
}

void imprimeLetrasErradas(No* lista){
    printf("Letras erradas: ");
    No* atual = lista;
    while (atual != NULL){
        printf("%c ", atual->letra);
        atual = atual->proximo;
    }
    printf("\n");
}

int caractereNaoAceito(No *base, char letra){
    while (base != NULL){
        if (base->letra == letra){
            return 1; // letra já digitada
        }
        base = base->proximo;
    }
    return 0; // letra não digitada ainda
}

int todasLetrasAdivinhadas(No* listaPalavra){
    No* atual = listaPalavra;
    while (atual != NULL){
        if (atual->letra == '_'){
            return 0; // há letras não adivinhadas
        }
        atual = atual->proximo;
    }
    return 1; // todas as letras foram adivinhadas
}

void limpaLista(No** base){
    No* atual = *base;
    No* proximo;

    while (atual != NULL){
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    *base = NULL;
}


#endif // LISTA_H;