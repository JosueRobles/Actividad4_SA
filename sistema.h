#ifndef SISTEMA_H
#define SISTEMA_H
#include <iostream>
#include <iomanip>
#include <vector>
#include "neurona.h"
using namespace std;
class Sistema
{
    vector <Neurona> neuronas;
public:
    Sistema();
    void agregar_inicio(const Neurona &n);
    void agregar_final(const Neurona &n);
    void mostrar();
    size_t size();
    void guardar();
    void guardar_tabla();
    void recuperar();
};

#endif // SISTEMA_H
