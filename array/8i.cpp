/*******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

const int NUM_MESAS = 30; // Número de mesas
const int LUGARES_POR_MESA = 5; // Lugares por mesa

int main() {
    int mesas[NUM_MESAS] = {0}; // Inicializa todas as mesas como livres
    int totalLugaresOcupados = 0;

    while (true) {
        int codigoMesa, quantidadeLugares;

        cout << "Digite o código da mesa (100 a 129) ou 0 para sair: ";
        cin >> codigoMesa;

        // Se o usuário digitar 0, termina o programa
        if (codigoMesa == 0) {
            break;
        }

        // Verifica se o código da mesa é válido
        if (codigoMesa < 100 || codigoMesa > 129) {
            cout << "Código de mesa inválido. Tente novamente.\n";
            continue;
        }

        int mesaIndex = codigoMesa - 100;

        cout << "Digite a quantidade de lugares desejados (1 a " << LUGARES_POR_MESA << "): ";
        cin >> quantidadeLugares;

        // Verifica se a quantidade de lugares é válida
        if (quantidadeLugares < 1 || quantidadeLugares > LUGARES_POR_MESA) {
            cout << "Quantidade de lugares inválida. Tente novamente.\n";
            continue;
        }

        // Verifica se a mesa já tem lugares ocupados
        if (mesas[mesaIndex] + quantidadeLugares > LUGARES_POR_MESA) {
            cout << "Não foi possível realizar a reserva. Mesa já ocupada.\n";
            continue;
        }

        // Atualiza a reserva
        mesas[mesaIndex] += quantidadeLugares;
        totalLugaresOcupados += quantidadeLugares;

        // Verifica se todos os lugares estão ocupados
        if (totalLugaresOcupados >= NUM_MESAS * LUGARES_POR_MESA) {
            cout << "Todas as mesas estão ocupadas. Encerrando o sistema.\n";
            break;
        }

        cout << "Reserva realizada com sucesso!\n";
    }

    cout << "Sistema de reservas encerrado.\n";
    return 0;
}
