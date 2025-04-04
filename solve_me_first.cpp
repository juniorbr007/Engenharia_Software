#include <iostream>
using namespace std;

int solveMeFirst(int a, int b) {
    int soma = a + b;
    return soma;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int sum = solveMeFirst(num1, num2);
    cout << sum << endl;
    return 0;
}
