#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvore1.h"
#define TAMVET 15
#define TAMSTRING 1000

int main(){


char quarto[TAMVET][TAMSTRING];
char patio[TAMVET][TAMSTRING];
strcpy(quarto[0], "Fase 01: Quarto\nDescrição: É o último dia de aula do semestre, \no João está dormindo tranquilamente em seu quarto até que seu despertador começa a tocar.");
//Caso 1.1: Final ruim.

strcpy(quarto[1], "João: ”ZZZZZzzzzzzZZZZZZZ”\n");
strcpy(quarto[2], "Despertador: “Triiiiiimmmmmmmm!”\n"); 
strcpy(quarto[3], "Pressione 1 para desligar o alarme. \nPressione 2 para levantar da cama.\n");
strcpy(quarto[4], "Pensamentos: “Que horas são? Melhor, que dia é hoje?” \nPensamentos: “É mesmo, hoje é o último dia, tenho uma prova agora de manhã e um seminário a tarde.”\n");
strcpy(quarto[5], "Pensamentos: “Melhor eu me apressar e me arrumar logo para ir.”\n");
strcpy(quarto[6], "VOCÊ PERDEU!\nReprovado por falta.");
strcpy(patio[0], "...");
strcpy(patio[1], "Pensamentos: “Tenho um tempo até a minha prova, talvez eu pudesse estu-”");

    Arvore* raiz = NULL;
    raiz = inserir(raiz, 50, quarto[0]); 
    inserir(raiz, 49, quarto[1]);
    inserir(raiz, 48, quarto[2]);
    inserir(raiz, 47, quarto[3]);
    inserir(raiz, 46, quarto[4]);   
    inserir(raiz, 51, quarto[2]);
    inserir(raiz, 52, quarto[1]);
    inserir(raiz, 53, quarto[3]);
    inserir(raiz, 54, quarto[6]);
    percorre(raiz);
    //imprime(raiz);

}