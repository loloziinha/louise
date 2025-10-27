#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int maior;
    
    // Preenchendo a matriz (exemplo)
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            matriz[i][j] = i * 4 + j + 1; // Exemplo de valores
        }
    }
    
    maior = matriz[0][0];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    
    cout << "Maior valor: " << maior << endl;
    return 0;
}
