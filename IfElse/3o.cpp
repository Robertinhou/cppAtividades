/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int esc;
    int escDin;
    
    


    cout << "Você tem vontade de ter um carro?\n";
    cout << "1. Sim\n2. Não\n";
    cin >> esc;
    if(esc == 1){
        cout << "Você tem 15 mil?\n";
        cout << "1. Sim\n2. Não\n";
        cin >> escDin;
        if(escDin == 1){
            cout << "Parabéns você pode comprar um Skyline Uno com escada";
        }
    } else {
        cout << "Tchau";
    }
    
    
    


    return 0;
}