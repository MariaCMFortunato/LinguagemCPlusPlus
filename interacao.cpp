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
        cout<<"A idade � "<<idade<<endl;
        cout<<"Ainda � menor de idade!";
     }
     else{
        
        cout<<"A idade � "<<idade<<endl;
        cout<<"J� � maior de idade!"<<endl;
     }

    return 0;

}