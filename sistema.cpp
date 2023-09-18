#include "sistema.h"
Sistema::Sistema()
{
}
void Sistema::agregar_inicio(const Neurona &n)
{
    neuronas.push_front(n);
}
void Sistema::agregar_final(const Neurona &n)
{
    neuronas.push_back(n);
}
void Sistema::mostrar()
{
    for(auto it = neuronas.begin(); it != neuronas.end(); it++)
    {
        cout << *it << endl;
    }
}
