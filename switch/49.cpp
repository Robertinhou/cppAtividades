/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void menu(){
   
    cout << "Escolha um mês: \n1. Janeiro\n2. Fevereiro\n3. Março\n4. Abril\n5. Maio\n6. Junho\n7. Julho\n8. Agosto\n9. Setembro\n10. Outubro\n11. Novembro\n12. Dezembro\nDigite o número:";
    
}


int main() {
    
    int esc;
    menu();
    
    cin >> esc;
    
   switch(esc){
       case 1:
        cout << "Tem 31 dias";
       break;
       
       case 2:
        cout << "Tem 29 dias";
       break;
       
       case 3:
       cout << "Tem 31 dias";
       break;
       
       case 4:
        cout << "Tem 30 dias";
       break;
       
       case 5:
       cout << "Tem 31 dias";
       break;
       
       case 6:
        cout << "Tem 30 dias";
       break;
       
       case 7: 
       cout << "Tem 31 dias";
       break;
       
       case 8:
       cout << "Tem 31 dias";
       
       break;
       
       case 9:
        cout << "Tem 30 dias";
       break;
       
       case 10:
       cout << "Tem 31 dias";
       break;
       
       case 11:
        cout << "Tem 30 dias";
       break;
       
       case 12:
       cout << "Tem 31 dias";
       break;
   }

    return 0;
    
}

