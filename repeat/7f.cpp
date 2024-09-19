/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
using namespace std;

int main()
{
    
    int num, i;
    i = 1;
    
    cout << "insira um número: ";
    cin >> num;
    
    if(num > 0){
        
        while (i <= num){
        
            if (i % 2 != 0) {
                cout << i << "\n";
            }
            
            i++;
        } 
        
    } else{
        
        cout << "Fim!";
        
    }
    
    return 0;
    
}