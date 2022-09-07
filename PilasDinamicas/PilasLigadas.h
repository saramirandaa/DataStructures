#pragma once
#include <iostream>
using namespace std;

struct Nodo
{
    int datos;
    Nodo* anterior;
};
class PilaLigada
{
public:
    PilaLigada();
    ~PilaLigada();
    void Insertar(int);
    int Extraer();
    void Consultar();
    void Mostrar();
private:
    Nodo *tope, *nodo, *extraido;


};