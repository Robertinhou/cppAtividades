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
    double peso;
    double altura;
    
    cout<< "Insira a altura: ";
    cin >> altura;
    
    cout << "Insira o peso";
    cin >> peso;
    
    cout << "O IMC é: " << peso/ (altura*altura);

    return 0;
}