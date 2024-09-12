/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;


int main() {
    
    int i;
    int num;
    
    cout << "Insira um número: ";
    cin >> num;
    
    for(i = 1; i < num; i++){
           if(i % 2 == 0){
               cout << i << "\n";
           }
    }
    
    

    return 0;
    
}

