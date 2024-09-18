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
    int i = 1;
    
    cout << "Digite um número: ";
    cin >> num;
    
    do{
        
        if (num <= 10 ){
            cout << "Tabuada do " << num<< "\n\n";
            while (i <= 10){
              cout << num << "x" << i << "=" << num*i <<"\n";  
              i++;
            }
            
        }
        i = 1;
        num++;
    } while(num <= 10);
    
    return 0;
    
}