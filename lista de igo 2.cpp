1) 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float largura, comprimento, valor_m2, area, preco;
    cout << "Informe a largura do terreno: ";
    cin >> largura;
    cout << "Informe o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Informe o valor do metro quadrado: ";
    cin >> valor_m2;

    area = largura * comprimento;
    preco = area * valor_m2;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << endl;
    cout << "Preco do terreno = " << preco << endl;
    return 0;
}

2)
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double base, altura, area, perimetro, diagonal;
    cout << "Informe a base do retangulo: ";
    cin >> base;
    cout << "Informe a altura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    cout << fixed << setprecision(4);
    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimetro << endl;
    cout << "Diagonal = " << diagonal << endl;
    return 0;
}

3)
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome1, nome2;
    int idade1, idade2;
    double media;

    cout << "Informe o nome da primeira pessoa: ";
    cin >> nome1;
    cout << "Informe a idade de " << nome1 << ": ";
    cin >> idade1;

    cout << "Informe o nome da segunda pessoa: ";
    cin >> nome2;
    cout << "Informe a idade de " << nome2 << ": ";
    cin >> idade2;

    media = (idade1 + idade2) / 2.0;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome1 << " e " << nome2 << " eh " << media << " anos." << endl;
    return 0;
}

4)
#include <iostream>
using namespace std;

int main() {
    int x, y, soma;
    cout << "Informe o valor de X: ";
    cin >> x;
    cout << "Informe o valor de Y: ";
    cin >> y;

    soma = x + y;

    cout << "Soma = " << soma << endl;
    return 0;
}

5)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco_unit, dinheiro, troco;
    int quantidade;

    cout << "Informe o preco unitario do produto: ";
    cin >> preco_unit;
    cout << "Informe a quantidade comprada: ";
    cin >> quantidade;
    cout << "Informe o valor em dinheiro dado pelo cliente: ";
    cin >> dinheiro;

    troco = dinheiro - (preco_unit * quantidade);

    cout << fixed << setprecision(2);
    cout << "Troco = " << troco << endl;
    return 0;
}
