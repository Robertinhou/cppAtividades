
#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {

	float valor, totalDescontos;
	int horas;

	cout << "Qual o valor de horas da empresa: ";
	cin >> valor;

	cout << "Horas trabalhadas do funcionário: ";
	cin >> horas;

	system("clear");

	float salario = valor * horas;

	float inss = 0.10 * salario;

	float fgts = 0.11 * salario;

	float ir;

	cout << "Salário Bruto: (" << valor << " * " << horas << ")   : R$ " << salario <<"\n";

	if(salario <= 900) {
		ir = 0;
		cout << "(-) IR (isento)      : R$ 0" << "\n";

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

	return 0;
}