/*******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int vetor[size];

    cout << "Insira " << size << " números inteiros:\n";
    for (int i = 0; i < size; i++) {
        cin >> vetor[i];
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (vetor[i] < vetor[j]) {
             
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
                
            }
        }
    }

    // Imprimindo o vetor ordenado
    cout << "Os valores do vetor em ordem decrescente são:\n";
    for (int i = 0; i < size; i++) {
        cout << vetor[i] << "\n";
    }

    return 0;
}
