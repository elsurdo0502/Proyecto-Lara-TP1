#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

///CONSTANTES ARCHIVOS
const char *ARCHIVO_PLATOS="Datos\Platos.dat";
const char *ARCHIVO_CLIENTES="Datos\Clientes.dat";
const char *ARCHIVO_PEDIDOS="Datos\Pedidos.dat";

///PROTOTIPOS DE FUNCIONES
void menu();
void submenu_Platos();
void nuevo_plato();
bool cargar_plato(Plato *);
int buscar_plato(int);
bool guardar_plato(Plato);



#endif // PROTOTIPOS_H_INCLUDED
