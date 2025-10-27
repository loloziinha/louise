#include <iostream>
using namespace std;

int main() {
    int vetor[10], num;
    bool encontrado = false;

    cout << "Digite 10 números:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }

    cout << "Digite um número para buscar: ";
    cin >> num;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == num) {
            encontrado = true;
            break;
        }
    }

    if (encontrado)
        cout << "Número encontrado!" << endl;
    else
        cout << "Número não encontrado." << endl;

    return 0;
}
