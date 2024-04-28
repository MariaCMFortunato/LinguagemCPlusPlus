#include <iostream>

using namespace std;

class InputEOutput
{
public:
    void MostrarValor(int);
    int ReceberValor();
};

void InputEOutput::MostrarValor(int valor)
{
    cout << valor << endl;
}

int InputEOutput::ReceberValor()
{
    int valor = 0;
    cout << "Indique o valor: " << endl;
    cin >> valor;
    return valor;
}

class Rectangulo
{
private:             // por defeito é private
    int largura;     // atributo cor
    int comprimento; // atributo inteiro

public:
    void DefinirLargura(int);
    int ObterLargura();
    void DefinirComprimento(int);
    int ObterComprimento();
    void MostrarComprimento();
    void ReceberComprimento();
};

void Rectangulo::DefinirLargura(int l)
{
    largura = l;
}

int Rectangulo::ObterLargura()
{
    return largura;
}

void Rectangulo::DefinirComprimento(int c)
{
    comprimento = c;
}

int Rectangulo::ObterComprimento()
{
    return comprimento;
}

void Rectangulo::MostrarComprimento()
{
    InputEOutput m1;
    m1.MostrarValor(comprimento);
}

void Rectangulo::ReceberComprimento()
{
    InputEOutput m2;
    DefinirComprimento(m2.ReceberValor());
}

int main()
{
    Rectangulo retangulo1; // declaração de uma instância

    cout << endl;
    retangulo1.DefinirComprimento(3);
    retangulo1.MostrarComprimento();
    cout << endl;
    retangulo1.ReceberComprimento();
    retangulo1.MostrarComprimento();

    // cout << "Comprimento retangulo 1: " << retangulo1.ObterComprimento() << endl;
    // cout << "Largura retangulo 1: " << retangulo1.ObterLargura() << endl;
    // cout << "Area Retangulo 1: " << retangulo1.ObterComprimento() * retangulo1.ObterLargura() << endl;
    // cout << endl;
}