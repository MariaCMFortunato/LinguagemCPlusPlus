#include <iostream>

using namespace std;

// Definição classe Roda
class Roda
{
private:
    int diametro;

public:
    void DefinirDiametro(int d)
    {
        diametro = d;
    }

    int ObterDiametro()
    {
        return diametro;
    }
};

// Definição classe Selim
class Selim
{
private:
    int tamanho;

public:
    void DefinirTamanho(int t)
    {
        tamanho = t;
    }

    int ObterTamanho()
    {
        return tamanho;
    }
};

// Definição classe Pedal
class Pedal
{
private:
    int largura;

public:
    void DefinirLargura(int l)
    {
        largura = l;
    }

    int ObterLargura()
    {
        return largura;
    }
};

// Definição da classe Bicicleta
class Bicicleta
{
private: // por defeitro é private
    int cor;
    Roda rodas[4];
    Selim selim[2];
    Pedal pedal[2];

public:
    void DefinirCor(int c)
    {
        cor = c;
    }

    int ObterCor()
    {
        return cor;
    }

    void DefinirDiametroRodas(int d)
    {
        for (int i = 0; i < 4; i++)
        {
            rodas[i].DefinirDiametro(d);
        }
    }
    int ObterDiametroRodas()
    {
        return rodas[0].ObterDiametro();
    }

    void DefinirTamanhoSelim(int t)
    {
        for (int i = 0; i < 2; i++)
        {
            selim[i].DefinirTamanho(t);
        }
    }
    int ObterTamanhoSelim()
    {
        return selim[0].ObterTamanho();
    }

    void DefinirLargurtaPedal(int l)
    {
        for (int i = 0; i < 2; i++)
        {
            pedal[i].DefinirLargura(l);
        }
    }
    int ObterLarguraPedal()
    {
        return pedal[0].ObterLargura();
    }
};

int main()
{
    Bicicleta bike1; // declaração de uma instância chamada bike1 da clase Biciclet

    bike1.DefinirCor(4);
    bike1.DefinirDiametroRodas(5);
    bike1.DefinirTamanhoSelim(7);
    bike1.DefinirLargurtaPedal(6);

    cout << "cor: " << bike1.ObterCor() << endl;
    cout << "diametro das rodas: " << bike1.ObterDiametroRodas() << endl;
    cout << "selim: " << bike1.ObterTamanhoSelim() << endl;
    cout << "pedais: " << bike1.ObterLarguraPedal() << endl;
}
