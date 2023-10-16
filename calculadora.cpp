#include <iostream>
#include <clocale>

using namespace std;

class Calculadora {
    float n1, n2;

    public:

    float somar (float n1, float n2){
        return (n1 + n2);
    }

    float multiplicar (float n1, float n2){
        return (n1 * n2);
    }

    float substrair (float n1, float n2){
        return (n1 - n2);
    }

    float dividir (float n1, float n2){
        return (n1 / n2);
    }
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1 = 0, n2 = 0;
    char operacao, opcao;
    Calculadora c1;

do{
    cout<<endl<<"Qual a operação que deseja efetuar?";
    cout<<endl<<"Somar (+)";
    cout<<endl<<"Subtrair (-)";
    cout<<endl<<"Multiplicar (*)";
    cout<<endl<<"Dividir(/)";
    cout<<endl<<"Digite a sua opção: ";
    cin>>operacao;

    cout<<endl<<"Indique o primeiro numero: ";
    cin>>n1;

    cout<<endl<<"Indique o segundo numero: ";
    cin>>n2;

    switch (operacao){
        case '+': 
            cout<<endl<<" A soma de "<<n1;
            cout<<" com "<<n2;
            cout<<" é igual a "<<c1.somar (n1, n2);
            break;
        
       case '-': 
            cout<<endl<<" A diferença entre "<<n1;
            cout<<" e "<<n2;
            cout<<" é igual a "<<c1.substrair (n1, n2);
            break;

        case '*': 
            cout<<endl<<" A multiplicação de "<<n1;
            cout<<" por "<<n2;
            cout<<" é igual a "<<c1.multiplicar (n1, n2);
            break;

         case '/': 
            cout<<endl<<" A divisao de "<<n1;
            cout<<" por "<<n2;
            cout<<" é igual a "<<c1.dividir (n1, n2);
            break;
    
        default:
            cout<<endl<<"Opeeração inválida!";
            break;
    }

    cout<<endl<<"Deseja efetuar outra operação? s/S";
    cin>>opcao;

}while (opcao == 's' || opcao == 'S');
}