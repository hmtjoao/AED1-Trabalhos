#include "lista.h"
#define MAXPALPITES 6
#include <time.h>
#include <ctype.h>

int main(){

    FILE* arquivo = fopen("palavras.txt", "r");
    if (arquivo == NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    char palavras[1000][20];
    int numPalavras  = 0;
    while(fgets(palavras[numPalavras], 20, arquivo) != NULL){
        palavras[numPalavras][strcspn(palavras[numPalavras], "\n")] = 0;
        numPalavras++;
    }
    fclose(arquivo);

    srand(time(NULL));

    char palavra[100];
    strcpy(palavra, palavras[rand() % numPalavras]);

    int tamanho = strlen(palavra);
    if (palavra[tamanho-1] == '\n'){
        palavra[tamanho - 1] = '\0';
        tamanho--;
    }

    No* listaPalavra = NULL;
    inicializaLista(&listaPalavra, tamanho);

    int palpitesErrados = 0;
    int maxPalpitesErrados = MAXPALPITES;
    No* palpitesErradosLista = NULL;


while (palpitesErrados < maxPalpitesErrados && !todasLetrasAdivinhadas(listaPalavra)) {
    char palpite;
    printf("Digite uma letra: ");
    scanf(" %c", &palpite);
  
    palpite = tolower(palpite);

    if (!isalpha(palpite)) {
        printf("Entrada inválida, por favor, digite somente letras.\n");
        continue;
    }

    if (caractereNaoAceito(palpitesErradosLista, palpite) || caractereNaoAceito(listaPalavra, palpite)) {
        printf("Letra já digitada! Tente novamente.\n");
        continue; 
    }

    int certo = 0;
    No* atual = listaPalavra;

    int i = 0;

    while (atual != NULL) {
        if (palavra[i] == palpite) {
            atual->letra = palpite;
            certo = 1;
        }
        atual = atual->proximo;
        i++;
    }

    if (certo) {
        printf("Letra correta!\n");
        imprimePalavra(listaPalavra);
    } else {
        printf("Letra incorreta! %d palpites restantes.\n\n", maxPalpitesErrados - palpitesErrados - 1);
    
        imprimePalavra(listaPalavra);
        criaNo(&palpitesErradosLista, palpite);
        palpitesErrados++;
        imprimeLetrasErradas(palpitesErradosLista);
      if (palpitesErrados == 0){
printf("  +---+\n");
printf("  |   |\n");
printf("      |\n");
printf("      |\n");
printf("      |\n");
printf("      |\n");
printf("========='\n");
      } else
if(palpitesErrados == 1){
printf("  +---+\n");
printf("  |   |\n");
printf("  O   |\n");
printf("      |\n");
printf("      |\n");
printf("      |\n");
printf("========='\n");
} else 
  if (palpitesErrados == 2){
printf("  +---+\n");
printf("  |   |\n");
printf("  O   |\n");
printf("  |   |\n");
printf("      |\n");
printf("      |\n");
printf("========='\n");
  } else
    if (palpitesErrados == 3){
printf("  +---+\n");
printf("  |   |\n");
printf("  O   |\n");
printf(" /|   |\n");
printf("      |\n");
printf("      |\n");
printf("========='\n");
    } else
      if (palpitesErrados == 4){
printf("  +---+\n");
printf("  |   |\n");
printf("  O   |\n");
printf(" /|\\  |\n");
printf("      |\n");
printf("      |\n");
printf("========='\n");
      } else
        if (palpitesErrados == 5){
printf("  +---+\n");
printf("  |   |\n");
printf("  O   |\n");
printf(" /|\\  |\n");
printf(" /    |\n");
printf("      |\n");
printf("========='\n");
        } else 
          if (palpitesErrados == 6){
printf("  +---+\n");
printf("  |   |\n");
printf("  O   |\n");
printf(" /|\\  |\n");
printf(" / \\  |\n");
printf("      |\n");
printf("========='\n");
          }
    }
}

if (todasLetrasAdivinhadas(listaPalavra)) {
    printf("Parabéns. Você venceu!\n A palavra era: %s\n", palavra);
} else {
    printf("Você perdeu.\n A palavra era: %s\n", palavra);
}

limpaLista(&listaPalavra);
limpaLista(&palpitesErradosLista);

  return 0;

}
