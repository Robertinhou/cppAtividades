/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void menu(){
   
    cout << "Escolha uma operação: \n1. Saque\n2. Depósito\n3. Consultar saldo\nDigite o número:";
    
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
        
        cout << "O saque de R$300 foi feito ";
        
    } else if(esc == 2){
        
         cout << "O depósito de R$300 foi feito ";
        
    } else{
        
         cout << "O seu saldo é de R$0 seu pobre";
        
    }

    return 0;
    
}

