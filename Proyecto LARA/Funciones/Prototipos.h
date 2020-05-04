#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

///CONSTANTES ARCHIVOS
const char *ARCHIVO_PLATOS="Datos/Platos.dat";
const char *ARCHIVO_CLIENTES="Datos/Clientes.dat";
const char *ARCHIVO_PEDIDOS="Datos/Pedidos.dat";

///PROTOTIPOS DE FUNCIONES
void menu_Principal();
void menu_Platos();
void nuevo_plato();
bool cargar_plato(Plato *);
int buscar_plato(int);
bool guardar_plato(Plato);
void modificar_plato();
Plato leer_plato(int);
void listar_producto(Plato);
bool sobrescribir_plato(Plato, int);
void listar_plato(Plato);
void titulo_plato();
void listar_plato_x_id();
void baja_plato();
void listar_platos();
int cantidad_platos();
void listar_platos_x_restaurante();
int buscar_restaurante(int);

#endif // PROTOTIPOS_H_INCLUDED
