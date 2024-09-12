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
    string resposta;
    
    cout << "Você é um robô?";
    
    cin >> resposta;
    
    if (resposta == "sim" || resposta == "Sim" || resposta == "SIM" || resposta == "s"){
        
        cout << "Prove que você não é um robô!!";
        
    } else{
        cout << "Bip bla bo bu";
    }
    
    
    

    return 0;
}