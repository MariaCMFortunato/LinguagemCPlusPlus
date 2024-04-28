#include <iostream>

using namespace std;

// Definição da classe Bicicleta
class Rectangulo
{
private:         // por defeito é private
    int largura; // atributo cor
    int altura;  // atributo inteiro

public:
    void DefinirLargura(int l)
    {
        largura = l;
    }

    int ObterLargura()
    {
        return largura;
    }

    void DefinirAltura(int a)
    {
        altura = a;
    }

    int ObterAltura()
    {
        return altura;
    }
};

int main()
{
    Rectangulo retangulo1; // declaração de uma instância
    Rectangulo retangulo2; // declaração de uma instância

    retangulo1.DefinirAltura(45);
    retangulo1.DefinirLargura(50);
    retangulo2.DefinirAltura(50);
    retangulo2.DefinirLargura(40);

    cout << "Altura retangulo 1: " << retangulo1.ObterAltura() << endl;
    cout << "Largura retangulo 1: " << retangulo1.ObterLargura() << endl;
    cout << "Area Retangulo 1: " << retangulo1.ObterAltura() * retangulo1.ObterLargura() << endl;
    cout << "\n";

    cout << "Altura retangulo 2: " << retangulo2.ObterAltura() << endl;
    cout << "Largura retangulo 2: " << retangulo2.ObterLargura() << endl;
    cout << "Area Retangulo 2: " << retangulo2.ObterAltura() * retangulo2.ObterLargura() << endl;
}