#include <iostream>
#include <clocale>
#include <fstream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    char carater;
    //criar uma vari�vel do tipo ifstream
    ifstream ficheiro ("teste.txt");
    /* podemos identificar o ficheiro com o nome completo:
        G:\\Documentos\\MeusProjetos\\Linguagem_CPlusPlus\\output\\teste.txt
        se n�o o fizermos ele ser� escrito no diret�rio de output
    */
    cout<<"Digite um texto. (Ctrl+Z para terminar):";
    while(ficheiro.get(carater)){
        cout<<carater;
    }
    return 0;

}