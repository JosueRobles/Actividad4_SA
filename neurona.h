#ifndef NEURONA_H
#define NEURONA_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
class Neurona
{
    int id, posicion_x, posicion_y, red, green, blue;
    float voltaje;
public:
    Neurona();
    Neurona(int id, float voltaje, int posicion_x, int posicion_y, int red, int green, int blue);
    void setId(int v);
    int getId();
    void setVoltaje(float v);
    float getVoltaje();
    void setPos_x(int v);
    int getPos_x();
    void setPos_y(int v);
    int getPos_y();
    void setRed(int v);
    int getRed();
    void setGreen(int v);
    int getGreen();
    void setBlue(int v);
    int getBlue();
    friend ostream& operator<<(ostream &out, const Neurona &n)
    {
        out << left;
        out << setw(11) << n.id;
        out << setw(11) << n.voltaje;
        out << setw(11) << n.posicion_x;
        out << setw(11) << n.posicion_y;
        out << setw(11) << n.red;
        out << setw(11) << n.green;
        out << setw(11) << n.blue;
        out << endl;
        return out;
    }
    friend istream& operator>>(istream &in, Neurona &n)
    {
        cout << "Id: ";
        cin >> n.id;
        cout << "Voltaje: ";
        cin >> n.voltaje;
        cout << "Posicion en X: ";
        cin >> n.posicion_x;
        cout << "Posicion en Y: ";
        cin >> n.posicion_y;
        cout << "Red: ";
        cin >> n.red;
        cout << "Green: ";
        cin >> n.green;
        cout << "Blue: ";
        cin >> n.blue;
        return in;
    }
};

#endif
