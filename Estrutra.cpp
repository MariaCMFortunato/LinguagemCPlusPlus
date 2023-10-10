#include <iostream>
#include <clocale>
#include <string>
#include <conio.h>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;


struct Pessoa{
    int nif;
    string nome;
    float peso;
    float altura;
    char genero;
};

Pessoa P[100]; // armazena 5 registos

void menu();
void inserirRegisto();
void listagemGeral();
void listagemGenero(char genero);
void listagemIMC();
void carrega();
void alterarRegisto();
void exportar ();
void exportar1 ();

int main() {
    setlocale(LC_ALL, "Portuguese");
    //carrega();
    string wnif, wpeso, waltura, wgenero; // variáveis temporárias
    ifstream ficheiro ("funcionarios.csv");
    if (ficheiro.fail()){
        cout<<endl<<"Erro na abertura do ficheiro. Prima uma tecla para continuar."<<endl;
        getch();
    }
    else{
        //carregar os dados do ficheiro para a estrutura
        int i = 0;
        while(!ficheiro.eof()){
            getline(ficheiro, wnif,';');
            getline(ficheiro, P[i].nome, ';');
            getline(ficheiro, wpeso, ';');
            getline(ficheiro, waltura, ';');
            getline(ficheiro, wgenero);

            stringstream x (wnif);
            x>>P[i].nif;

            stringstream y (wpeso);
            y>>P[i].peso;

            stringstream z (waltura);
            z>>P[i].altura;

            stringstream w (wgenero);
            w>>P[i].genero;

            i++;
        }
    }
    ficheiro.close();

    menu();
    return 0;
}

void menu(){
    int escolha;
    system("cls");
    cout<<"Registos de Entidades"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"1 - Inserir Registo"<<endl;
    cout<<"2 - Alterar Registo (nome da entidade)"<<endl;
    cout<<"3 - Lista de entidades do género masculino"<<endl;
    cout<<"4 - Lista de entidades do género feminino"<<endl;
    cout<<"5 - Lista de entidades do com os valores de IMC"<<endl;
    cout<<"6 - Lista geral de entidades"<<endl;
    cout<<"7 - Exportar para CSV (Overwrite)"<<endl;
    cout<<"8 - Exportar para CSV (Append)"<<endl;
    cout<<"0 - Sair"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Digite a sua escolha: ";
    cin>>escolha;

    switch(escolha){
        case 1:
            inserirRegisto();
            menu();
            break;
        case 2:
            alterarRegisto();
            menu();
            break;
        case 3:
            listagemGenero('M');
            menu();
            break;
        case 4:
            listagemGenero('F');
            menu();
            break;
        case 5:
            listagemIMC();
            menu();
            break;
        case 6:
            listagemGeral();
            menu();
            break;
        case 7:
            exportar ();
            menu();
            break;
       case 8:
            exportar1 ();
            menu();
            break;
        case 0: 
            exit(0);//Substitui o return - sair do programa;
    }
}

void inserirRegisto(){
    int wnif;
    system("cls");
    cout<<"Novo registo:"<<endl;

    // considerando o nif o campo chave
    cout<<"NIF:";
    cin>>wnif;
    for(int i = 0; i < 100;i++){
        if (P[i].nif == 0){
            P[i].nif = wnif;
            // solicitar o resto dos dados
            cout<<endl<<"Nome: ";
            getchar();
            getline(cin, P[i].nome);
            cout<<"Peso: ";
            cin>>P[i].peso;
            cout<<"Altura: ";
            cin>>P[i].altura;
            cout<<"Género (mM / fF): ";
            cin>>P[i].genero;
            cout<<endl<<"Registo efetuado. Prima uma tecla para continuar."<<endl;
            break;
        }
    } 
    getch();
}

void listagemGeral(){
    system("cls");
    cout<<"Listagem Geral"<<endl;
    cout<<"NIF\t\tNome\t\t\tPeso\tAltura\tGénero"<<endl;
    cout<<"------------------------------------------------";
    for(int i = 0; i < 100; i++){
        if (P[i].nif != 0){
            cout<<endl<<P[i].nif;
            cout<<"\t"<<P[i].nome;
            cout<<"\t\t"<<P[i].peso;
            cout<<"\t"<<P[i].altura;
            cout<<"\t"<<P[i].genero;
        }
    }
    cout<<endl<<"Fim da listagem. Prima uma tecla para continuar."<<endl;
    getch();
}

void listagemGenero(char genero){
    system("cls");
    cout<<"Listagem do genero "<< genero<<endl;
    cout<<"NIF\t\tNome\t\t\tPeso\tAltura\tGénero"<<endl;
    cout<<"------------------------------------------------";
    for(int i = 0; i < 100; i++){
        if (P[i].genero == genero){
            cout<<endl<<P[i].nif;
            cout<<"\t"<<P[i].nome;
            cout<<"\t\t"<<P[i].peso;
            cout<<"\t"<<P[i].altura;
            cout<<"\t"<<P[i].genero;
        }
    }
    cout<<endl<<"Fim da listagem. Prima uma tecla para continuar."<<endl;
    getch();
}

void listagemIMC(){
    system("cls");
    cout<<"Listagem Geral com IMC"<<endl;
    cout<<"NIF\t\tNome\t\t\tPeso\tAltura\tGénero\tIMC"<<endl;
    cout<<"------------------------------------------------";
    for(int i = 0; i < 100; i++){
        if (P[i].nif != 0){
            cout<<endl<<P[i].nif;
            cout<<"\t"<<P[i].nome;
            cout<<"\t\t"<<P[i].peso;
            cout<<"\t"<<P[i].altura;
            cout<<"\t"<<P[i].genero;
            cout<<"\t"<<setprecision(2)<<P[i].peso/(pow(P[i].altura,2));
        }
    }
    cout<<endl<<"Fim da listagem. Prima uma tecla para continuar."<<endl;
    getch();
}

void carrega(){
    P[0].nif = 123456789;
    P[0].nome = "Ana Silva";
    P[0].peso = 60;
    P[0].altura = 1.65;
    P[0].genero = 'F';

    P[1].nif = 234567891;
    P[1].nome = "Rui Freitas";
    P[1].peso = 80;
    P[1].altura = 1.75;
    P[1].genero = 'M';

    P[2].nif = 134567892;
    P[2].nome = "Jorge Abreu";
    P[2].peso = 80;
    P[2].altura = 1.90;
    P[2].genero = 'M';

    P[3].nif = 345678912;
    P[3].nome = "Maria Alves";
    P[3].peso = 80;
    P[3].altura = 1.65;
    P[3].genero = 'F';
}

void alterarRegisto(){
    system("cls");
    cout<<"Alterar registo"<<endl;
    int wnif;
    bool existe = false;
    cout<<"Digite o NIF: ";
    cin>>wnif;
    for(int i = 0; i < 100; i++){
        if (P[i].nif == wnif){
            existe = true;
            cout<<endl<<P[i].nome;
            cout<<endl<<P[i].peso;
            cout<<endl<<P[i].altura;
            cout<<endl<<P[i].genero;
            cout<<endl<<"Digite o novop nome: ";
            getchar();
            getline(cin, P[i].nome);
            cout<<endl<<"Nome alterado. Prima uma tecla para continuar."<<endl;
            getch();
            break;
        }
    }
    if(!existe) {
        cout<<endl<<"NIF inexistente. Prima uma tecla para continuar."<<endl;
        getch();
    }
}

void exportar (){
    system("cls");
    cout<<"Exportar os dados para um ficheiro CSV eliminando a informação já existente.";
    ofstream ficheiro("funcionarios.csv");
    for(int i = 0; i < 100; i++){
        if(P[i].nif != 0){
            ficheiro<<P[i].nif<<';'<<P[i].nome<<';'<<P[i].peso<<';'
                    <<P[i].altura<<';'<<P[i].genero<<endl;
        }
    }
    ficheiro.close();//fechar ficheiro
    cout<<endl<<"Exportação efetuada. Prima uma tecla para continuar."<<endl;
    getch();
}

void exportar1 (){
    system("cls");
    cout<<"Exportar os dados para um ficheiro CSV acrescentando à informação já existente.";
    ofstream ficheiro("funcionarios.csv", ios::app);
    for(int i = 0; i < 100; i++){
        if(P[i].nif != 0){
            ficheiro<<P[i].nif<<';'<<P[i].nome<<';'<<P[i].peso<<';'
                    <<P[i].altura<<';'<<P[i].genero<<endl;
        }
    }
    ficheiro.close();//fechar ficheiro
    cout<<endl<<"Exportação efetuada. Prima uma tecla para continuar."<<endl;
    getch();
}