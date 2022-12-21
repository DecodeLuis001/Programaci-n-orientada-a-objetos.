/*
1) Clase: 
	A) Agrupa atributos, propiedades o carcateristicas.
		Esto se refiere a los datos o variables que pertenecen a la clase.
		Además describen al objeto.
	B) Funciones miembro o métodos. 
		Funciones que procesan o manipulan las variables 

La sintaxis para declarar una clase es la siguiente:
class Nombre_de_la_clase
{
	privade: los datos deben estar protegidos
	//Listado de atributos:
	tipo Nombre1;
	tipo Nombre2;
	tipo NombreN;

	public: la funciones deben de ser publicas.
	//Listado de métodos:
	Tipo_Dato_retorno Nombre_de_la_función1(parametros_de_entrada);
	Tipo_Dato_retorno Nombre_de_la_función2(parametros_de_entrada);
	Tipo_Dato_retorno Nombre_de_la_función3(parametros_de_entrada);
}
*/

#include<cstdio>

class COMPLEJO //Refleja un nuevo tipo de dato
{
	private:
		float real;
		float imaginario;
	public: 
		void Asignar(float Real, float Imaginario)
		{
			real=Real;
			imaginario=Imaginario;
		}
		void Imprimir()
		{
			printf("%2.2f%+2.2fj\n",real,imaginario);
		}
		void Suma(COMPLEJO w) //Método que recibe un objeto de la propia clase.
		{
			real+=w.real;
			imaginario+=w.imaginario;
		}
		COMPLEJO Suma_01(COMPLEJO w)
		{
			COMPLEJO auxiliar;
			auxiliar.real=real+w.real;
			auxiliar.imaginario=imaginario+w.imaginario;

			return(auxiliar);
		}
};

//Instancia de la clase: objeto generado a partir de la clase.

int main()
{
	COMPLEJO z1, z2, z3; //z1 es un objeto de la clase complejo.

	//Agseder a las funciones.
	printf("\n");
	z1.Asignar(3,2);
	z1.Imprimir();
	z2.Asignar(2, -5);
	z2.Imprimir();
	z1.Suma(z2);
	z1.Imprimir();

	printf("\n");
	z3=z1.Suma_01(z2);
	printf("\n");
	z3.Imprimir();

	printf("\n");
	return 0;
}