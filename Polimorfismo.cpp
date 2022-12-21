/*
Polimorfirmo:
Cualidad que tienen los objetos para realizar una misma acción pero de diferente forma.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

//Esta es la superclase; 
//Dicha clase se usara de referencia para tomar los datos y aplicar el concepto de herencia.
class Persona
{
	private:
		string Nombre;
		int Edad; 
	public:
		Persona(string, int);
		//Función virual indicia que se esta haciendo uso del polimorfismo.
		virtual void mostrar(); //Solo se usa en la clase padre o superclase.
};

//Comienzan las clases derivadas de la superclase.
class Alumno : public Persona //Se hace la herencia de las variables que estan en la superclase.
{
	private:
		float Nota_Final;
	public:
		Alumno(string, int, float); //Toma los argumentos ha usar como parámetros.
		void mostrar();
};

class Profesor : public Persona
{
	private:
		string Materia;
	public:
		Profesor(string, int, string); //Toma los argumentos ha usar como parámetros.
		void mostrar();
};

Persona::Persona(string nombre, int edad) //Se define el constructor de la clase que inicializara 
//los parámetros a usar dentro de la misma clase.
{
	Nombre=nombre;
	Edad=edad;
}

Alumno::Alumno(string nombre, int edad, float nota_final) : Persona(nombre, edad)
{
	Nota_Final=nota_final;
}

Profesor::Profesor(string nombre, int edad, string materia) : Persona(nombre, edad)
{
	Materia=materia;
}

void Persona::mostrar() //Se crea para imprimir la informació al usuario.
{
	cout<<"Nombre: "<<Nombre;
	cout<<"\n";
	cout<<"Edad: "<<Edad;
	cout<<"\n";
}

void Alumno::mostrar()
{
	Persona::mostrar(); //Llama por referenia el método de la clase persona.
	//Evita que se crea un bucle por el hecho de que ambas funciones se llaman igual.
	cout<<"Calificiación final: "<<Nota_Final;
	cout<<"\n";
}

void Profesor::mostrar()
{
	Persona::mostrar();
	cout<<"U.D.A que imparte: "<<Materia;
	cout<<"\n";
}

int main()
{
	//Se inicia el creado de los objetos a utilizar.
	Persona *Vector[3]; //El número refleja cuantos objetos se van a crear.

	Vector[0]= new Persona("Amanda", 30);
	Vector[1]= new Alumno("Samuel", 20, 7.0);
	Vector[2]= new Profesor("Cisneros", 40, "Cálculo");
	//El comando new indica el uso de memoria dinámica.
	//El orden en como se crea el vector dinámico debe ser igual al orden...
	//en como se pusieron las variables a usar tanto en la superclase como en las subclases.
	//--->USO DEL POLIMORFISMO
	cout<<"----->Se usa la superclase persona.\n";
	Vector[0]->mostrar();
	//Se indica a la variable vector que utilice el método mostrar.
	cout<<"------>Se usa la subclase alumno.\n";
	Vector[1]->mostrar();
	cout<<"------>Se usa la subclase profesor.\n";
	Vector[2]->mostrar();
	cout<<"\n";

	return 0;
}