#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;



///LIBRERIAS
#include "Funciones/rlutil.h"
using namespace rlutil;

#include "Funciones/Tipos.h"
#include "Funciones/Prototipos.h"
#include "Funciones/Menus.h"
#include "Funciones/Funciones.h"


int main()
{

    int opc;
    setColor(GREEN);
    while(true)
    {
        cls();
        menu();
        cout << " Elija una Opcion: ";
        cin >> opc;

        switch(opc)
        {
        case 1:
            nuevo_plato();
            break;
        case 2:
            //listar_productos();
            break;
        case 3:
            //editar_producto();

            break;
        case 4:
            //listar_producto_x_id();
            break;
        case 6:
            //listar_productos_memdin();
            break;

        case 0:
            return 0;
            break;
        }
        cin.ignore();
        anykey();
    }
    return 0;
}
