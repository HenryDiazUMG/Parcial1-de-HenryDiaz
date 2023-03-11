//Ejercicio#1

/*#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int numero;
    do{
        cout<<"Escriba un valor numerico: ";
        cin>>numero;

    }while((numero<1) || (numero>1000));

    for(int i=1; i<=10; i++){
        cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
    }
    return 0;
}*/


//Ejercicio#2

#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Ingrese un numero de la semana, puede ser (1-7): ";cin>>n;
    switch(n){
        case 1:{
            cout<<"Hoy es Lunes: Si es laboral";
            break;
        }
        case 2:{
            cout<<"Hoy es martes: Si es laboral";
            break;
        }
        case 3:{
            cout<<"Hoy es miércoles: Si es laboral";
            break;
        }
        case 4:{
            cout<<"Hoy es jueves: Si es laboral ";
            break;
        }
        case 5:{
            cout<<"Hoy es viernes: Si es laboral";
            break;
        }
        case 6:{
            cout<<"Hoy es sabado: Si es laboral";
            break;
        }
            break;
        case 7:{
            cout<<"Hoy es domingo: No es laboral";
            break;
        }
    }
}