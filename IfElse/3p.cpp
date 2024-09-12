/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int idade;
    int esc;

    cout << "Insira sua idade:\n";
    
    cin >> idade;
    
    cout << "Você tem diploma superior: \n";
    cout << "1. Sim\n2. Não";
    
    cin >> esc;
    
    if (idade > 21 && esc == 1) {
        cout << "Você está apto à vaga";
    } 
    
    
    


    return 0;
}