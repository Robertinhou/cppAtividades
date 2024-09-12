/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void menu(){
   
    cout << "Escolha um limite de velocidade: \n1. Baixo\n2. Média\n3. Alta\nDigite o número:";
    
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
        
        cout << "O limite é 30 KM";
        
    } else if(esc == 2){
        cout << "O limite é 70KM";
    } else{
        cout << "O limite é 400KM !";
    }

    return 0;
    
}

