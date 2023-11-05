#include <iostream>
#include <vector>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    //Criar um novo vetore de 0 elementos do tipo int
    vector <int> meuVetor;

    //Adicionar o elemento 50 no fim do vetor
    meuVetor.push_back(50);
    cout<<endl<<"Situação do vetor:"<<endl;
    cout<<"Tamanho do vetor: "<<meuVetor.size(); // devolve o tamanho do vetor
    cout<<endl<<"Tamanho máximo do vetor: "<<meuVetor.max_size(); // devolve o tamanho máximo do vetor
    cout<<endl<<"Capacidade do vetor: "<<meuVetor.capacity(); // devolve a capacidade do vetor
    cout<<endl<<endl;

    // Reservar espaço para 100 elementos
    meuVetor.reserve(100);
    cout<<endl<<"Depois de reservar espaço para 100 elementos:"<<endl;
    cout<<"Tamanho do vetor: "<<meuVetor.size();
    cout<<endl<<"Tamanho máximo do vetor:"<<meuVetor.max_size();
    cout<<endl<<"Capacidade do vetor: "<<meuVetor.capacity();
    cout<<endl<<endl;

    // Reservar espaço para 100 elementos
    meuVetor.resize(200);
    cout<<endl<<"Depois de reservar espaço para 200 elementos:"<<endl;
    cout<<"Tamanho do vetor: "<<meuVetor.size();
    cout<<endl<<"Tamanho máximo do vetor:"<<meuVetor.max_size();
    cout<<endl<<"Capacidade do vetor: "<<meuVetor.capacity();
    cout<<endl<<endl;
    
    return 0;
}