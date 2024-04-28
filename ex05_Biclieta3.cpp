#include <iostream>

using namespace std;

// Definição classe Roda com atributo diametro
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

// Definição classe Selim com atributo tamanho
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
    Roda *rodas[4];
    Selim *selim[2];
    Pedal *pedal[2];

public:
    // Construtor que cria ponteiros para 4 instâncias já existentes
    Bicicleta(Roda *r1, Roda *r2, Roda *r3, Roda *r4, Selim *s1, Selim *s2, Pedal *p1, Pedal *p2)
    {
        rodas[0] = r1;
        rodas[1] = r2;
        rodas[2] = r3;
        rodas[3] = r4;
        selim[0] = s1;
        selim[1] = s2;
        pedal[0] = p1;
        pedal[1] = p2;
    }

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
            rodas[i]->DefinirDiametro(d);
        }
    }
    int ObterDiametroRodas()
    {
        return rodas[0]->ObterDiametro(); // Rodas[0] aponta para r1
    }

    void DefinirTamanhoSelim(int t)
    {
        for (int i = 0; i < 2; i++)
        {
            selim[i]->DefinirTamanho(t);
        }
    }
    int ObterTamanhoSelim()
    {
        return selim[0]->ObterTamanho();
    }

    void DefinirLarguraPedal(int l)
    {
        for (int i = 0; i < 2; i++)
        {
            pedal[i]->DefinirLargura(l);
        }
    }
    int ObterLarguraPedal()
    {
        return pedal[0]->ObterLargura();
    }
};

int main()
{
    Roda r1, r2, r3, r4;
    Selim s1, s2;
    Pedal p1, p2;
    Bicicleta bike1(&r1, &r2, &r3, &r4, &s1, &s2, &p1, &p2);
    // declaração de uma instância chamada bike1 da clase Bicicleta que recebe p+onteiros (endereços)
    // para quatro instâncias da classse Roda e 2 isntâncias da classe selim

    bike1.DefinirCor(4);
    bike1.DefinirDiametroRodas(5);
    bike1.DefinirTamanhoSelim(20);
    bike1.DefinirLarguraPedal(6);

    cout << endl;
    cout << "cor: " << bike1.ObterCor() << endl;
    cout << endl;
    cout << "Diametro das rodas: " << bike1.ObterDiametroRodas() << endl;
    cout << "Diametro da roda 1: " << r1.ObterDiametro() << endl;
    cout << "Diametro da roda 2: " << r2.ObterDiametro() << endl;
    cout << "Diametro da roda 3: " << r3.ObterDiametro() << endl;
    cout << "Diametro da roda 4: " << r4.ObterDiametro() << endl;
    cout << endl;
    cout << "Tamanho dos selins: " << bike1.ObterTamanhoSelim() << endl;
    cout << "Tamanho selim 1: " << s1.ObterTamanho() << endl;
    cout << "Tamanho selim 2: " << s2.ObterTamanho() << endl;
    cout << endl;
    cout << "Largura dos pedais: " << bike1.ObterLarguraPedal() << endl;
    cout << "Largura do pedal 1: " << p1.ObterLargura() << endl;
    cout << "Largura do pedal 2: " << p2.ObterLargura() << endl;
}
