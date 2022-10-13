#pragma once
#include <iostream>
using namespace std;

struct Numero
{
    int num;
    Numero* sig;
};

class ListaCircular
{
public:
    ListaCircular();
    ~ListaCircular();
    void Insertar(int);
    bool Buscar(int);
    void Mostrar();
    
private:
    Numero* cabecera, *final, *revisado, *nodo;
};