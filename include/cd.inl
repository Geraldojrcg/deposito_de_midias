#include "cd.hpp"
Cd::Cd(string nm, string comp, string grv, int qtdf, int ano){
    setTipo("cd");
    nome = nm;
    compositor = comp;
    gravadora = grv;
    Qtd_faixas = qtdf;
    setAno(ano);
}
string Cd::getNome(){
    return nome;
}
void Cd::setNome(string n){
    nome = n;
}
string Cd::getCompositor(){
    return compositor;
}
void Cd::setCompositor(string c){
    compositor = c;
}
string Cd::getGravadora(){
    return gravadora;
}
void Cd::setGravadora(string gv){
    gravadora = gv;
}
int Cd::getQtd_faixas(){
    return Qtd_faixas;
}
void Cd::setQtd_faixas(int qtd){
    Qtd_faixas = qtd;
}