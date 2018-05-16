#ifndef livro_
#define livro_
#include "midia.hpp"
#include <iostream>
using namespace std;
class Livro: public Midia{
    private:
        string titulo;
        string autor;
        string editora;
        string ISBN;
    public:
        Livro(string titl, string aut, string ed, string s, int ano);
        Livro() = default;
        string getTitulo();
        void setTitulo(string t);
        string getAutor();
        void setAutor(string a);
        string getEditora();
        void setEditora(string ed);
        string getISBN();
        void setISBN(string s);
        friend ostream& operator<<(ostream& os, Livro &d){
            os << "----------------------------------------------\n";
            os << "Tipo: "<<d.getTipo()<<"\n"<<"Titulo: "<<d.getTitulo()<<"\n"<<"Autor: "<<d.getAutor()<<"\n"<<"Editora: "<<d.getEditora()<<"\n"
               <<"ISBN: "<<d.getISBN()<<"\n"<<"Ano de lançamento: "<<d.getAno()<<"\n";
            return os;
        }
        friend istream& operator>>(istream& is, Livro &d){
            string titl, aut, ed, isbn;
            int ano;
            d.setTipo("livro");
            cout<< "----------Insira as informações-----------\n";
            getline(is, titl);
            cout<<"Titulo: "; getline(is, titl); d.setTitulo(titl);
            cout<<"Autor: "; getline(is, aut); d.setAutor(aut);
            cout<<"Editora: "; getline(is, ed); d.setEditora(ed);
            cout<<"ISBN: "; getline(is, isbn); d.setISBN(isbn);
            cout<<"Ano de lançamento: "; is>>ano; d.setAno(ano);
            return is;
        }
        bool operator==(Livro &l){
            if(titulo == l.titulo && autor == l.autor && editora == l.editora && ISBN == l.ISBN && getAno()==l.getAno()){
                return true;
            }else{
                return false;
            }
        }
};
#include "livro.inl"
#endif