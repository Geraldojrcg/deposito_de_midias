#include "dvd.hpp"
Dvd::Dvd(string titl, string dir, string dur, string c, int ano){
    setTipo("dvd");
    titulo = titl;
    diretor = dir;
    duracao = dur;
    classificacao = c;
    setAno(ano);
}
string Dvd::getTitulo(){
    return titulo;
}
void Dvd::setTitulo(string t){
    titulo = t;
}
string Dvd::getDiretor(){
    return diretor;
}
void Dvd::setDiretor(string d){
    diretor = d;
}
string Dvd::getDuracao(){
    return duracao;
}
void Dvd::setDuracao(string d){
    duracao = d;
}
string Dvd::getClassificacao(){
    return classificacao;
}
void Dvd::setClassificacao(string c){
    classificacao = c;
}