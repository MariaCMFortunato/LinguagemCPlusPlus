# include <iostream>
#include <clocale>
#include <conio.h>

using namespace std;

class ContaBancaria{
private: //Por definição
    string numConta;
    string titular;
    double saldo;

public:
    void setNumConta(string conta){
        numConta = conta;
    } 

    void setTitular(string nome){
        titular = nome;
    } 

    void setSaldo(double saldo1){
        saldo = saldo1;
    } 

    string getNumConta(){
        return (numConta);
    }

    string getTitular(){
        return (titular);
    }

    double getSaldo(){
        return (saldo);
    }

    void iniciarConta ( string conta, string nome){
        setNumConta(conta);
        setTitular(nome); 
        setSaldo(0);
    }

    void depositarValor(double valor){
        getSaldo();
        setSaldo(getSaldo() + valor);
    }

    void retirarValor(double valor){
        getSaldo();
        setSaldo(getSaldo() - valor);     
    }

    void consultarSaldo(){
        cout<<endl<<"Saldo atual da conta é: "<<getSaldo();
    }

};

int main(){
        setlocale(LC_ALL,"Portuguese");
        int operacao;
        float montante = 0;
        string cliente, codConta;
        ContaBancaria cb1;
        
        do{
            cout<<endl<<"GESTÃO DA CONTA BANCÁRIA"<<endl;
            cout<<"----------------------------------"<<endl;
            cout<<endl<<" 1. Criação de uma conta bancária";
            cout<<endl<<" 2. Depósito";
            cout<<endl<<" 3. Levantamento";
            cout<<endl<<" 4. Consulta de saldo";
            cout<<endl<<" 0. Sair";
            cout<<endl<<" Digite a sua opcao: ";
            cin>>operacao;
            
            switch(operacao){
                case 0:
                    break;
                case 1:
                    system("cls");
                    getchar();
                    cout<<"Indique o Numero da conta: ";1
                    getline(cin, codConta);
                    cout<<"Indique o nome do cliente: ";
                    getline (cin, cliente);
                    cb1.iniciarConta ( codConta, cliente);
                    cout<<endl<<"Foi criada a conta número: "<<cb1.getNumConta();
                    cout<<endl<<"Titular da Conta: "<<cb1.getTitular();
                    cout<<endl<<"Saldo atual: "<<cb1.getSaldo();
                    break;

                case 2:
                    system("cls");
                    do{
                        cout<<"Indique o valor a depositar ";
                        cin>>montante;

                    }while(montante <= 0);
                    
                    cb1.depositarValor(montante);
                    cout<<endl<<"Saldo atual: "<<cb1.getSaldo();
                    break;

                case 3:
                    system("cls");
                    cout<<"Indique o valor a levantar ";
                    cin>>montante;
                    cb1.retirarValor(montante);
                    cout<<endl<<"Saldo atual: "<<cb1.getSaldo();
                    break;

                case 4:
                    system("cls");
                    cout<<endl<<"Saldo atual: "<<cb1.getSaldo();
                    break;
            }
            cout<<endl<<"Qualquer tecla para continuar"<<endl;
             getch();

        }while (true);

    return 0;
}