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
    
    if (num < 0 || num > 10){
        cout << "´Número inválido!";
    } else {
        cout << "Número bom!";
    }

return 0;
    

}
