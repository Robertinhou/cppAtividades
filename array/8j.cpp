/*******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    const int size = 100; // Tamanho do conjunto
    double numeros[size];
    double soma = 0.0;
    int contIgual30 = 0;
    int contMaiorMedia = 0;
    int contIgualMedia = 0;

    // Lendo os números
    cout << "Insira " << size << " números reais:\n";
    for (int i = 0; i < size; i++) {
        cin >> numeros[i];
        soma += numeros[i]; // Calcula a soma dos números
    }

    // Calculando a média
    double media = soma / size;

    // Contando os números
    for (int i = 0; i < size; i++) {
        if (numeros[i] == 30) {
            contIgual30++;
        }
        if (numeros[i] > media) {
            contMaiorMedia++;
        }
        if (numeros[i] == media) {
            contIgualMedia++;
        }
    }

    // Imprimindo os resultados
    cout << "Números iguais a 30: " << contIgual30 << endl;
    cout << "Números maiores que a média: " << contMaiorMedia << endl;
    cout << "Números iguais à média: " << contIgualMedia << endl;

    return 0;
}
