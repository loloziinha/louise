#include <iostream>
using namespace std;

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int somaPrincipal = 0, somaSecundaria = 0;
    
    // Soma da diagonal principal e secundária
    for(int i = 0; i < 3; i++) {
        somaPrincipal += matriz[i][i];
        somaSecundaria += matriz[i][2-i];
    }
    
    cout << "Soma diagonal principal: " << somaPrincipal << endl;
    cout << "Soma diagonal secundária: " << somaSecundaria << endl;
    
    return 0;
}
