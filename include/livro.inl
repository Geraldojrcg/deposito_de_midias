#include "livro.hpp"
Livro::Livro(string titl, string aut, string ed, string s, int ano){
    setTipo("livro");
    titulo = titl;
    autor = aut;
    editora = ed;
    ISBN = s;
    setAno(ano);
}
string Livro::getTitulo(){
    return titulo;
}
void Livro::setTitulo(string t){
    titulo = t;
}
string Livro::getAutor(){
    return autor;
}
void Livro::setAutor(string a){
    autor = a;
}
string Livro::getEditora(){
    return editora;
}
void Livro::setEditora(string ed){
    editora = ed;
}
string Livro::getISBN(){
    return ISBN;
}
void Livro::setISBN(string s){
    ISBN = s;
}