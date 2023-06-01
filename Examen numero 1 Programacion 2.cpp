#include <iostream>
#include <string>

using std:string;//Funciona parcialmente

// PUNTOS: 5
// Implementar la funcion imprimirX que imprime la figura de una X 
// La función recibe el tamaño de la diagonal de la X. Asumir que el
// tamaño es siempre un numero impar.
// Ejemplo cuando size es 5
// *       *
//   *   *
//     *
//   *   *
// *       *
void imprimirX(int size)
{
    //Imprimir
    for(int i = 0; i < n; i++)
    {
        (imprimir + i)-> x1 = i;//Primera linea asterisco
        (imprimir + i)-> x2 = i + 1;//Segunda linea asterisco
        (imprimir + i)-> x3 = i - 1;//Tercera linea asterisco
        (imprimir + i)-> x4 = i + 1;//Cuarta linea asterisco
        (imprimir + i)-> x5 = i + 1;//Quinta linea asterisco
    }

    for(int i = 0; i < n; i++)
    {
        cout << "(( " << imprimir + i << "): " << x = i << ", " << x = i + 1 << ", " <<<< x = i -1 << ", " << x = i + 1 << x = i + 1 << ") " << endl;
    }

}

//PUNTOS: 5
//Implementar la función RECURSIVA sumarArreglo que suma los elementos del arreglo y
//devuelve la suma total. Los parámetros son un arreglo de enteros y el tamaño del arreglo
//Ejemplo si el arreglo es tiene 3,0,2,8,9 la función devuelve 22
int sumarArreglo(int arreglo[], int size)
{
    //Sumar
    for(int i = 0; i <n; i++)
    {
        (sumar + i)-> s1 = i;
        (sumar + i)-> s2 = i + 1;
        (sumar + i)-> s3 = i + 2;
        (sumar + i)-> s4 = i + 3;
        (sumar + i)-> s5 = i + 4;
        (sumar + i)-> sTotal;
    }

    for(int i = 0; i < 0; i++)
    {
        cout << "(( " << sumar + i << "): " << s1 = i << ", " << s2 = i + 1 << ", " << << s3 = i + 2 << ", " << s4 = i + 3 << ", " << s5 = i + 4 <<"= " << sTotal <<")" << endl;
    }
}

//PUNTOS: 5
//Implementar una función encriptar que recibe como parámetro un puntero a un arreglo de caracteres
//y un entero que representa el desplazamiento. La función debe usar el algoritmo de cifrado de César
//que consite en desplazar cada letra del texto original a un número fijo de posiciones en el alfabeto
//de 26 caracteres que usamos (A a la Z). Por ejemplo la si el caracter a encriptar es 'A', y el
//desplazamiento es 4, ese caracter se encripta a 'E'. Si el caracter es 'a' y desplazamiento 4, se encripta a 'e'.
//Si el caracter es 'X' y el desplazamiento es 4 se encripta a 'B' 
//Si el caracter es otro caracter que no sea una letra del alfabeto, no se modifica.
//Por ejemplo si el arreglo contiene 'A','b','X' y el desplazamiento es 4, eso se encripta a: 'E','f','B'.
//La funcion debe modificar los elementos del arreglo de chars y al final mostrar el arreglo encriptado en pantalla
//Nota: asumir que el ultimo elemento del arreglo es el caracter de terminación '\0'
void encriptar(char *cadena, int desplazamiento)
{
    //Encriptar
    for(int i = 0; i < n; i++)
    {
        (encriptar+i)-> e1 = i;//Desde a
        (encrptar+i)-> e2 = i + 1;//Hasta z
    }

    for(int i = 0; i < n; i++)
    {
        cout << "(( " << encriptar + i << "): " << e1 = i << ", " << e2 = i + 1 << ")" << emdl;
    }
}

//PUNTOS: 10
//Considerar la estructura Persona de abajo. Asumir que cada persona solo tiene solo un nombre y un apellido, y su edad en años
//Usar el archivo de texto adjunto llamado personas.txt que contiene la lista de personas.
//Implementar una función leerPersonas que recibe como parámetro el nombre del archivo y procesa el archivo y 
//crea una lista enlazada simple de Personas.
//La lista debe estar ordenada por edad, es decir la persona más joven al principio de la lista
//Una vez creada la lista, mostrar la lista en pantalla en el siguiente formato:
//   [Perez, Juan] Edad: 35
//   [Mamani, Maria] Edad: 67   

struct Persona 
{
    string nombre;
    string apellido;
    int edad;
    Persona *next;
};

void leerPersonas(string nombreArchivo)
{
    //Personas
    for(int i = 0; i < 0; i++)
    {
        (persona + i)-> nombre1 = i;
        (persona + i)-> nombre2 = i;
        (persona + i)-> apellido1 = i + 1;
        (persona + i)-> apellido2 = i + 1;
        (persona + i)-> edad1 = i;
        (persona + i)-> edad2 = i + 1;
    }

    for(int i = 0; i < n; i++)
    {
        cout << "( " << persona + i << "): " << nombre1 = i << ", " << nombre2 = i + 1 <<", " << apellido1 = i << ", " << apellido2 = i + 1 << ", " << edad1 = i << ", " << edad2 = i +1 << ") " << endl;
    }
}

//Funcion principal
int main()
{
    //Hacer llamadas a todas las funciones a implementar para probarlas.
    int x, a, e, edad;
    cout << "Los datos a imprimir son: " << endl;
    cin >> x;
    cout << "Los datos a sumar son: " << endl;
    cin >> a;
    cout << "Los datos a encriptar son: " << endl;
    cin >> e;
    cout << "Las personas a imprimir son: " << endl;
    cin >> edad;

    Imprimir *imprimirse[x];
    Arreglo *arreglos[a];
    Encriptar *encriptarse[e];
    Persona *personas[n];
    
    //Imprimir
    for(int i = 0; i < n; i++)
    {
        (imprimir + 1)-> x1 = i;
        (imprimir + i)-> x2 = i + 1;
    }

    for(int i = 0; i < n;: i++)
    {
        cout << "(( " << imprimir + i << "): " << x1 = i << ", " << x2 = x + 1 << ") " << endl;
    }

    //Sumar
    for(int i = 0; i < n; i++)
    {
        (sumar + i)-> a1 = i;
        (sumar + i)-> a2 = i + i;
    }

    for(int i = 0; i < 0; i++)
    {
        cout << "(( " << sumar + i << "): " << a1 = i << ", " << a2 = i + 1 << ") " << endl;
    }

    //Encriptar
    for(int i = 0; i < n; i++)
    {
        (encriptar + i)-> e1 = i;
        (encriptar + i)-> e2 = i + 1;
    }

    for(int i = 0; i < n; i++)
    {
        cout << "(( " << encriptar + i << "): " << e1 = i << ", " << e2 = i + 1 << ") ";
    }
    
    //Persona
    for(int i = 0; i < n; i++)
    {
        (persona + i)-> edad1 = i;
        (persona + i)-> edad2 = i + 1 ;
    }

    for(int i = 0; i < n; i++)
    {
        cout<<"(( " << persona + i << "): " << edad1 = i <<", " << edad2 = i + 1 << ")" << endl;
    }
    
    //Vaciar los datos del sistema
    delete[] Imprimir;
    delete[] Sumar;
    delete[] Encriptar;
    delete[] Persona;

    return 0;
}
