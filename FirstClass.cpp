#include<iostream>
#include<stdlib.h>
//Declaración de una clase.
using namespace std;

class Alumno
{
	private:	//variables de la función
		string name;
		string last_name;
		int notes[5];
		bool activate;
	public: 
    Alumno(string, string, bool=true);
			//Parametros de la función
		void set_name (string); //se registra el nombre del objeto.
		string get_name();
		void show_info();
};

//implementacion de la clase.
			//FUNCION CONSTRUCTORA: lleva siempre el mismo tipo de la clase.
Alumno :: Alumno(string nam, string last, bool act)
{
	//referencias a las variables de la clase declaradas anteriormente.
	name=nam;
	last_name=last;
	activate=act;
}
//setea el nombre al nombre que queramos registar.
void Alumno::set_name(string nam)
{
	name=nam;
	return; 
}

//esta funcion devuelve el valor de la variable
string Alumno::get_name()
{
	return name;
}

//muestra el registro del alumno.
void Alumno::show_info()
{
	cout<<last_name<<","<<name<<endl;
	cout<<"activate: "<< activate <<"\n\n"<<endl;
	return;
}

int main()
{
	//Crear instancias (objetos) de la clase alumno.
	Alumno student_1=Alumno("Stark", "Anthony");
	Alumno student_2=Alumno("Wayne", "Bruce");
	Alumno student_3=Alumno("Allen", "Barry");
	Alumno student_4=Alumno("Stark", "Arya");
	Alumno student_5=Alumno("Ketchum", "Ash");

	//en este apartado se muestra la información.
	student_1.show_info();
	student_2.show_info();
	student_3.show_info();
	student_4.show_info();
	student_5.show_info();

	student_1.set_name("Tony");
	student_1.show_info();

	system("pause");
	return 0;
}
