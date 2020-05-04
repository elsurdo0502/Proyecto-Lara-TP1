#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED

struct Platos{
    int id;
    char nombre[50];
    float costoPrep;
    float importe;
    int tiempoPrep;
    int idRestaurante;
    int comision;
    int idCategoria;
    bool estado;
};

#endif // TIPOS_H_INCLUDED
