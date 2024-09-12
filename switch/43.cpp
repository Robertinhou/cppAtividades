/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void menu(){
   
    cout << "Escolha um dia: \n1. Segunda\n2. Terça\n3. Quarta\n4. Quinta\n5. Sexta\n6. Sábado\n7. Domingo\n Digite o número:";
    
}


int main() {
    
    int esc;
    menu();
    
    cin >> esc;
    
    if (esc < 1 || esc > 4){
        while(esc < 1 || esc > 3){
            cout << "Opção inválida!\n";
            menu();
            cin >> esc;
        }
        
    } else if(esc == 1 || esc == 2 || esc == 3 || esc == 4 || esc == 5){
        
        cout << "É dia de semana!";
        
        
    
    } else{
        cout << "É fim de semana";
    }

    return 0;
    
}

