/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    float x;
    float y;
    
    
    cout << "Insira um número: ";
    cin >> x;
    
    cout << "Insira outro número: ";
    cin >> y;
    
    
    if (x > y ){
        cout << "O primeiro número é maior que o segundo.";
    } else if(x == y){
        cout << "São iguais";
    }
    


    return 0;
}