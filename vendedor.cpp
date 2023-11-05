#include <iostream>
#include <clocale>
#include <vector>
#include <sstream>
#include <conio.h>

using namespace std;

class Vendedor{
    int idVendedor;
    string nome;
    string zona;
    double vendas;

    vector <Vendedor> R;

    public:
    void adicionarVendedor(Vendedor V){
        R.push_back(V);
    }

    void registarVendedor(){
        system("cls");
        cout<<"Registo de vendedor:"<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"Número de vendedor: ";
        cin>>idVendedor;
        getchar();
        cout<<"Nome: ";
        getline(cin, nome);
        getchar();
        cout<<"Zona: ";
        getline(cin, zona);
        cout<<"Vendas: ";
        cin>>vendas;
        cout<<"Prima uma tecla para continuar ...";
        getch();
    }

    void mostraDadosVend(Vendedor V, int num){
       for (unsigned int i = 0; i < R.size();i++){
            if(V.idVendedor == num){
                cout<<"Número: "<<V.idVendedor<<endl;
                cout<<"Nome: "<<V.nome<<endl;
                cout<<"Zona: "<<V.zona<<endl;
                cout<<"Venda: "<<V.vendas<<endl;
            }
        }
        cout<<"Prima uma tecla para continuar ...";
        getch();
    }

    void mostraVendZona(string z){
        double totalVendas;
        system("cls");
        cout<<"Vendas da zona "<<z<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"Vendedor \t\t Vendas";
        for (unsigned int i = 0; i < R.size();i++){
            if(Vendedor::zona == z){
                cout<<nome<<"\t\t";
                cout<<vendas<<endl;
                totalVendas += vendas;
            }
        }
        cout<<"Total de vendas da zona "<<z<<": "<<totalVendas<<endl;
        cout<<endl;
        cout<<"Prima uma tecla para continuar ...";
        getch();
    }
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao, num;
    string zona;
    Vendedor V1;
    vector <Vendedor> R;
    system("cls");
    do{
        system("cls");
        cout<<"EMPRESA ALFA, S. A."<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"SISTEMA DE GESTÃO DE VENDAS:"<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"1 - Registar vendedor"<<endl;
        cout<<"2 - Mostar dados de um vendedor"<<endl;
        cout<<"3 - Listar vendas de de uma zona"<<endl;
        cout<<"4 - Listar todas as vendas (com total geral)"<<endl;
        cout<<"5 - Eliminar um registo"<<endl;
        cout<<"0 - Sair"<<endl;
        cout<<"Digite a sua opção: ";
        cin>>opcao;

        switch(opcao){
            case 0:
                exit (0);
            case 1:
                system("cls");
                V1.registarVendedor();
                V1.adicionarVendedor(V1);
                break;
             case 2:
                system("cls");
                cout<<"Mostrar dados de um  vendedor:"<<endl;
                cout<<"-----------------------------------------------"<<endl;
                cout<<"Indique o número do vendedor: ";
                cin>>num;
                 V1.mostraDadosVend(V1, num);
                break;
            case 3:
                system("cls");
                cout<<"Listar as vendas de uma zona:"<<endl;
                cout<<"-----------------------------------------------"<<endl;
                cout<<"Indique a zona: ";
                getline(cin, zona);
                R.mostraVendZona(zona);
                break;
            
        }
        

    }while(true);

    return 0;
}

