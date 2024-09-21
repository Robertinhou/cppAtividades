
#include <iostream>
#include<stdlib.h>
using namespace std;

void listaDeFuncionarios(){
    
    cout << "1. Maria Fonseca - Auxiliar de Serviços Gerais (R$ 1300/mês)\n";
    cout << "2. Marilia Andrade - Auxiliar Administrativa (R$ 1500/mês)\n";
    cout << "3. Pedro consolação - Gestor de vendas (R$ 4000/mês)\n";
    cout << "4. Jalin Habei - Jovem Aprendiz (R$ 600/mês)\n";
    
}


void gerarHolerite(){
    
	float totalDescontos, salario;
	
	int escolha ;
	
	cin >> escolha;
	
    if (escolha < 1 || escolha > 4){
        
        while(escolha < 1 || escolha > 4){
            
	        salario = 0;
	        cout << "Não foi possível encontrar o funcionário! Digite um número válido: ";
	        cin >> escolha;
	        
	    }
	    
    }
    
        
    if(escolha == 1){ //puxaria o salário do Banco de Dados
	    salario = 1300;
	} else if(escolha == 2){
	    salario = 1500;
	} else if(escolha == 3){
	    salario = 4000;
	} else if(escolha == 4){
	    
	    salario = 600;
	    
	} 
    	
    
	   

	

	system("clear"); // é o limpa tela do VisualG kkkkkk tira as escritas de antes pra não fica "Digite a
	//quantidade de horas trabalhadas e o valor da hora" no holerite!

	

	float inss = 0.10 * salario;

	float fgts = 0.11 * salario;

	float ir;

	cout << "Salário Bruto       : R$ " << salario <<"\n";

	if(salario <= 900) {
		ir = 0;
		cout << "(-) IR (isento)     : R$ 0" << "\n";

	} else if(salario > 900 && salario <= 1500) {
		ir = 0.05 * salario;
		cout << "(-) IR (5%)    : R$ " << ir << "\n";

	} else if(salario > 1500 && salario <= 2500) {

		ir = 0.1 * salario;
		cout << "(-) IR (10%)    : R$ " << ir << "\n";

	} else if(salario > 2500) {
		ir = 0.2 * salario;
		cout << "(-) IR (20%)    : R$ " << ir << "\n";

	}

	cout << "(-) INSS (10%)      : R$ "<< inss << "\n";

	cout << "FGTS (11%)          : R$ "<< fgts << "\n";

	totalDescontos = inss + ir;

	cout << "Total de descontos  : R$ " << totalDescontos << "\n";

	cout << "Salário líquido:    : R$ " << salario - inss - ir;
    
    cout << "\n\n< IMPRIMIR >";
    
}

int main() {
    
    int escolhaMenu;
    
    cout << "Escolha um funcionário pra gerar o holerite: \n";
    
    listaDeFuncionarios(); cout << "\n Digite o número: ";
	
	gerarHolerite();
	
	return 0;
}
