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
    string nome;
    
    cout << "Insira seu nome: ";
    
    cin >> nome;
    
    if (nome == "Gloria" || nome == "Wilson"){
        cout << "Bem vindo de volta";
        
    } else {
        cout << "Tchau!";
    }

return 0;
    

}
