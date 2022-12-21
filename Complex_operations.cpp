#include<cstdio>
#include<cmath>

using namespace std;

class COMPLEJO
{
	private:
		double a;
		double b;
	public:
		void Asignar(double A, double B)
		{
			a=A;
			b=B;
		}
		void Suma(COMPLEJO i)
		{
			a+=i.a;
			b+=i.b;
		}
		void Imprimir()
		{
			printf("%2.2f%+2.2fj\n",a,b);
		}
		COMPLEJO Imaginario_Suma(COMPLEJO i)
		{
			COMPLEJO auxiliar;

			auxiliar.a=a+i.a;
			auxiliar.b=b+i.b;

			return(auxiliar);
		}
		COMPLEJO Imaginario_Resta(COMPLEJO i)
		{
			COMPLEJO auxiliar;

			auxiliar.a=a-i.a;
			auxiliar.b=b-i.b;

			return(auxiliar);
		}
		COMPLEJO Imaginario_Mul(COMPLEJO i)
		{
			COMPLEJO auxiliar;

			auxiliar.a=((a+i.a)*(a+i.a)*-(sqrt(1))*(sqrt(1)));
			auxiliar.b=((b+i.b)*(b+i.b)*-(sqrt(1))*(sqrt(1)));

			return(auxiliar);
		}
};

int main()
{
	COMPLEJO z1, z2, z3; 

	printf("\n");
	printf("Las parejas de numeros complejos son: \n");
	z1.Asignar(8, -2);
	z1.Imprimir();
	z2.Asignar(9, -5);
	z2.Imprimir();

	printf("\n");
	printf("La suma de los datos imaginarios es: \n");
	z3=z1.Imaginario_Suma(z2);
	z3.Imprimir();
	printf("La resta de los datos imaginaios es: \n");
	z3=z1.Imaginario_Resta(z2);
	z3.Imprimir();
	printf("La multipliación de los datos imaginaios es: \n");
	z3=z1.Imaginario_Mul(z2);
	z3.Imprimir();

	printf("\n");
	return 0;
}
