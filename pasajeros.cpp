#include <iostream>
#include <queue>
using namespace std;

struct cliente
{
    string nombre;
    int edad;
    char discapacidad;
    int destino;
};

void clientes();
void ganancias();
void despliegueDestinos();

queue <cliente> colaPasajeros; //declaracion de la queue de tipo Cliente
queue <cliente> pasajerosDiscapacitados; //declaracion de la queue de tipo cliente para pasajeros con discapacidad


int main()
{

    bool stop=true;
    int opt;
    cout<<"Bienvenido"<<endl;

    do
    {
        cout<<"===================== M E N U ====================="; cout<<endl;
        cout<<"               1. Ingresar clientes."<<endl;
        cout<<"               2. Mostrar Ganancias."<<endl;
        cout<<"               3. Iniciar abordaje."<<endl;
        cout<<"               4. Salir. "<<endl;
        cout<<"Opcion: ";
        cin>>opt;
        cout<<"===================================================="<<endl;
        
        
        switch (opt)
        {
            case 1:
                clientes();
            break;
            case 2:
                ganancias();
            break;
            case 3:
                //samuel's code.
            break;
            case 4:
                stop=false;
            break;

            default:
                cout<<"Opcion no valida. Intente de nuevo.";
            break;
        }
        
    } while (stop);
    
}

void clientes()
{

    cliente unPasajero; //declaracion de objeto para acceder a la estructura.

    
    //inicio de recoleccion de datos.
    int num=0;
    int cont=0;

    cout<<"Bienvenido. "<<endl;
    cout<<"Numero de pasajero a ingresar: ";
    cin>>num;
    cin.ignore();

    while (cont<num)
    {
        cout<<"Ingrese el nombre del pasajero "<<cont+1<<": "<<endl;
        getline(cin, unPasajero.nombre);
        cout<<"Ingrese la edad del pasajero "<<cont+1<<": "<<endl;
        cin>>unPasajero.edad;
        cout<<"Tiene alguna discapacidad? (s/n): "<<endl;
        cin>>unPasajero.discapacidad;
        cout<<"Destinos posibles: "<<endl;
        despliegueDestinos();
        bool opt2=true;
        while(opt2)
        {
            cout<<"Elija su opcion: ";
            cin>>unPasajero.destino;
            if (unPasajero.destino>8)
            {
                cout<<"Opcion no valida. Intentelo de nuevo. "<<endl;
                opt2=true;
            }else opt2=false;
            
            
        }
        
        cout<<"Redirigiendo al sistema de registro de maletas..."<<endl;
        //ernesto's code.
        cin.ignore();
        
        if (unPasajero.discapacidad=='s' || unPasajero.edad>65)
        {
            pasajerosDiscapacitados.push(unPasajero); //cola pasajeros discapacitados y adultos mayores
        } else colaPasajeros.push(unPasajero); //cola pasajeros 
        cont++;
    }
    
}

void despliegueDestinos(){

    cout<<"Destino 1."<<endl;
    cout<<"Destino 2."<<endl;
    cout<<"Destino 3."<<endl;
    cout<<"Destino 4."<<endl;
    cout<<"Destino 5."<<endl;
    cout<<"Destino 6."<<endl;
    cout<<"Destino 7."<<endl;
    cout<<"Destino 8."<<endl;

}

void ganancias(){
    cout<<"ganancias."<<endl;
}