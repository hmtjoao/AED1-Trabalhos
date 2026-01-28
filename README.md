# Projetos de Algoritmos e Estruturas de Dados 1 (UFSCar) 🎓

Este repositório reúne os projetos práticos desenvolvidos durante a disciplina de **Algoritmos e Estruturas de Dados 1** no curso de **Ciência da Computação** da UFSCar. O foco principal é a implementação e manipulação de estruturas dinâmicas em linguagem **C**.

---

## 📂 Organização do Repositório

### 1. 🎮 RPG de Texto (Árvores Binárias)
Localizado na pasta: `/Jogo-Historia-Arvores`

Um jogo de escolhas ("Adventure Game") onde o fluxo narrativo é gerenciado por uma **Árvore Binária de Decisões**.
- **Lógica:** Cada nó representa um evento e as arestas representam as decisões do jogador.
- **Destaque Técnico:** Uso de recursividade para travessia da árvore e alocação dinâmica de nós.
- **Documentação:** Inclui o **Diagrama de Fluxo** original em PDF mapeando todos os estados e finais do jogo.

### 2. 🔠 Jogo da Forca (Listas Encadeadas)
Localizado na pasta: `/Jogo-Forca-Listas`

Implementação do clássico jogo da forca utilizando **Listas Encadeadas Dinâmicas** para gerenciar as letras e palavras.
- **Lógica:** Manipulação de ponteiros para inserção e busca de caracteres em tempo real.
- **Destaque Técnico:** Gerenciamento eficiente de memória e manipulação de strings em baixo nível.

---

## 🛠️ Tecnologias e Conceitos Aplicados
- **Linguagem:** C puro.
- **Estruturas:** Árvores Binárias de Busca, Listas Encadeadas Dinâmicas.
- **Memória:** Alocação dinâmica (`malloc`, `free`) e manipulação de ponteiros.
- **Arquivos:** Leitura de bases de dados em formato `.txt`.

---
## ➡️ Créditos

Este projeto foi desenvolvido como trabalho final da disciplina Algoritmos e Estruturas de Dados 1, ministrada pelo Prof. Dr. Ricardo Ferrari Junior no Departamento de Computação da UFSCar em 2022.

--- 

## 🚀 Como Executar
Para compilar qualquer um dos projetos, utilize o GCC no terminal:

```bash
# Entre na pasta do projeto desejado
cd Jogo-Historia-Arvores

# Compile
gcc main.c -o jogo

# Execute
./jogo
