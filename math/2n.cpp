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
    double preco;
    double desc;
    
    
    cout<< "Insira o preço do produto: R$";
    cin >> preco;
    
    cout<< "Insira o desconto: ";
    cin >> desc;
    
    cout << "O preço final é: R$" << preco - (desc/100.0 * preco) ;

    return 0;
}