#include <iostream>
#include <clocale>
#include <vector>
#include <sstream>
#include <conio.h>

using namespace std;

class Vendedor{
    // são sempre private
    int idVendedor;
    string nomeVend, zonaVend;
    float vendasVend;

    public:
    void setIdVendedor(int id){
        idVendedor = id;
    }
    
    void setNomeVend(string nome){
        nomeVend = nome;
    }

    void setZonaVend(string zona){
        zonaVend = zona;
    }

    void setVendasVend (float vendas){
        vendasVend = vendas;
    }

    int getIdVendedor(){
        return idVendedor;
    }

    string getNomeVend(){
        return nomeVend;
    }

    string getZonaVend(){
        return zonaVend;
    }

    float getVendasVend(){
        return vendasVend;
    }

    void registarVendedor(){
        system("cls");
        cout<<"Registo de vendedor:"<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"Número de vendedor: ";
        cin>>idVendedor;
        getchar();
        cout<<"Nome: ";
        getline(cin, nomeVend);
        getchar();
        cout<<"Zona: ";
        getline(cin, zonaVend);
        cout<<"Vendas: ";
        cin>>vendasVend;
        cout<<endl<<"Registo de Vendedor efetuado. ";
        cout<<"Prima uma tecla para continuar ...";
        getch();
    }

    void mostraDados(){
        system("cls");
        cout<<idVendedor<<"\t";
        cout<<nomeVend<<"\t\t";
        cout<<zonaVend<<"\t";
        cout<<vendasVend<<endl;
    }
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao, numVend;
    string zona;
    bool existe = false;
    Vendedor V1;
    float totalVendas = 0;
    vector <Vendedor> VET;// criar dentro do main

    system("cls");
    do{
        system("cls");
        cout<<"EMPRESA ALFA, S. A."<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"SISTEMA DE GESTÃO DE VENDAS:"<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"1 - Registar vendedor"<<endl;
        cout<<"2 - Mostar dados de um vendedor"<<endl;
        cout<<"3 - Listar vendas de uma zona"<<endl;
        cout<<"4 - Listar todas as vendas (com total geral)"<<endl;
        cout<<"5 - Eliminar um registo"<<endl;
        cout<<"0 - Sair"<<endl;
        cout<<"Digite a sua opção: ";
        cin>>opcao;

        switch(opcao){
            case 0:
                exit (0);
            case 1:
                V1.registarVendedor();
                VET.push_back(V1);
                break;
             case 2:
                system("cls");
                cout<<"Mostrar dados de um  vendedor:"<<endl;
                cout<<"-----------------------------------------------"<<endl;
                cout<<"Indique o número do vendedor: ";
                cin>>numVend;
                for(unsigned int i = 0; i< VET.size(); i++){
                    if (VET[i].getIdVendedor() == numVend){
                        cout<<"Número: "<<VET[i].getIdVendedor()<<endl;
                        cout<<"Nome: "<<VET[i].getNomeVend()<<endl;
                        cout<<"Zona: "<<VET[i].getZonaVend()<<endl;
                        cout<<"Venda: "<<VET[i].getVendasVend()<<endl;
                        existe = true;
                        break;
                    }
                    if(!existe){
                        cout<<endl<<"O vendedor não existe.";
                    }
                    cout<<endl<<"Pressione qualquer tecla para continuar ...";
                    getch();
                    break;
                }
        
                break;
            case 3:
                system("cls");
                cout<<"Listar as vendas de uma zona:"<<endl;
                cout<<"-----------------------------------------------"<<endl;
                cout<<"Indique a zona: ";
                getchar();
                getline(cin, zona);
                existe = false;
                cout<<endl<<"Id\tNome\t\tZona\tVendas";
                for(unsigned int i = 0; i< VET.size(); i++){
                    if (VET[i].getZonaVend() == zona){
                        cout<<"Número: "<<VET[i].getIdVendedor()<<endl;
                        cout<<"Nome: "<<VET[i].getNomeVend()<<endl;
                        cout<<"Zona: "<<VET[i].getZonaVend()<<endl;
                        cout<<"Venda: "<<VET[i].getVendasVend()<<endl;
                        existe = true;
                    }
                    if(!existe){
                        cout<<endl<<"Não existem vendas para a zona indicada.";
                    }
                    cout<<endl<<"Pressione qualquer tecla para continuar ...";
                    getch();
                    break;  
                }             
                break;
            case 4:
                system("cls");
                cout<<"Listar geral das vendas:"<<endl;
                cout<<"-----------------------------------------------"<<endl;
                cout<<endl<<"Id\tNome\t\tZona\tVendas"<<endl;
                for(unsigned int i = 0; i< VET.size(); i++){
                    VET[i].mostraDados();
                    totalVendas += VET[i].getVendasVend();
                }
                cout<<endl<<"Total de Vendas: "<<totalVendas;
                cout<<endl<<"Pressione qualquer tecla para continuar ...";
                getch();
                break;
            case 5:
                
                break;
            default:
                cout<<"Opção inválida!";

        }
        

    }while(true);

    return 0;
}

