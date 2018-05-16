#ifndef DVD_
#define DVD_
#include <iostream>
#include "midia.hpp"
using namespace std;
class Dvd: public Midia{
    private:
        string titulo;
        string diretor;
        string duracao;
        string classificacao;
    public:
        Dvd(string titl, string dir, string dur, string c, int ano);
        string getTitulo();
        void setTitulo(string t);
        string getDiretor();
        void setDiretor(string d);
        string getDuracao();
        void setDuracao(string d);
        string getClassificacao();
        void setClassificacao(string c);
        friend ostream& operator<<(ostream& os, Dvd &d){
            os << "----------------------------------------------\n";
            os << "Tipo: "<<d.getTipo()<<"\n"<<"Titulo: "<<d.getTitulo()<<"\n"<<"Diretor: "<<d.getDiretor()<<"\n"<<"Duração: "<<d.getDuracao()<<"\n"
               <<"Classificação: "<<d.getClassificacao()<<"\n"<<"Ano de lançamento: "<<d.getAno()<<"\n";
            return os;
        }
        friend istream& operator>>(istream& is, Dvd &d){
            string tp, titl, dir, dur, clas;
            int ano;
            d.setTipo("dvd");
            cout<<"Titulo: "; getline(is, titl); d.setTitulo(titl);
            cout<<"Diretor: "; getline(is, dir); d.setDiretor(dir);
            cout<<"Duração: "; getline(is, dur); d.setDuracao(dur);
            cout<<"Classificação: "; getline(is, clas); d.setClassificacao(clas);
            cout<<"Ano de lançamento: "; is>>ano; d.setAno(ano);
            return is;
        }
        bool operator==( Dvd &l){
            if(titulo == l.titulo && diretor == l.diretor && duracao == l.duracao && classificacao == l.classificacao && getAno()==l.getAno()){
                return true;
            }else{
                return false;
            }
        }
};
#include "dvd.inl"
#endif