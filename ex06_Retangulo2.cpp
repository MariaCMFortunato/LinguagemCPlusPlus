#include <iostream>

using namespace std;

// Definição da classe Bicicleta
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

class RectanguloComCor : public Rectangulo
{
    int cor;

public:
    void DefinirCor(int);
    int ObterCor();
};

void RectanguloComCor::DefinirCor(int cr)
{
    cor = cr;
}

int RectanguloComCor::ObterCor()
{
    return cor;
}

class RectanguloComCorECheiro : public RectanguloComCor
{
    int cheiro;

public:
    void DefinirCheiro(int);
    int ObterCheiro();
};

void RectanguloComCorECheiro::DefinirCheiro(int ch)
{
    cheiro = ch;
}

int RectanguloComCorECheiro::ObterCheiro()
{
    return cheiro;
}

int main()
{
    RectanguloComCor retangulo1;        // declaração de uma instância
    RectanguloComCorECheiro retangulo2; // declaração de uma instância

    retangulo1.DefinirComprimento(3);
    retangulo1.DefinirLargura(4);
    retangulo1.DefinirCor(10);

    retangulo2.DefinirComprimento(5);
    retangulo2.DefinirLargura(6);
    retangulo2.DefinirCor(20);
    retangulo2.DefinirCheiro(10);

    cout << "Comprimento retangulo 1: " << retangulo1.ObterComprimento() << endl;
    cout << "Largura retangulo 1: " << retangulo1.ObterLargura() << endl;
    cout << "Cor do Retangulo 1: " << retangulo1.ObterCor() << endl;
    cout << "Area Retangulo 1: " << retangulo1.ObterComprimento() * retangulo1.ObterLargura() << endl;
    cout << endl;

    cout << "Comprimento retangulo 2: " << retangulo2.ObterComprimento() << endl;
    cout << "Largura retangulo 2: " << retangulo2.ObterLargura() << endl;
    cout << "Cor do Retangulo 2: " << retangulo2.ObterCor() << endl;
    cout << "Cheiro do Retangulo 2: " << retangulo2.ObterCheiro() << endl;
    cout << "Area Retangulo 2: " << retangulo2.ObterComprimento() * retangulo2.ObterLargura() << endl;
    cout << endl;
}