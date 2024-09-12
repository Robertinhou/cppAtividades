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
    int num;
    
    cout << "Insira um número: ";
    
    cin >> num;
    
    if (num % 3 == 0 || num % 5 == 0){
        
        cout << "O número divide por 3 ou por 5!";
        
    } 

return 0;
    

}
