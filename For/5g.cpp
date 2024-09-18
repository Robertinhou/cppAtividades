/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int main()
{

    
    
    
    for (int i = 5; i <= 10; i++){
        
        cout << "\nTabuada do " << i << "\n\n";
        for (int j = 1; j <=10; j ++){
            cout << i<<"x"<< j << " = " << i*j;    
            cout << "\n";
        }
        
    }
    
   
    
    

    return 0;
}