#include <iostream>

using namespace std;

// Definição da classe Bicicleta
class Bicicleta
{
public:              // por defeitro é private
    int cor;         // atributo cor é publico
    int numeroRodas; // atributo cor é publico
    int marca;       // atributo inteiro é publico
};

int main()
{
    Bicicleta bike1; // declaração de uma instância chamada bike1 da clase Bicicleta
    Bicicleta bike2; // declaração de uma instância chamada bike2 da clase Bicicleta

    bike1.cor = 4;
    bike2.cor = 5;

    bike1.numeroRodas = 5;
    bike2.numeroRodas = 6;

    bike1.marca = 100;
    bike2.marca = 150;
    cout << "cor: " << bike1.cor << endl;
    cout << "numero de rodas: " << bike1.numeroRodas << endl;
    cout << "marca: " << bike1.marca << endl;

    cout << "";
    cout << "Cor:" << bike2.cor << endl;
    cout << "numero de rodas:" << bike2.numeroRodas << endl;
    cout << "marca:" << bike2.marca << endl;
}