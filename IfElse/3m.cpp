/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int esc;


    cout << "Escolha um mês: \n";
    cout <<"1. Janeiro \n";
    cout <<"2.Fevereiro \n";
    cout <<"3. Março \n";
    cout <<"4. Abril \n";
    cout <<"5. Maio \n";
    cout <<"6. Junho\n";
    cout <<"7. Julho\n";
    cout <<"8. Agosto \n";
    cout <<"9. Setembro \n";
    cout <<"10. Outubro \n";
    cout <<"11. Novembro\n";
    cout << "12. Dezembro \n";
    
    cout << "Insira um mês (pelo número): ";
    cin >> esc;
    
    if (esc == 1 ){
        cout << "O mês tem 31 dias";
    } else if (esc == 2 ){
        cout << "O mês tem 28 dias";
    } else if (esc == 3 ){
        cout << "O mês tem 31 dias";
    } else if (esc == 4 ){
        cout << "O mês tem 30 dias";
    } else if (esc == 5 ){
        cout << "O mês tem 31 dias";
    }else if (esc == 6 ){
        cout << "O mês tem 30 dias";
    }else if (esc == 7 ){
        cout << "O mês tem 31 dias";
    }else if (esc == 8 ){
        cout << "O mês tem 31 dias";
    } else if (esc == 9 ){
        cout << "O mês tem 30 dias";
    } else if (esc == 10 ){
        cout << "O mês tem 31 dias";
    } else if (esc == 11 ){
        cout << "O mês tem 30 dias";
    } else if (esc == 12 ){
        cout << "O mês tem 31 dias";
    } 
    
    


    return 0;
}