/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int idade;
    string nome;
    
    cout << "Digite seu nome: ";
    
    cin >> nome;
    
    if (nome.length() >= 3){
        
        cout << "Insira sua idade: ";
        
        cin >> idade;
        
        if (idade >= 18 ) {
            cout << "Acesso permitido!";
        } else{
            cout << "Vaza menor!!";
        }
        
    } else {
        cout << "Nome inválido, acesso negado!";
    }
       
        
    
    


    return 0;
}