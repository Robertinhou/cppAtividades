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
    float vetor[size];
    float soma = 0.0;

   
    cout << "Insira " << size << " números decimais:\n";
    for (int i = 0; i < size; i++) {
        cin >> vetor[i];
        soma += vetor[i]; 
    }

    float media = soma / size;

    cout << "A média dos valores do vetor é: " << media << endl;

    return 0;
}
