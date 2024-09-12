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
    float base, lado1, lado2;
    
    cout << "Insira a base do triângulo";
    
    cin >> base;
    
    cout << "Insira o lado direito: ";
    
    cin>>lado1;
    
    cout << "Insira o lado esquerdo: ";
    
    cin >> lado2;
    
    if (base == lado1 && lado1 == lado2){
        
        cout << "É equilátero";
        
    } else if(base == lado1 || base == lado2 || lado2 == lado1){
        cout << "É isóceles!";
    } else{
        cout << "É escaleno!";
    }
    
    
    
    

    return 0;
}