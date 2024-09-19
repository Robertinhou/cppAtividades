/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>

using namespace std;

int main()
{
    
    int vetor[10];
    
    for (int i = 0; i < 10; i++){
        vetor[i] = rand() % 20 + 1;
        cout << vetor[i] << "\n";
    }
    
}