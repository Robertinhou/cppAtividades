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
    
    
    
    cout << "Insira um ano: ";
    cin >> x;

    
    if (x % 100 != 0 && x % 400 == 0 && x % 4 == 0){
        cout << "O ano é bissexto.";
    } else if(x % 4 == 0 && x % 100 != 0){
        cout << "É bissexto!";
    } else{
        cout << "O ano não é bissexto";
    }
    
    


    return 0;
}