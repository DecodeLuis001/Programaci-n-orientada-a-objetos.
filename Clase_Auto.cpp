#include<iostream> 
#include<stdlib.h> 
#include<cstdio> 

using namespace std;

class Mecanismo
{ 
	protected:
		int H_P; 
		int Cilindros; 
		int kilometraje;
	public:
		Mecanismo(int H_P, int Cilindros, int kilometraje); 
		void Mostrar_Mecanismo();
};

class Interior
{
	protected:
		string Material;
		int Capacidad;
		string Clase;
	public:
		Interior(string Material, int Capacidad, string Clase); 
		void Mostrar_Interior();
};

class Ferrari : public Mecanismo, public Interior
{
	protected:
		int Serie;
		string Modelo;
	public:
		Ferrari(int H_P, int Cilindros, int kilometraje, string Material, int Capacidad, string Clase, int Serie, string Modelo);
		void Mostrar_Ferrari();
};

class Deportivo: public Mecanismo, public Interior
{
	protected:
		int Carreras_Ganadas;
		string Piloto;
	public:
		Deportivo(int H_P, int Cilindros, int kilometraje, string Material, int Capacidad, string Clase, int Carreras_Ganadas, string Piloto);
		void Mostrar_Deportivo();
};

class Motocicleta : public Mecanismo
{
	protected:
		string tipo;
	public:
		Motocicleta(int H_P, int Cilindros, int kilometraje, string tipo);
		void Mostrar_Motocicleta();
};

Mecanismo::Mecanismo(int _H_P, int _Cilindros, int _kilometraje)
{ 
	H_P=_H_P;
	Cilindros=_Cilindros; 
	kilometraje=_kilometraje;
}

void Mecanismo::Mostrar_Mecanismo()
{
	cout<<"Potencia del motor: "<<H_P<<" HP"<<endl; 
	cout<<"Fuerza de: "<<Cilindros<<" Cilindros"<<endl;
	cout<<"Rendimiento promedio del motor: "<<kilometraje<<" km por litro"<<endl;
}

Interior::Interior(string _Material, int _Capacidad, string _Clase)
{ 	
	Material=_Material;
	Capacidad=_Capacidad;
	Clase=_Clase;
}

void Interior::Mostrar_Interior()
{
	cout<<"Material estructural del automovil: "<<Material<<endl;
	cout<<"Número de pasajeros permitivos: "<<Capacidad<<endl;
	cout<<"Clase: "<<Clase<<endl;
}

Ferrari::Ferrari(int _H_P, int _Cilindros, int _kilometraje, string _Material, int _Capacidad, string _Clase, int _Serie, string _Modelo): Mecanismo(_H_P, _Cilindros, _kilometraje), Interior(_Material, _Capacidad, _Clase)
{
	Serie=_Serie;
	Modelo=_Modelo;
}

void Ferrari::Mostrar_Ferrari()
{
	Mostrar_Mecanismo();
	Mostrar_Interior();
	cout<<"Número de serie: "<<Serie<<endl;
	cout<<"Modelo: "<<Modelo<<endl;
}

Deportivo::Deportivo(int _H_P, int _Cilindros, int _kilometraje, string _Material, int _Capacidad, string _Clase, int _Carreras_Ganadas, string _Piloto): Mecanismo(_H_P, _Cilindros, _kilometraje), Interior(_Material, _Capacidad, _Clase)
{ 	
	Carreras_Ganadas=_Carreras_Ganadas;
	Piloto=_Piloto;
}

void Deportivo::Mostrar_Deportivo()
{
	Mostrar_Mecanismo();
	Mostrar_Interior();
	cout<<"Carreras ganadas: "<<Carreras_Ganadas<<endl;
	cout<<"Su conductor es: "<<Piloto<<endl;
}

Motocicleta::Motocicleta(int _H_P, int _Cilindros, int _kilometraje, string _tipo): Mecanismo(_H_P, _Cilindros, _kilometraje)
{
	tipo=_tipo;
}

void Motocicleta::Mostrar_Motocicleta()
{ 	
	Mostrar_Mecanismo();
	cout<<"Clase: "<<tipo<<endl;
}

int main()
{
	//Declaración e inicialización de objetos.
	Ferrari Tornado(555, 8, 102, "Tugsteno y hierro", 4, "Clasico", 010205, "1988"); 
	Motocicleta Cobra(725, 2, 20, "Uso Rudo");
	Deportivo Bat(1001, 8, 120, "Cromo y hierro", 2, "Deportivo", 77, "Fernando Alfaro."); 

	printf("\n");
	printf("Marca: Ferrari; Clase: Tornado.\n");
	Tornado.Mostrar_Ferrari();
	printf("\n");

	printf("Marca: Harley Davidson; Clase: Heatshield, Cobra.\n");
	Cobra.Mostrar_Motocicleta();
	printf("\n");

	printf("Marca: Lamborghini; Clase: Murcielago 2019\n");
	Bat.Mostrar_Deportivo();
	printf("\n");

	return 0;
}