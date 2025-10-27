#include <iostream>
using namespace std;

void somaMatrizes(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Função auxiliar para imprimir matriz
void imprimirMatriz(int matriz[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
