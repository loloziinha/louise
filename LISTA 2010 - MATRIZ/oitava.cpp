#include <iostream>
using namespace std;

int contarOcorrencias(int matriz[4][4], int numero) {
    int contador = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] == numero) {
                contador++;
            }
        }
    }
    return contador;
}
