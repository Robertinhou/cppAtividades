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
    int temp;
    
    
    cout<< "Insira a temperatura em Celsius: ";
    cin >> temp;
    
   
    
    cout << "Essa temperatura em Farenhait é: " << temp * 9/5 + 32 << "F";

    return 0;
}