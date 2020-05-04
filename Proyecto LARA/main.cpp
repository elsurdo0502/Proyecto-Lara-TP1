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
    while(true)
    {
        cls();
        menu_Principal();
        cout << " INGRESE UNA OPCION: ";
        cin >> opc;

        switch(opc)
        {
        case 1:
            cls();
            submenu_Platos();

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

        default:
            cout << "POR FAVOR INGRESE UNA OPCION CORRECTA." <<endl;
            break;
        }
        cin.ignore();
        anykey();
    }
    return false;
}
