/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int main()
{
    
    int num;
    cout << "Digite um número: ";
    cin >> num;
    
    
    cout << "Seus divisores são: \n";
    
    for (int i = num; i > 0; i--){
        
        if(num % i == 0){
            cout << i << "\n";
        }
        
    }
    
   
    
    

    return 0;
}