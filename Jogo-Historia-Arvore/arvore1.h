#ifndef QUARTO_H
#define QUARTO_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct Arvore{ //ESTRUTURA DA ÁRVORE 
    int valor;
    char* texto;
    struct Arvore *dir;
    struct Arvore *esq;
}Arvore;


Arvore* criaArvore(int valor, char* texto){ //CRIAÇÃO DA ÁRVORE
    Arvore* novo = (Arvore*) malloc(sizeof(Arvore));
    
    novo->texto = (char*) malloc(strlen(texto) + 1); // +1 para o caractere nulo
    novo->valor = valor; 
    novo->esq = NULL;
    novo->dir = NULL;
    
    strcpy(novo->texto, texto);
    
    return novo; 
}

Arvore* inserir (Arvore* raiz, int valor, char* texto){ //INSERÇÃO NA ÁRVORE 
    if (raiz == NULL){
    return criaArvore(valor, texto);
    }
    if (valor < raiz->valor){
        raiz->esq = inserir(raiz->esq, valor, texto);  
    } else
    if (valor > raiz->valor){
        raiz->dir = inserir(raiz->dir, valor, texto);
    }
    return raiz;
}


void percorre(Arvore *raiz){ //VERSÃO INACABADA
    if (raiz != NULL)
    {
        printf("%d\n%s\n", raiz->valor, raiz->texto);
        
            int escolha;
          
            printf("Pressione 1 para continuar. \n");
            scanf("%d", &escolha);

            switch (escolha)
            {
            case 1:
                percorre(raiz->esq);
                break;
            case 2:
                percorre(raiz->dir);
                break;
            default:
                printf("Escolha inválida\n");
                break;
            }
        }
    }



#endif // QUARTO_H