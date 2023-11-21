#include <stdio.h>
#include <stdlib.h>
#include "verificar.h"
#include <string.h>
#include <locale.h>

// Variáveis globais
const int h = 3;

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    int cont = 0;
    int x, y;
    int player;
    const int h = 3;
    int flag = -1;

    char matriz[3][3] = {
        '_', '_', '_',
        '_', '_', '_',
        '_', '_', '_'   };
    memset(matriz, 0, sizeof(matriz)); 

int verificarCordenadas(x, y) {
    // Verifique se as coordenadas estão dentro dos limites da matriz
    if (x < 0 || x > 3 || y < 0 || y > 3) {
        printf("Coordenadas fora dos limites. Digite novamente.\n");
        return 0;
    }

    // Verifique se a posição na matriz está vazia
    if (matriz[x - 1][y - 1] != 0) {
        printf("Essa posição já está ocupada. Escolha outra coordenada.\n");
        return 0;
    }
    return 1; // Coordenadas válidas 
}

    while (flag == -1) {
        player = cont % 2 == 0 ? 1 : 2;

        printf("JOGO DA VELHA\n\n");
        printf("TABELA - PLAYER %d\n\n", player);
        int i;
        for (i = 0; i < h; i++) {
            int j;
			for (j = 0; j < h; j++) {
                printf("[%c]", matriz[i][j]);
            }
            printf("\n");
        }

        while (1) {
            printf("\nDigite a coordenada que deseja marcar: ");

            int entradaValida = 0;

            do {
                if (scanf("%d%d", &x, &y) == 2 && verificarCordenadas(x, y)) {
                    entradaValida = 1;
                } else {
                    while (getchar() != '\n');
                    printf("As coordenadas digitadas estão erradas. Digite novamente.\n");
                }

            } while (!entradaValida);

            if (cont % 2 == 0) {
                matriz[x - 1][y - 1] = 'x';
            } else {
                matriz[x - 1][y - 1] = 'o';
            }
            cont++;
            break;
        }

        flag = verificar(matriz);
    }

    if (flag == 1 || flag == 2) {
    printf("FIM DE JOGO\n\n");
    printf("O vencedor é o jogador %d!!!\n", flag);
	} else {
    printf("FIM DE JOGO\n\n");
    printf("O jogo terminou em empate!\n");
	}

    return 0;
}
