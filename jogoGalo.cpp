#include <iostream>
#include <clocale>
#include <windows.h>


using namespace std;

char jogo[9] ={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int escolhidas[9]={0,0,0,0,0,0,0,0,0};
char jogador1= 'X';
char jogador2= 'O';

void mostra_tabuleiro(){
    system("cls");
    cout<<"Jogo do Galo"<<endl;
    //for(int i=0; i<10;i++){
    cout<<"-------"<<endl;
    cout<<"|"<<jogo[0]<<"|"<<jogo[1]<<"|"<<jogo[2]<<"|"<<endl;
    cout<<"|"<<jogo[3]<<"|"<<jogo[4]<<"|"<<jogo[5]<<"|"<<endl;
    cout<<"|"<<jogo[6]<<"|"<<jogo[7]<<"|"<<jogo[8]<<"|"<<endl;
    cout<<"-------"<<endl;
}

int ver_duplicado(int posicao){
while (escolhidas[posicao-1]==1){
    cout<<"Casa já preenchida.Indique outra posição. ";
    cin>>posicao;
}
return posicao;
}

bool ver_galo(){
    //C1 - 1º linha
    if(jogo[0]==jogo[1]&&jogo[0]==jogo[2]){
        cout<<endl<<"Fim do jogo!"<<endl;
        if (jogo[0]=='X')
            cout<<endl<<"Ganhou o jogador 1"<<endl<<endl;
        else
            cout<<endl<<"Ganhou o jogador 2"<<endl<<endl;
        system("pause");
        return(true);
    }

     //C2 - 1º coluna
    if(jogo[0]==jogo[3]&&jogo[0]==jogo[6]){
        cout<<endl<<"Fim do jogo!"<<endl;
        if (jogo[0]=='X')
            cout<<endl<<"Ganhou o jogador 1"<<endl<<endl;
        else
            cout<<endl<<"Ganhou o jogador 2"<<endl<<endl;
        return(true);
    }

     //C3 - 2º coluna
    if(jogo[1]==jogo[4]&&jogo[1]==jogo[7]){
        cout<<endl<<"Fim do jogo!"<<endl;
        if (jogo[1]=='X')
            cout<<endl<<"Ganhou o jogador 1"<<endl<<endl;
        else
            cout<<endl<<"Ganhou o jogador 2"<<endl<<endl;
        return(true);
    }


     //C4 - 3º coluna
    if(jogo[2]==jogo[5]&&jogo[2]==jogo[8]){
        cout<<endl<<"Fim do jogo!"<<endl;
        if (jogo[2]=='X')
            cout<<endl<<"Ganhou o jogador 1"<<endl<<endl;
        else
            cout<<endl<<endl<<"Ganhou o jogador 2"<<endl;
        return(true);
    }

     //C5 - 2º linha
     if(jogo[3]==jogo[4]&&jogo[3]==jogo[5]){
        cout<<endl<<"Fim do jogo!"<<endl;
        if (jogo[3]=='X')
            cout<<endl<<"Ganhou o jogador 1"<<endl<<endl;
        else
            cout<<endl<<"Ganhou o jogador 2"<<endl<<endl;
        return(true);
    }

     //C6 - 3º linha
    if(jogo[6]==jogo[7]&&jogo[6]==jogo[8]){
        cout<<endl<<"Fim do jogo!"<<endl;
        if (jogo[6]=='X')
            cout<<endl<<"Ganhou o jogador 1"<<endl<<endl;
        else
            cout<<endl<<"Ganhou o jogador 2"<<endl<<endl;
        return(true);
    }

     //C7 - diagonal esquerda
    if(jogo[0]==jogo[4]&&jogo[0]==jogo[8]){
        cout<<endl<<"Fim do jogo!"<<endl;
        if (jogo[0]=='X')
            cout<<endl<<"Ganhou o jogador 1"<<endl<<endl;
        else
            cout<<endl<<"Ganhou o jogador 2"<<endl<<endl;
        return(true);
    }

     //C8 - Diagonal direita
    if(jogo[2]==jogo[4]&&jogo[2]==jogo[6]){
        cout<<endl<<"Fim do jogo!"<<endl;
        if (jogo[2]=='X')
            cout<<endl<<"Ganhou o jogador 1"<<endl<<endl;
        else
            cout<<endl<<"Ganhou o jogador 2"<<endl<<endl;
        return(true);
    }
    return (false);
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int jogadas = 0;
    int jogX, jogO;
    mostra_tabuleiro();
    cout<<"Jogador 1: X"<<endl;
    cout<<"Jogador 2: O"<<endl;
    while (jogadas < 9){
        
        cout<<endl<<"Digite a posição para X: ";
        cin>>jogX;
        while(jogX<1 || jogX>9){
            cout<<"Deve indicar uma posição entre 1 e 9.";
            cin>>jogX;
        }
        if(escolhidas[jogX-1]==1){
            jogX=ver_duplicado(jogX);

        }
        jogo[jogX-1]='X';
        escolhidas[jogX-1]=1;
        //verificar se fez galo
        mostra_tabuleiro();
        if(ver_galo())
            break;
        if(jogadas>=9){
            cout<<endl<<"Ojogo está empatado."<<jogadas<<endl;
            Sleep(2000);
            break;
        } 

        cout<<endl<<"Digite a posição para O: ";
        cin>>jogO;
        while(jogO<1 || jogO>9){
            cout<<"Deve indicar uma posição entre 1 e 9.";
            cin>>jogO;
        }
        if(escolhidas[jogO-1]==1){
            jogO=ver_duplicado(jogO);

        }
        jogo[jogO-1]='O';
        escolhidas[jogO-1]=1;
        //verificar se fez galo
         mostra_tabuleiro();
        if(ver_galo())
            break;
        if(jogadas>=9){
            cout<<endl<<"Ojogo está empatado."<<jogadas<<endl;
            Sleep(2000);
            break;
        }
        jogadas++;

    }

    return 0;
}
