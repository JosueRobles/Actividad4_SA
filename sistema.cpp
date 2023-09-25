#include "sistema.h"
#include <fstream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

Sistema::Sistema()
{
}
void Sistema::agregar_inicio(const Neurona &n)
{
    neuronas.insert(neuronas.begin(),n);
}
void Sistema::agregar_final(const Neurona &n)
{
    neuronas.push_back(n);
}
void Sistema::mostrar()
{
    for(size_t i = 0; i<neuronas.size(); i++)
    {
        Neurona &n = neuronas[i];
        cout << n;
    }
}
size_t Sistema::size()
{
    return neuronas.size();
}
void Sistema::guardar()
{
    ofstream archivo("neuronas.txt");
    if (archivo.is_open()){
        for(size_t i=0; i<neuronas.size();i++){
            Neurona &n = neuronas[i];
            archivo << n.getId() << endl;
            archivo << n.getVoltaje() << endl;
            archivo << n.getPos_x() << endl;
            archivo << n.getPos_y() << endl;
            archivo << n.getRed() << endl;
            archivo << n.getGreen() << endl;
            archivo << n.getBlue() << endl;
        }
    }
    archivo.close();
}
void Sistema::guardar_tabla()
{
    ofstream archivo("neuronas_tabla.txt");
    if (archivo.is_open()){
        archivo << left;
        archivo << setw(11) << "ID";
        archivo << setw(11) << "Voltaje";
        archivo << setw(11) << "Posicion X";
        archivo << setw(11) << "Posicion Y";
        archivo << setw(11) << "Red";
        archivo << setw(11) << "Green";
        archivo << setw(11) << "Blue";
        archivo << endl;
        for(size_t i=0; i<neuronas.size();i++){
            Neurona &n = neuronas[i];
            archivo << n;
        }
    }
    archivo.close();
}
void Sistema::recuperar()
{
    ifstream archivo("neuronas.txt");
    if(archivo.is_open()){
        int id, pos_x, pos_y, red, green, blue;
        float voltaje;
        string temp;
        Neurona n;
        while(true){
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            getline(archivo, temp);
            id=atoi(temp.c_str());
            n.setId(id);
            getline(archivo, temp);
            voltaje=atof(temp.c_str());
            n.setVoltaje(voltaje);
            getline(archivo, temp);
            pos_x=atoi(temp.c_str());
            n.setPos_x(pos_x);
            getline(archivo, temp);
            pos_y=atoi(temp.c_str());
            n.setPos_y(pos_y);
            getline(archivo, temp);
            red=atoi(temp.c_str());
            n.setRed(red);
            getline(archivo, temp);
            green=atoi(temp.c_str());
            n.setGreen(green);
            getline(archivo, temp);
            blue=atoi(temp.c_str());
            n.setBlue(blue);

            agregar_inicio(n);
        }
    }
}
