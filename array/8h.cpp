/*******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    const int numMercadorias = 100; // Número de mercadorias
    double precoCompra, precoVenda;
    int lucroMenor10 = 0;
    int lucroEntre10e20 = 0;
    int lucroMaior20 = 0;

    // Lendo os preços de compra e venda
    for (int i = 0; i < numMercadorias; i++) {
        cout << "Insira o preço de compra da mercadoria " << (i + 1) << ": ";
        cin >> precoCompra;
        cout << "Insira o preço de venda da mercadoria " << (i + 1) << ": ";
        cin >> precoVenda;

        // Calculando o lucro percentual
        double lucroPercentual = ((precoVenda - precoCompra) / precoCompra) * 100;

        // Contando os intervalos de lucro
        if (lucroPercentual < 10) {
            lucroMenor10++;
        } else if (lucroPercentual <= 20) {
            lucroEntre10e20++;
        } else {
            lucroMaior20++;
        }
    }

    // Imprimindo os resultados
    cout << "Mercadorias com lucro < 10%: " << lucroMenor10 << endl;
    cout << "Mercadorias com 10% <= lucro <= 20%: " << lucroEntre10e20 << endl;
    cout << "Mercadorias com lucro > 20%: " << lucroMaior20 << endl;

    return 0;
}
