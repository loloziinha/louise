#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;

    cout << "Quantos termos da sequência de Fibonacci? ";
    cin >> n;

    cout << "Sequência de Fibonacci:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;

    return 0;
}
