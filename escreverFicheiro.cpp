#include <iostream>
#include <clocale>
#include <fstream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    char carater;
    //criar uma variável do tipo ofstream
    ofstream ficheiro ("teste.txt");
    /* podemos identificar o ficheiro com o nome completo:
        G:\\Documentos\\MeusProjetos\\Linguagem_CPlusPlus\\output\\teste.txt
        se não o fizermos ele será escrito no diretório de output
    */
    cout<<"Digite um texto. (Ctrl+Z para terminar):";
    while(cin.get(carater)){
        ficheiro.put(carater);
    }
    return 0;

}