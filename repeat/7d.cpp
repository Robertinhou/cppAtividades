/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    
    int senha, tentativa;
    int i = 1;
    
    cout << "Crie a senha: ";
    cin >> senha;
    
    cout << "Digite a senha para confirmar: ";
    cin >> tentativa;
    
    if(tentativa != senha){
        while(tentativa != senha && i <3){
            
            cout << "As senhas não coincidem! Tente novamente: ";
            cin >> tentativa;
            
            i++;
            
        } 
        
        if( i == 3){
            cout << "Você excedeu o limite de 3 senhas. Crie uma nova";
        }
        
    } else {
        cout << "Bem vindo!";
    }
    
    return 0;
    
}

