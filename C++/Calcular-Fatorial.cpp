#include <iostream>

using namespace std;

int main() {
    int i, n;
    int f = 1;
    
    cout << "Digite um número inteiro não negativo: ";
    cin >> n;
    
    for (i = 1; i <= n; i++){
        f *= i;
    }
    cout << "O fatorial é " << f;
    return 0;
}