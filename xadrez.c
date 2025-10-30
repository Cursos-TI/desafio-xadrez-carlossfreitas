#include <stdio.h>

//Desafio de Xadrez - Nível Novato
 //Simula a movimentação de peças de xadrez usando as estruturas de repetição (for, while, do-while).
 
int main() {

    const int casasBispo = 5;    // 5 casas na diagonal
    const int casasTorre = 5;    // 5 casas para a direita
    const int casasRainha = 8;   // 8 casas para a esquerda

    int contadorBispo = 1;
    int contadorRainha = 1;

    // 1. Simulação do Movimento da TORRE (Usando FOR)
    // Movimento: 5 casas para a direita
    printf("================================================\n");
    printf("        1. MOVIMENTO DA TORRE\n");
    printf("================================================\n");

    for (int contadorCasa = 1; contadorCasa <= casasTorre; contadorCasa++) {
       
        printf("Torre move casa %d: para frente\n", contadorCasa);
    }
    printf("\n");

    // 2. Simulação do Movimento do BISPO (Usando WHILE)
    // Movimento: 5 casas na diagonal direita
    
    printf("================================================\n");
    printf("        2. MOVIMENTO DO BISPO\n");
    printf("================================================\n");

    // O 'while' executa enquanto a condicao for verdadeira.
    while (contadorBispo <= casasBispo) {
        // Bispo move na diagonal (combinacao das direcoes).
        printf("Bispo move casa %d: diagonal direita\n", contadorBispo);

        contadorBispo++;
    }
    printf("\n");


    // -------------------------------------------------------------------------
    // 3. Simulação do Movimento da RAINHA (Usando DO-WHILE)
    // Movimento: 8 casas para a esquerda
    // -------------------------------------------------------------------------
    printf("================================================\n");
    printf("       3. MOVIMENTO DA RAINHA\n");
    printf("================================================\n");

    do {
        // Rainha se move horizontalmente.
        printf("Rainha move casa %d:para lateral a esquerda\n", contadorRainha);

        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n--- FIM DA SIMULACAO ---\n");

    return 0;
}