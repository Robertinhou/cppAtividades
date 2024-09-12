/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    double raio;
    double altura;
    
    
    
    cout<< "Insira o raio do cilindro: ";
    cin >> raio;
    
    cout<< "Insira a altura do cilindro: ";
    cin >> altura;
    
    
    cout << "A área: " << 3.14 * (raio*raio) * altura ;

    return 0;
}