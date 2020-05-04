#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


void nuevo_plato()
{
    cls();
    Plato reg;
    if (cargar_plato(&reg))
    {
        if (guardar_plato(reg))
        {
            cout << "EL PLATO SE CARGO CORRECTAMENTE.";
        }
        else
        {
            cout << "EL PLATO NO HA SIDO GUARDADO EN EL ARCHIVO.";
        }
    }
    else
    {
        cout << "No se pudo cargar el producto.";
    }
}
int buscar_plato(int buscar)
{
    Plato reg;
    int i=0;
    FILE *p;
    p = fopen(ARCHIVO_PLATOS, "rb");
    if (p == NULL)
    {
        return -2;
    }
    while (fread(&reg, sizeof(Plato), 1, p))
    {
        if (reg.id == buscar)
        {
            fclose(p);
            return i;
        }
        i++;
    }
    fclose(p);
    return -1;
}


bool cargar_plato(Plato *reg)
{
    int i;
    cout << "INGRESE ID DEL PLATO A CARGAR: ";
    cin >> reg->id;
    if(reg->id<0)
    {
        cout << "EL ID DEL PLATO DEBE SER MAYOR A 0." <<endl;
        return false;
    }
    i = buscar_plato(reg->id);
    if (i >= 0)
    {
        cout << "EL ID A CARGAR ES EXISTENTE." << endl;
        return false;
    }

    cout << "INGRESE EL NOMBRE DEL PLATO: ";
    cin.ignore();
    cin.getline(reg->nombre, 30);
    if(reg->nombre[0]=='\0')
    {
        cout << "EL NOMBRE DEL PLATO NO PUEDE ESTAR VACIO." <<endl;
        return false;
    }
    cout << "INGRESE EL COSTO DE PREPARACION: $";
    cin >> reg->costoPrep;
    if (reg->costoPrep < 0)
    {
        cout << "EL COSTO DE PREPARACION NO PUEDE SER UN VALOR NEGATIVO." <<endl;
        return false;
    }
    cout << "INGRESE EL VALOR DE VENTA: " ;
    cin >> reg->importe;

    if(reg->importe < 0)
    {
        cout << "EL VALOR NO PUEDE SER NEGATIVO." <<endl;
        return false;
    }
    if(reg->importe < reg->costoPrep)
    {
        cout << "EL IMPORTE NO PUEDE SER MENOR AL COSTO DE PREPARACION." <<endl;
        return false;
    }

    cout << "INGRESE EL TIEMPO DE PREPARACION: " ;
    cin >> reg->tiempoPrep;

    if(reg->tiempoPrep < 0)
    {
        cout << "EL TIEMPO DE PREPARACION DEBE SER MAYOR A 0." <<endl;
        return false;
    }
    cout << "INGRESE EL ID RESTAURANTE: ";
    cin >> reg->idRestaurante;
    if(reg->idRestaurante <0)
    {
        cout << "EL ID DEL RESTAURANTE DEBE SER MAYOR A 0." <<endl;
        return false;
    }
    cout << "INGRESE LA COMISION RESTAURANTE: ";
    cin >> reg->comision;
    if (reg->comision < 0 || reg->comision>100)
    {
        cout << "LA COMISION DEBE SER UN NUMERO ENTRE 0 Y 100." <<endl;
        return false;
    }
    cout << "INGRESE EL ID CATEGORIA: ";
    cin >> reg->idCategoria;
    if(reg->idCategoria<0)
    {
        cout << "LA CATEGORIA DEBE SER MAYOR A 0." <<endl;
        return false;
    }
    reg->estado= true;

    return true;
}

bool guardar_plato(Plato reg){
    bool ok;
    FILE *p;
    p = fopen(ARCHIVO_PLATOS, "ab");
    if (p == NULL){
        return false;
    }
    ok = fwrite(&reg, sizeof(Plato), 1, p);
    fclose(p);
    return ok;
}


#endif // FUNCIONES_H_INCLUDED
