#include<iostream> 
#include<stdlib.h> 
#include<cstdio> 

using namespace std;

//Declaracion de todas las clases.
class Empleado
{ 
	protected: //Atributos float salario;
		int tiempo;
		float salario;
	public: //Métodos 
		Empleado(float s, int t);
		void Mostrar_Empleado(); 
};

class Jefe: public Empleado
{
	protected:
		float Ingreso_Capital; 
	public:
		Jefe(float salario, int tiempo, float Ingreso_Capital); 
		void Mostrar_Jefe();
};

class Supervisor: public Empleado
{
	public:
		Supervisor(float salario, int tiempo); 
		void aumento(float salario);
		void Mostrar_Supervisor(); 
};

class Personal: public Empleado
{
	protected:
		int despidos; 
	public:
		Personal(float salario, int tiempo, int despidos); 
		void Mostrar_Personal();
		void despedir(int despidos);
};

class SAT: public Empleado
{
	protected:
		float ganancia; //Porcentaje de aumento que le corresponde al empleado.
	public:
		SAT(float salario, int tiempo, int ganancia);
		void Mostrar_SAT();
};

Empleado::Empleado(float _salario, int _tiempo)
{ 
	salario= _salario;
	tiempo= _tiempo;
}

void Empleado::Mostrar_Empleado()
{
	cout<<"Sueldo de inicio laboral: "<<salario<<endl;
	cout<<"Experiencia laboral de: "<<tiempo<<" años"<<endl;
}

Jefe::Jefe(float _salario, int _tiempo, float _Ingresos_Capital): Empleado(_salario, _tiempo)
{ 
	Ingreso_Capital= _Ingresos_Capital;
}

void Jefe::Mostrar_Jefe()
{
	Mostrar_Empleado();
	cout<<"Ingresos industriales capitales: "<<Ingreso_Capital<<endl;
}

Supervisor::Supervisor(float _salario, int _tiempo): Empleado(_salario, _tiempo)
{
	//Vacio: solo se ocupa con motivos de polimorfirmo y herencia.
}

void Supervisor::Mostrar_Supervisor()
{
	Mostrar_Empleado();
}

void Supervisor::aumento(float _salario)
{
	printf("Aumento otorgado: %0.2f\n", _salario);
	salario+=_salario;
	printf("Salario actual: %0.2f\n", salario);
}

Personal::Personal(float _salario, int _tiempo, int _despidos): Empleado(_salario,_tiempo)
{
	despidos=_despidos;
}

void Personal::Mostrar_Personal()
{
	Mostrar_Empleado();
	cout<<"Despidos: "<<despidos<<endl;
}

void Personal::despedir(int _despidos)
{
	despidos+=_despidos;
}

SAT::SAT(float _salario, int _tiempo, int _ganancia): Empleado(_salario, _tiempo)
{
	ganancia=_ganancia;
}

void SAT::Mostrar_SAT()
{
	Mostrar_Empleado();
	cout<<"Aumento salarial: "<<ganancia<<"%"<<endl;
}

int main()
{
	//Inicializacón de los objetos y declaraciones de los mismos.
	Jefe Luis(150000, 11, 30000);
	Supervisor Mario(14000, 9);
	Personal Ana(5500, 5, 5);
	SAT Jorge(4000, 2, 30);

	printf("\n");
	printf("Posición: Jefe de planta.\n");
	printf("Nombre: Luis Núñez.\n");
	Luis.Mostrar_Jefe();
	printf("\n");

	printf("Posición: Gerente y supervisor: Área de procesado.\n");
	printf("Nombre: Mario Piña Moncada.\n");
	Mario.Mostrar_Supervisor();
	Mario.aumento(5500);
	printf("\n");

	printf("\n");
	printf("Posición: Laboratorista.\n");
	printf("Nombre: Ana Karen Espitia.\n");
	Ana.Mostrar_Personal();
	printf("\n");

	printf("Posición: Ejecutivo administrativo.\n");
	printf("Nombre: Jorge Armando Paredes.\n");
	Jorge.Mostrar_SAT();
	printf("\n");

	return 0;
}