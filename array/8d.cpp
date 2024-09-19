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

 
    int menor = vetor[0]; 

    for (int i = 1; i < size; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i]; 
        }
    }

    cout << "O menor valor do vetor é: " << menor << endl;

    return 0;
}
