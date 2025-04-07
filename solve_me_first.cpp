#include <iostream>
using namespace std;

// Função que retorna a soma de dois números inteiros
int sumOfTwoNumbers(int a, int b) {
    int soma = a + b;
    return soma;
}

int main() {
    int num1, num2;

    // Entrada dos dois números
    cin >> num1 >> num2;
    // Chamada da função para somar os números
    int sum = sumOfTwoNumbers(num1, num2);

    // Impressão do resultado
    cout << sum << endl;
    return 0;
}
