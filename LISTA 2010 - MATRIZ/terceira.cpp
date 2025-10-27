#include <iostream>
using namespace std;

int somaLinha(int matriz[5][5], int linha) {
    int soma = 0;
    for(int j = 0; j < 5; j++) {
        soma += matriz[linha][j];
    }
    return soma;
}
