/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    
    int soma,num;
    int i = 1;
    
    
    
    do{
        
        cout << "Digite um número: ";
        cin >> num;
        soma += num;
        i++;
    } while(i <= 5);
    
    cout << "A soma é: " << soma;
    
    return 0;
    
}