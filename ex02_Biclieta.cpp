#include <iostream>

using namespace std;

// Definição da classe Bicicleta
class Bicicleta
{
private:             // por defeito é private
    int cor;         // atributo cor
    int numeroRodas; // atributo cor
    int marca;       // atributo inteiro

public:
    void DefinirCor(int c)
    {
        cor = c;
    }

    int ObterCor()
    {
        return cor;
    }

    void DefinirNumeroRodas(int n)
    {
        numeroRodas = n;
    }

    int ObterNumeroRodas()
    {
        return numeroRodas;
    }

    void DefinirMarca(int m)
    {
        marca = m;
    }

    int ObterMarca()
    {
        return marca;
    }
};

int main()
{
    Bicicleta bike1; // declaração de uma instância chamada bike1 da clase Bicicleta
    Bicicleta bike2; // declaração de uma instância chamada bike2 da clase Bicicleta

    bike1.DefinirCor(4);
    bike1.DefinirNumeroRodas(5);
    bike1.DefinirMarca(100);

    cout << "cor: " << bike1.ObterCor() << endl;
    cout << "numero de rodas: " << bike1.ObterNumeroRodas() << endl;
    cout << "marca: " << bike1.ObterMarca() << endl;

    bike2.DefinirCor(6);
    bike2.DefinirNumeroRodas(7);
    bike2.DefinirMarca(200);

    cout << "cor: " << bike2.ObterCor() << endl;
    cout << "numero de rodas: " << bike2.ObterNumeroRodas() << endl;
    cout << "marca: " << bike2.ObterMarca() << endl;
}