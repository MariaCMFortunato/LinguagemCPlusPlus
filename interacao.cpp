#include <iostream>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade;
     cout<<"Bom dia!" <<endl;
     cout<<"Digite a sua idade: ";
     cin >>idade;

     if(idade < 18){
        cout<<"A idade é "<<idade<<endl;
        cout<<"Ainda é menor de idade!";
     }
     else{
        
        cout<<"A idade é "<<idade<<endl;
        cout<<"Já é maior de idade!"<<endl;
     }

    return 0;

}