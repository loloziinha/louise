#include <iostream>
using namespace std;

int main() {
    int vetor[15];

    cout << "Digite 15 números inteiros:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> vetor[i];
    }

    int maior = vetor[0], menor = vetor[0];
    for (int i = 1; i < 15; i++) {
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    }

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    return 0;
}
