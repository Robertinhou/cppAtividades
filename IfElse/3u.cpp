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
    string esc;
    
    cout << "Deseja fazer uma compra?: ";
    
    cin >> esc;
    
    if (esc == "sim" || esc == "Sim" || esc == "SIM" || esc == "s" || esc == "S" || esc == "SS" || esc == "ss"){
        
        cout << "Vlw pela compra!! S2";
        
    } else {
        cout << "Vai ti fuder, puque num tlabaia?!";
    }

return 0;
    

}
