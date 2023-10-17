#include <iostream>
#include <clocale>
#include <conio.h>

using namespace std;

class Calculadora {
    public:
    float n1, n2;

    float somar (){
        return (n1 + n2);
    }

    float multiplicar (){
        return (n1 * n2);
    }

    float substrair (){
        return (n1 - n2);
    }

    float dividir (){
        if (n2 != 0){
                return (n1 / n2);
            }
        else{
            cout<<endl<<"Erro. Dividir por zero.";
            return 0;
        }
    }
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1 = 0, n2 = 0;
    char operacao;
    Calculadora c1;

do{
    cout<<endl<<"CALCULADORA ELEMENTAR";
    cout<<endl<<"*************************************";
    cout<<endl<<"Qual a operação que deseja efetuar?";
    cout<<endl<<"Somar (+)";
    cout<<endl<<"Subtrair (-)";
    cout<<endl<<"Multiplicar (*)";
    cout<<endl<<"Dividir(/)";
    cout<<endl<<"X para sair";
    cout<<endl<<"Digite a sua opção: ";
    cin>>operacao;

    if(operacao == 'x' || operacao == 'X'){
        break;
    }

    if(operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/'){
        cout<<"Operacao inválida"<<endl;
        getch();
        continue; // volta ao inicio do ciclo do/while (neste caso)
    }
    
    cout<<endl<<"Indique o primeiro numero: ";
    cin>>n1;

    cout<<endl<<"Indique o segundo numero: ";
    cin>>n2;

    c1.n1= n1;
    c1.n2 = n2;

    switch (operacao){
        case '+': 
            cout<<endl<<" A soma de "<<n1;
            cout<<" com "<<n2;
            cout<<" é igual a "<<c1.somar ();
            break;
        
       case '-': 
            cout<<endl<<" A diferença entre "<<n1;
            cout<<" e "<<n2;
            cout<<" é igual a "<<c1.substrair ();
            break;

        case '*': 
            cout<<endl<<" A multiplicação de "<<n1;
            cout<<" por "<<n2;
            cout<<" é igual a "<<c1.multiplicar ();
            break;

         case '/': 
            cout<<endl<<" A divisao de "<<n1;
            cout<<" por "<<n2;
            cout<<" é igual a "<<c1.dividir ();
            break;
    
        default:
            cout<<endl<<"Opeeração inválida!";
            break;
    }

    cout<<endl<<"Digite qualquer tecla para continuar";
    getch();

}while (true);//O programa repete até que o utilizador digite um carcater
}