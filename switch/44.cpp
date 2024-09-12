/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void menu(){
   
    cout << "Escolha um animal: \n1. Cachorro\n2. Gato\n3. Pássaro\nDigite o número:";
    
}


int main() {
    
    int esc;
    menu();
    
    cin >> esc;
    
    if (esc < 1 || esc > 3){
        while(esc < 1 || esc > 3){
            cout << "Opção inválida!\n";
            menu();
            cin >> esc;
        }
        
    } else if(esc == 1){
        
        cout << "Au Au, meus Aumigos!";
        
    } else if(esc == 2){
        cout << "MIAAAAAAAu!";
    } else{
        cout << "Piu Piu!";
    }

    return 0;
    
}

