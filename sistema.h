#ifndef SISTEMA_H
#define SISTEMA_H
#include <iostream>
#include <iomanip>
#include <list>
#include "neurona.h"
using namespace std;
class Sistema
{
    list<Neurona> neuronas;
public:
    Sistema();
    void agregar_inicio(const Neurona &n);
    void agregar_final(const Neurona &n);
    void mostrar();
};

#endif // SISTEMA_H
