/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void menu(){
   
    cout << "Escolha uma operação: \n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n Digite o número:";
    
}


int main() {
    
    int esc, x, y;
    menu();
    
    cin >> esc;
    
    if (esc < 1 || esc > 4){
        while(esc < 1 || esc > 3){
            cout << "Opção inválida!\n";
            menu();
            cin >> esc;
        }
        
    } else if(esc == 1){
        
        cout << "Digite o primeiro número: ";
        cin>>x;
        
        cout << "Digite o segundo número: ";
        cin >> y;
        
        cout << "O resultado é: " << x+y;
    } else if (esc == 2) {
        cout << "Digite o primeiro número: ";
        cin >> x;
        
        cout << "Digite o segundo número: ";
        cin >> y;
        cout << "O resultado é: " << x-y;
    } else if(esc == 3){
       cout << "Digite o primeiro número: ";
        cin>>x;
        
        cout << "Digite o segundo número: ";
        cin>>y;
        cout << "O resultado é: " << x*y;
    } else{
        cout << "Digite o primeiro número: ";
        cin>>x;
        
        cout << "Digite o segundo número: ";
        cin>>y;
        cout << "O resultado é: " << x/y;
    }

    return 0;
    
}

