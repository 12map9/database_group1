//Practica 5
//Estudiante: Derigge Marco Arancibia Pol
//Programacion 2
#include <iostream>
 
using std::cout;
using std::endl;
using std::string;

//Definimos el tipo de dato: Persona.
class Persona 
{
 private:
  std::string nombre;
  int edad;

  void metodoPrivado() 
  { 
    std::cout << "Llamada privada dentro de la clase\n"; 
  }

 public:
  // Constructor sin argumentos
  Persona() 
  {
    std::cout << "Se llama al constructor sin argumentos\n";
    this->metodoPrivado();
  }
  // Constructor con nombre y edad
  Persona(std::string nombre, int edad) 
  {
    this->edad = edad;
    this->nombre = nombre;
  }

  int getEdad() 
  { 
    return this->edad;
  }

  void setEdad(int edad) 
  { 
    this->edad = edad; 
  }

  std::string getNombre() 
  { 
    return this->nombre; 
  }

  void setNombre(std::string nombre) 
  { 
    this->nombre = nombre; 
  }

  void saludar() 
  {
    std::cout << "El nombre del participante es: " << this->nombre << " y su edad es " << this->edad << "\n";
  }
};


int main()
{
   
   // Crear persona 
  Persona p1("Luis Gomez", 21);
  p1.saludar();
  // Obtener su edad
  int edad = p1.getEdad();
  // Crear otra persona, sin argumentos
  Persona p2;
  // Establecer sus valores
  p2.setEdad(1);
  p2.setNombre("John Galt");
  p2.saludar();
  
  Persona p3;
    p3.setEdad(11);
    p3.setNombre("Juan Perez");
    p3.saludar();

    Persona p4;
    p4.setEdad(12);
    p4.setNombre("Laura Torres");
    p4.saludar();

    Persona p5;
    p5.setEdad(32);
    p5.setNombre("Nicole Fuentes");
    p5.saludar();

    Persona p6;
    p6.setEdad(15);
    p6.setNombre("Javier Lopez");
    p6.saludar();

    Persona p7;
    p7.setEdad(19);
    p7.setNombre("Juana Lara");
    p7.saludar();

    Persona p8;
    p8.setEdad(22);
    p8.setNombre("Rodrigo Aguilar");
    p8.saludar();

    Persona p9;
    p9.setEdad(17);
    p9.setNombre("Alex Rios");
    p9.saludar();

    Persona p10;
    p10.setEdad(45);
    p10.setNombre("Santiago Peredo");
    p10.saludar();

    Persona p11;
    p11.setEdad(29);
    p11.setNombre("Sara Mamani");
    p11.saludar();

    Persona p12;
    p12.setEdad(9);
    p12.setNombre("Juan Camacho");
    p12.saludar();

    Persona p13;
    p13.setEdad(30);
    p13.setNombre("Joel Gonzales");
    p13.saludar();

    Persona p14;
    p14.setEdad(19);
    p14.setNombre("Camilo Polo");
    p14.saludar();

    Persona p15;
    p15.setEdad(13);
    p15.setNombre("Rafael Smith");
    p15.saludar();
    
} 