/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
using namespace std;

int main()
{
    
    int num, soma, i;
    i = 1;
    
    while (i > 0) {
        
        cout << "Digite um número: ";
        cin >> num;
        if(num > 0){
            soma += num;
        }
        i = num;
    } 
    
    cout << "A soma é: "<< soma;
    
    return 0;
    
}