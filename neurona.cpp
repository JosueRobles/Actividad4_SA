#include "neurona.h"
Neurona::Neurona()
{
}
Neurona::Neurona(int id, float voltaje, int posicion_x, int posicion_y, int red, int green, int blue)
{
    this->id = id;
    this->voltaje = voltaje;
    this->posicion_x = posicion_x;
    this->posicion_y = posicion_y;
    this->red = red;
    this->green = green;
    this->blue = blue;
}
void Neurona::setId(int v)
{
    id = v;
}
int Neurona::getId()
{
    return id;
}
void Neurona::setVoltaje(float v)
{
    voltaje = v;
}
float Neurona::getVoltaje()
{
    return voltaje;
}
void Neurona::setPos_x(int v)
{
    posicion_x = v;
}
int Neurona::getPos_x()
{
    return posicion_x;
}
void Neurona::setPos_y(int v)
{
    posicion_y = v;
}
int Neurona::getPos_y()
{
    return posicion_y;
}
void Neurona::setRed(int v)
{
    red = v;
}
int Neurona::getRed()
{
    return red;
}
void Neurona::setGreen(int v)
{
    green = v;
}
int Neurona::getGreen()
{
    return green;
}
void Neurona::setBlue(int v)
{
    blue = v;
}
int Neurona::getBlue()
{
    return blue;
}
