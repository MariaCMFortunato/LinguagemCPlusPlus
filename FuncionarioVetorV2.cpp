#include <iostream>
#include <sstream>
#include <vector>
#include <clocale>
#include <conio.h>

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
        system("cls");
        cout<<endl<<"Id\tNome\t\tSalario"<<endl;
        for(unsigned int i = 0; i < V.size(); i++){
            cout<<V[i].idFuncionario<<"\t";
            cout<<V[i].nomeFuncionario<<"\t";
            cout<<V[i].salarioFuncionario<<endl;
        }
        cout<<endl;
        cout<<endl<<"Digite Enter para continuar."<<endl;
        getch();
    }
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    //criar um objeto da classe Funcionario
    Funcionario F;
    int opcao = 0;

    do{
        system("cls");
        cout<<"Registo de funcion�rios"<<endl;
        cout<<"1 - Novo funcion�rio"<<endl;
        cout<<"2 - Lista de funcion�rios"<<endl;
        cout<<"0 - Sair"<<endl;
        cout<<"Digite a sua op��o: ";
        cin>>opcao;

        switch(opcao){
            case 0:
                exit(0);
            case 1:
                system("cls");
                cout<<"Digite o n�mero do funcion�rio: ";
                cin>>F.idFuncionario;
                getchar();
                cout<<"Digite o nomne do funcion�rio: ";
                //Necessita do #include <sstream>
                getline(cin, F.nomeFuncionario);
                cout<<"Digite o sal�rio do funcion�rio: ";
                cin>>F.salarioFuncionario;
                F.adicionarFuncionario(F);
                break;
            case 2:
                F.lista();
                break;
            default:
            cout<<endl<<"Op��o inv�lida!"<<endl;
            cout<<"Prima uma tecla para continuar ...";
            getch();
        }

    }while(true);
    
    return 0;
}