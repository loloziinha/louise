#include <iostream>
using namespace std;

int somaMatriz3x3(int matriz[3][3]) {
    int soma = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}
