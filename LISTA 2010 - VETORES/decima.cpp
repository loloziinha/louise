#include <iostream>
using namespace std;

int main() {
    int vetor1[5], vetor2[5], produto = 0;

    cout << "Digite 5 números para o primeiro vetor:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> vetor1[i];
    }

    cout << "Digite 5 números para o segundo vetor:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> vetor2[i];
    }

    for (int i = 0; i < 5; i++) {
        produto += vetor1[i] * vetor2[i];
    }

    cout << "Produto escalar: " << produto << endl;
    return 0;
}
