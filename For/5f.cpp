/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int main()
{

    int num, maior;
    maior = 0;
    
    for (int i = 1; i <= 5; i++){
        
        cout << "Digite um número: ";
        cin >> num;
        if(num > maior ){
            maior = num;
        }
    }
    
    cout << "O maior é: " << maior;
    
    

    return 0;
}