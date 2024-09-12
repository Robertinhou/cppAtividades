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
    double nota1, nota2, nota3;
   
    
    
    
    cout << "Insira a primeira nota: ";
    cin >> nota1;
    
    cout<< "Insira a segunda nota: ";
    cin >> nota2;
    
    cout<< "Insira a terceira nota: ";
    cin >> nota3;
    
    cout << "A média é: " << (nota1 + nota2+ nota3) /3 ;

    return 0;
}