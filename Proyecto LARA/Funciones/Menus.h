#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED

void menu_Principal()
{
    setColor(YELLOW);
    cout << "********************************************" << endl;
    cout << "*\t\tPEDIDOS LARA               *" << endl;
    cout << "*\t\tMENU PRINCIPAL             *" << endl;
    cout << "********************************************" << endl;
    cout << "* 1) PLATOS                                *" << endl;
    cout << "*                                          *" << endl;
    cout << "* 2) CLIENTES                              *" << endl;
    cout << "*                                          *" << endl;
    cout << "* 3) PEDIDOS                               *" << endl;
    cout << "*                                          *" << endl;
    cout << "* 4) REPORTES                              *" << endl;
    cout << "*                                          *" << endl;
    cout << "* 5) CONFIGURACION                         *" << endl;
    cout << "********************************************" << endl;
    cout << "* 0) SALIR DEL PROGRAMA                    *" << endl;
    cout << "********************************************" << endl;

}

void menu_Platos()
{
    setColor(YELLOW);
    cout << "********************************************" << endl;
    cout << "*\tPEDIDOS LARA                       *" << endl;
    cout << "*\tMENU PLATOS                        *" << endl;
    cout << "********************************************" << endl;
    cout << "* 1) NUEVO PLATO                           *" << endl;
    cout << "*                                          *" << endl;
    cout << "* 2) MODIFICAR PLATO                       *" << endl;
    cout << "*                                          *" << endl;
    cout << "* 3) LISTAR PLATO POR ID                   *" << endl;
    cout << "*                                          *" << endl;
    cout << "* 4) PLATOS POR RESTAURANT                 *" << endl;
    cout << "*                                          *" << endl;
    cout << "* 5) LISTAR TODOS LOS PLATOS               *" << endl;
    cout << "*                                          *" << endl;
    cout << "* 6) ELIMINAR PLATO                        *" << endl;
    cout << "********************************************" << endl;
    cout << "* 0) VOLVER AL MENU PRINCIPAL              *" << endl;
    cout << "********************************************" << endl;

}

#endif // MENUS_H_INCLUDED
