#include "../include/acervo.hpp"
#include <iostream>
#include <list>
using namespace std;

int main(){
    Acervo* ac = new Acervo();
    /*ac->estatistica();
    ac->info_midia();
    Midia* m = ac->search_midia("Cd 1");
    ac->edit_midia(m);
    ac->estatistica();
    ac->info_midia();*/
    int op = 0;
    while(op!=6){
        cout << "------------Acervo--------------\n";
        cout << "- 1- Inserir midia -------------\n";
        cout << "- 2- Ver informações -----------\n";
        cout << "- 3- Editar mídia --------------\n";
        cout << "- 4- Remover mídia -------------\n";
        cout << "- 5- Ver Estatísticas ----------\n";
        cout << "- 6- Sair ----------------------\n";
        cout << "--------------------------------\n";
        cin>>op;
        switch(op){
            case 1:{
                int op1=0;
                cout << "- 1- Livro -----------------\n";
                cout << "- 2- Cd --------------------\n";
                cout << "- 3- Dvd -------------------\n";
                cin>> op1;
                if(op1 == 1){
                    Livro* l = new Livro();
                    cin>>*l;
                    Midia* m = l;
                    ac->insert_midia(m);
                    cout << "Midia inseria!\n";
                }
                if(op1 == 2){
                    Cd* c = new Cd();
                    cin>>*c;
                    Midia* m = c;
                    ac->insert_midia(m);
                    cout << "Midia inseria!\n";
                }
                if(op1 == 3){
                    Dvd* d = new Dvd();
                    cin>>*d;
                    Midia* m = d;
                    ac->insert_midia(m);
                    cout << "Midia inseria!\n";
                }
                break;
            }
            case 2:{
                ac->info_midia();
                break;
            }
            case 3:{
                int op2=0;
                string t;
                cout << "- 1- Livro -----------------\n";
                cout << "- 2- Cd --------------------\n";
                cout << "- 3- Dvd -------------------\n";
                cin>> op2;
                if(op2 == 1){
                    getline(cin, t);
                    cout << "Digite o titulo do livro:\n";
                    getline(cin, t);
                    Midia* m = ac->search_midia(t);
                    ac->edit_midia(m);
                }
                if(op2 == 2){
                    getline(cin, t);
                    cout << "Digite o nome do CD:\n";
                    getline(cin, t);
                    Midia* m = ac->search_midia(t);
                    ac->edit_midia(m);
                }
                if(op2 == 3){
                    getline(cin, t);
                    cout << "Digite o titulo do DVD:\n";
                    getline(cin, t);
                    Midia* m = ac->search_midia(t);
                    ac->edit_midia(m);
                }
                break;
            }
            case 4:{
                int op3=0;
                cout << "- 1- Livro -----------------\n";
                cout << "- 2- Cd --------------------\n";
                cout << "- 3- Dvd -------------------\n";
                cin>> op3;
                if(op3 == 1){
                    string t;
                    getline(cin, t);
                    cout << "Digite o titulo do livro:\n";
                    getline(cin, t);
                    Midia* m = ac->search_midia(t);
                    ac->remove_midia(m);
                    cout << "Livro removido!\n";
                }
                if(op3 == 2){
                    string t;
                    getline(cin, t);
                    cout << "Digite o nome do CD:\n";
                    getline(cin, t);
                    Midia* m = ac->search_midia(t);
                    ac->remove_midia(m);
                    cout << "Cd removido!\n";
                }
                if(op3 == 3){
                    string t;
                    getline(cin, t);
                    cout << "Digite o titulo do DVD:\n";
                    getline(cin, t);
                    Midia* m = ac->search_midia(t);
                    ac->remove_midia(m);
                    cout << "Dvd removido!\n";
                }
                break;
            }
            case 5:
                ac->estatistica();
                break;
        }
    }
}