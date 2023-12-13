#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

class Veiculo {
public:
    string marca;
    string modelo;
    string matricula;
    double preco;
};

class Stand {
private:
    vector<Veiculo> veiculos;

public:

void carregarDados()
{
    Veiculo automovel;
    ifstream file;
    vector<Veiculo> veiculos;
    file.open("registos.bin", std::ios::binary |std::ios::ate| std::ios::app |std::ios::out | std::ios::in);
        if(!file)
            cout<<"Não foi possível abrir o ficheiro!"<<endl;
        else
        {
            cout<<"Ficheiro aberto com sucesso!"<<endl;
      
            while (file.read(reinterpret_cast<char*>(&automovel), sizeof(Veiculo))) 
            {
                veiculos.push_back(automovel);
            }
        }
        system("pause");
    
}

    void registarVeiculo() 
    {
        system("cls");
        Veiculo novoVeiculo;
        cout << "Marca: ";
        cin >> novoVeiculo.marca;
        cout << "Modelo: ";
        cin >> novoVeiculo.modelo;
        cout << "Matricula: ";
        cin >> novoVeiculo.matricula;
        for (Veiculo veiculo : veiculos) {
            if (veiculo.matricula == novoVeiculo.matricula) {
                std::cout << "Matrícula já existe. Registo não permitido.\n";
                return;
            }
        }
        cout << "Preço: ";
        cin >> novoVeiculo.preco;

        veiculos.push_back(novoVeiculo);

        ofstream file("registos.bin", std::ios::binary | std::ios::app);
        file.write(reinterpret_cast<char*>(&novoVeiculo), sizeof(Veiculo));
        file.close();

        cout << "Veículo registado com sucesso.\n";
    }
    void listarVeiculos() const {
        system("cls");
        cout << setw(10) << "Marca" << setw(15) << "Modelo" << setw(15) << "Matricula" << setw(10) << "Preço" << "\n";
        cout << "----------------------------------------------"<<endl;

        for (Veiculo veiculo : veiculos) {
            cout << setw(10) << veiculo.marca << setw(15) << veiculo.modelo << setw(15) << veiculo.matricula << setw(10) << veiculo.preco << endl;
        }
        system("pause");
    }

    void pesquisarPorMatricula() const 
    {
        system("cls");
        string matricula;
        int existe = 0;
        cout << "Digite a matrícula a pesquisar: ";
        cin >> matricula;

        for (Veiculo veiculo : veiculos) 
        {
            if (veiculo.matricula == matricula) {
                cout << "Veículo encontrado:"<<endl;
                cout << "Marca: " << veiculo.marca <<endl;
                cout << "Modelo: " << veiculo.modelo <<endl;
                cout << "Matricula: " << veiculo.matricula <<endl;
                cout << "Preço: " << veiculo.preco << endl;
                existe = 1;
               system("pause");
            }
        }

        if (!existe)
        {
            cout << "Veículo não encontrado."<<endl;
            system("pause");
        }
    }

    void listarPorMarca() const {
        system("cls");
        string marca;
        cout << "Digite a marca a pesquisar: ";
        cin >> marca;

        cout << setw(10) << "Marca" << setw(15) << "Modelo" << setw(15) << "Matricula" << setw(10) << "Preço" << endl;
        std::cout << "----------------------------------------------"<<endl;

        for (Veiculo veiculo : veiculos) {
            if (veiculo.marca == marca) {
                cout << setw(10) << veiculo.marca << setw(15) << veiculo.modelo << setw(15) << veiculo.matricula << std::setw(10) << veiculo.preco << endl;
            }
        }
        system("pause");
    }

    void eliminarRegisto() {
        unsigned int numeroRegisto;
        cout << "Digite o número de registo a eliminar: ";
        cin >> numeroRegisto;

        if (numeroRegisto >= 1 && numeroRegisto <= veiculos.size()) {
            veiculos.erase(veiculos.begin() + numeroRegisto - 1);
            cout << "Registo eliminado com sucesso."<<endl;
        } else {
            cout << "Número de registo inválido."<<endl;
        }
    }
};

int main() {
    Stand stand;
    Veiculo automovel;
    ifstream file;
    vector<Veiculo> veiculos;
    int opcao;

    while (true) {
        system("cls");
        cout <<endl<< "Stand A Guiar, Lda."<<endl;
        cout<<"0-Carregar dados do ficheiro"<<endl;
        cout << "1-Registar viatura"<<endl;
        cout << "2-Listagem de viaturas"<<endl;
        cout << "3-Pesquisa por matrícula"<<endl;
        cout << "4-Listagem de viaturas por marca"<<endl;
        cout << "5-Eliminar um registo (Indicar o número de registo)"<<endl;
        cout << "6-Sair"<<endl;
        cout << "Digite a sua opção: "; 
        cin >> opcao;
        
        switch (opcao) {
            case 0:
                stand.carregarDados();
                break;
            case 1:
                stand.registarVeiculo();
                break;
            case 2:
                stand.listarVeiculos();
                break;
            case 3:
                stand.pesquisarPorMatricula();
                break;
            case 4:
                stand.listarPorMarca();
                break;
            case 5:
                stand.eliminarRegisto();
                break;
            case 6:
                cout << "Programa encerrado.\n";
                return 0;
            default:
                cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
