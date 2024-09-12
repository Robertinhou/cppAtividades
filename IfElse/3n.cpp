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
    
    


    cout << "Digite su idade: \n";
    cin >> idade;
    cout << "Você tem carteira de motorista?\n";
    cout <<"1. Sim \n2. Não\n\nDigite o número:";
    cin >> esc;
    
    if(idade >= 18 && esc == 1){
        
        cout << "Você pode dirigir!";
        
    
    } else {
        cout << "você não pode dirigir!";
    }
    
    
    


    return 0;
}