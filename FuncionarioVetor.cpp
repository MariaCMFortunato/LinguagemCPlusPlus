#include <iostream>
#include <vector>
#include <clocale>

using namespace std;

class Funcionario{
    public:
    int idFuncionario;
    string nomeFuncionario;
    float salarioFuncionario;
    vector <Funcionario> V;
    //A classe vector cria uma matriz com os campos (colunas) da classe funcionario

    void adicionarFuncionario( Funcionario F){
        V.push_back(F);
    }

    void lista(){
        cout<<endl<<"Id\tNome\t\tSalario"<<endl;
        for(unsigned int i = 0; i < V.size(); i++){
            cout<<V[i].idFuncionario<<"\t";
            cout<<V[i].nomeFuncionario<<"\t";
            cout<<V[i].salarioFuncionario<<endl;
        }
        cout<<endl;
    }
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    //criar um objeto da classe Funcionario
    Funcionario F;

    F.idFuncionario = 100;
    F.nomeFuncionario = "Ana Silva";
    F.salarioFuncionario = 2000;

    F.adicionarFuncionario(F);

    F.idFuncionario = 300;
    F.nomeFuncionario = "Rui Alvers";
    F.salarioFuncionario = 1200;

    F.adicionarFuncionario(F);

    F.lista();

    return 0;
}