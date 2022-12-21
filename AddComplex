//Consigna 8:

//Problema 17.21).
#include<cstdio>
#include<iostream>

class COMPLEJO
{
	private:
		double real;
		double imaginario;
	public:
		void Establecer(double Real, double Imaginario)
		{
			real=Real;
			imaginario=Imaginario;
		}
		void Suma(COMPLEJO SUMA)
		{	
			real+=SUMA.real;
			imaginario+=SUMA.imaginario;
		}
		void Imprimir()
		{
			printf("%2.2f%+2.2fj\n",real,imaginario);
		}
		COMPLEJO Agregar(COMPLEJO valor)
		{
			COMPLEJO auxiliar;

			auxiliar.real=real+valor.real;
			auxiliar.imaginario=imaginario+valor.imaginario;

			return(auxiliar);
		}
};

int main()
{
	COMPLEJO z1, z2, z3; //z1 es un objeto de la clase complejo.

	//Agseder a las funciones.
	printf("\n");
	z1.Establecer(3,2);
	z1.Imprimir();
	z2.Establecer(2, -5);
	z2.Imprimir();
	z1.Suma(z2);
	z1.Imprimir();

	printf("\n");
	z3=z1.Agregar(z2);
	printf("\n");
	z3.Imprimir();

	printf("\n");
	return 0;
}
