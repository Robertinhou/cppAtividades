/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void menu(){
    
    cout << "Escolha um horário: \n1. 07:00h\n2. 13:00h\n3. 19:00h\n Digite o número:";
    
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
        
    } else if(esc == 2){
        cout << "Seu voo está agendado para as 13:00h";
    } else if (esc == 3) {
        cout << "Seu voo está agendado para as 19:00h";
    } else{
        cout << "Seu voo está agendado para as 07:00h";
    }

    return 0;
    
}

