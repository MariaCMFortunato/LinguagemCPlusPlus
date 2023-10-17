#include <iostream>
#include <clocale>
#include <conio.h>

using namespace std;

class Calculadora {
    private: // desnecess�rio dado quie � private por defeito
    float n1, n2;

    public:

    void setN1 (float num1){
        n1 = num1;
    }

    void setN2 (float num2){
        n2= num2;
    }

    float getN1(){
        return(n1);
    }

    float getN2(){
        return(n2);
    }

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
    float x = 0, y = 0;
    char operacao;
    Calculadora c1;
    
do{
    cout<<endl<<"CALCULADORA ELEMENTAR";
    cout<<endl<<"*************************************";
    cout<<endl<<"Qual a opera��o que deseja efetuar?";
    cout<<endl<<"Somar (+)";
    cout<<endl<<"Subtrair (-)";
    cout<<endl<<"Multiplicar (*)";
    cout<<endl<<"Dividir(/)";
    cout<<endl<<"X para sair";
    cout<<endl<<"Digite a sua op��o: ";
    cin>>operacao;

    if(operacao == 'x' || operacao == 'X'){
        break;
    }

    if(operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/'){
        cout<<"Operacao inv�lida"<<endl;
        getch();
        continue; // volta ao inicio do ciclo do/while (neste caso)
    }

    
    cout<<endl<<"Indique o primeiro numero: ";
    cin>>x;

    cout<<endl<<"Indique o segundo numero: ";
    cin>>y;

    //c1.n1= n1;
    //c1.n2 = n2;
    c1.setN1(x);
    c1.setN2(y);

    switch (operacao){
        case '+': 
            cout<<endl<<" A soma de "<<x;
            cout<<" com "<<y;
            cout<<" � igual a "<<c1.somar ();
            break;
        
       case '-': 
            cout<<endl<<" A diferen�a entre "<<x;
            cout<<" e "<<y;
            cout<<" � igual a "<<c1.substrair ();
            break;

        case '*': 
            cout<<endl<<" A multiplica��o de "<<x;
            cout<<" por "<<y;
            cout<<" � igual a "<<c1.multiplicar ();
            break;

         case '/': 
            cout<<endl<<" A divisao de "<<x;
            cout<<" por "<<y;
            cout<<" � igual a "<<c1.dividir ();
            break;
    
        default:
            cout<<endl<<"Opeera��o inv�lida!";
            break;
    }

    cout<<endl<<"Digite qualquer tecla para continuar";
    getch();

}while (true);//O programa repete at� que o utilizador digite um carcater
}