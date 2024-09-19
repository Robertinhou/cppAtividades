/*******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int size = 5; // Tamanho do vetor
    string nomes[size];

    // Preenchendo o vetor com nomes
    cout << "Insira " << size << " nomes:\n";
    for (int i = 0; i < size; i++) {
        cin >> nomes[i];
    }

    // Ordenando os nomes em ordem alfabética
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nomes[i] > nomes[j]) {
                // Troca os elementos
                string temp = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = temp;
            }
        }
    }

    // Imprimindo a lista ordenada de nomes
    cout << "Os nomes em ordem alfabética são:\n";
    for (int i = 0; i < size; i++) {
        cout << nomes[i] << "\n";
    }

    return 0;
}
