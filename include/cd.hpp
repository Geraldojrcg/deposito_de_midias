#ifndef cd_
#define cd_
#include "midia.hpp"
#include <iostream>
using namespace std;
class Cd: public Midia{
    private:
        string nome;
        string compositor;
        string gravadora;
        int Qtd_faixas; 
    public:
        Cd(string nm, string comp, string grv, int qtdf, int ano);
        Cd() = default;
        string getNome();
        void setNome(string n);
        string getCompositor();
        void setCompositor(string c);
        string getGravadora();
        void setGravadora(string gv);
        int getQtd_faixas();
        void setQtd_faixas(int qtd);
        friend ostream& operator<<(ostream& os, Cd &d){
            os << "----------------------------------------------\n";
            os << "Tipo: "<<d.getTipo()<<"\n"<<"Nome: "<<d.getNome()<<"\n"<<"Compositor: "<<d.getCompositor()<<"\n"<<"Gravadora: "<<d.getGravadora()<<"\n"
               <<"Quantidade de faixas: "<<d.getQtd_faixas()<<"\n"<<"Ano de lançamento: "<<d.getAno()<<"\n";
            return os;
        }
        friend istream& operator>>(istream& is, Cd &d){
            string nm, comp, grv;
            int ano, qtdf;
            d.setTipo("cd");
            cout<< "----------Insira as informações-----------\n";
            getline(is, nm);
            cout<<"Nome: "; getline(is, nm); d.setNome(nm);
            cout<<"Compositor: "; getline(is, comp); d.setCompositor(comp);
            cout<<"Gravadora: "; getline(is, grv); d.setGravadora(grv);
            cout<<"Quantidade de faixas: "; is>>qtdf; d.setQtd_faixas(qtdf);
            cout<<"Ano de lançamento: "; is>>ano; d.setAno(ano);
            return is;
        }
        bool operator==( Cd &l){
            if(nome == l.nome && compositor == l.compositor && gravadora == l.gravadora && Qtd_faixas == l.Qtd_faixas && getAno()==l.getAno()){
                return true;
            }else{
                return false;
            }
        }
};
#include "cd.inl"
#endif