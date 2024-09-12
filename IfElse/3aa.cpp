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
    string word;
    
    cout << "Digite uma palavra:";
    
    cin >> word;
    
    if (word.length() > 0){
        
        cout << "A palavra não é vazia!";
        
    } 
    
    
    

    return 0;
}