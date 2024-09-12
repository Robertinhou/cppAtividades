/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int x;
    
    
    
    cout << "Insira um número: ";
    cin >> x;

    
    if (x % 2 != 0){
        cout << "O número é ìmpar.";
    } else {
        cout << "É par!";
    }
    


    return 0;
}