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
    string palavra;
    
    cout << "Insira uma palavra: ";
    cin >> palavra;
    
    for(i = 0; i <= palavra.length(); i++){
        
        cout << palavra[i] << "\n";
        
    }
    
    

    return 0;
    
}

