/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int escStream;
    int esc;
    
    cout << "Você é assinante da prime Video:\n1. Sim\n2. Não\n";
    
    cin >> escStream;
    
    if (escStream == 1){
        
        cout << "Você já viu The Walking Dead?\n";
        cout << "1. Sim\n2. Não";
        
        cin >> esc;
        
        if (esc == 1 ) {
            cout << "Parabéns, veja a nova temporada!";
        } 
    } else {
        cout << "Tchau";
    }
       
        
    
    


    return 0;
}