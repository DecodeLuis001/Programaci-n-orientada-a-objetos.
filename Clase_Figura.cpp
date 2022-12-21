#include<iostream> 
#include<stdlib.h> 
#include<cstdio> 

using namespace std;

//Inicialización y declaración de las clases.
class Figura
{ 
	protected:
		float base;
		float altura;
	public:
		Figura(float base, float altura); 
		void Mostrar_Figura();
};

class Circulo: public Figura
{
	protected:
		float pi;
	public:
		Circulo(float base, float altura, float pi); 
		void Mostrar_Circulo();
		void Area_Circulo(float pi, float base);
		void Perimetro_Circulo(float pi, float base); 
};

class Triangulo_Equilatero: public Figura
{ 
	public:
		Triangulo_Equilatero(float base, float altura);
		void Area_Triangulo(float base, float altura);
		void Perimetro_Triangulo(float base);
};

class Cuadrado: public Figura
{
	public:
		Cuadrado(float base, float altura);
		void Area_Cuadrado(float base);
		void Perimetro_Cuadrado(float base);
};

class Rectangulo: public Figura
{
	public:
		Rectangulo(float base, float altura);
		void Area_Rectangulo(float base, float altura);
		void Perimetro_Rectangulo(float base, float altura);
};

class Poligono_Regular: public Figura
{
	protected:
		int Lados;
		float apotema;
	public:
		Poligono_Regular(float base, float altura, int numLados, float apotema);
		void Mostrar_Poligono();
		void Area_Poligono(float perimetro, float apotema);
		float Perimetro_Poligono(int Lados, float base);
};

//Edificiación de constructores.
Figura::Figura(float _base, float _altura)
{
	base=_base;
	altura=_altura;
}

Circulo::Circulo(float _base, float _altura, float _pi): Figura(_base, _altura)
{
	pi=3.1416;
}

Poligono_Regular::Poligono_Regular(float _base, float _altura, int _Lados, float _apotema): Figura(_base, _altura)
{
	Lados=_Lados;
	apotema=_apotema;
}

Triangulo_Equilatero::Triangulo_Equilatero(float _base, float _altura): Figura(_base, _altura)
{

}

Cuadrado::Cuadrado(float _base, float _altura): Figura(_base, _altura)
{

}

Rectangulo::Rectangulo(float _base, float _altura): Figura(_base, _altura)
{

}

//Construcción de los métodos para obtener el périmetro y área correspondiente a cada figura.
void Figura::Mostrar_Figura()
{
	cout<<"Base de la figura: "<<base<<" unidades"<<endl; 
	cout<<"Altura de la figura: "<<altura<<" unidades"<<endl; 
}

void Circulo::Mostrar_Circulo()
{
	cout<<"Radio: "<<base<<" unidades"<<endl;
}

void Circulo::Perimetro_Circulo(float _base, float _pi)
{
	float perimetro;

	perimetro=_pi*(2*_base);
	cout<<"Perímetro de la figura: "<<perimetro<<" unidades"<<endl; 
}

void Circulo::Area_Circulo(float _base, float _pi)
{
	float area;

	area=_pi*(_base*_base);
	cout<<"Área de la figura: "<<area<<" unidades cuadradas"<<endl; 
}

void Triangulo_Equilatero::Area_Triangulo(float _base, float _altura)
{
	float area;

	area=((_base*_altura)/2);
	cout<<"Área de la figura: "<<area<<" unidades cuadradas"<<endl;
}

void Triangulo_Equilatero::Perimetro_Triangulo(float _base)
{
	float perimetro;

	perimetro=_base*3;
	cout<<"Perímetro de la figura: "<<perimetro<<" unidades"<<endl;
}

void Cuadrado::Area_Cuadrado(float _base)
{
	float area;

	area=_base*_base;
	cout<<"Área de la figura: "<<area<<" unidades cuadradas"<<endl;
}

void Cuadrado::Perimetro_Cuadrado(float _base)
{
	float perimetro;

	perimetro=_base*4;
	cout<<"Perímetro de la figura: "<<perimetro<<" unidades"<<endl;
}

void Rectangulo::Area_Rectangulo(float _base, float _altura)
{
	float area;

	area=_base*_altura;
	cout<<"Área de la figura: "<<area<<" unidades cuadradas"<<endl;
}

void Rectangulo::Perimetro_Rectangulo(float _base, float _altura)
{
	float perimetro;

	perimetro=(_base*2)+(_altura*2);
	cout<<"Perímetro de la figura: "<<perimetro<<" unidades"<<endl;
}

void Poligono_Regular::Area_Poligono(float _perimetro, float _apotema)
{
	float area;

	area=_perimetro*_apotema;
	cout<<"Área de la figura: "<<area<<" unidades cuadradas"<<endl;
}

float Poligono_Regular::Perimetro_Poligono(int _Lados, float _base)
{
	float perimetro;

	perimetro=_Lados*_base;
	cout<<"El perímetro de la figura es de: "<<perimetro<<" unidades"<<endl;

	return(perimetro);
}

void Poligono_Regular::Mostrar_Poligono()
{
	Mostrar_Figura();
	cout<<"Lados: "<<Lados<<endl;
	cout<<"Apotema: "<<apotema<<" unidades"<<endl;
}

int main()
{
	float Aux_Perimetro;

	Circulo Circulo(3, 3, 3.1416);
	Triangulo_Equilatero Triangulo(9, 5.5); 
	Cuadrado Cuadrado(4, 4);
	Rectangulo Rectangulo(10,9); 
	Poligono_Regular Poligono(5, 2, 5, 1.5); 
	Poligono_Regular Poligono1(6, 3, 6, 2.5); 
	
	printf("Circulo\n"); 
	Circulo.Mostrar_Circulo(); 
	Circulo.Area_Circulo(3, 3.1416); 
	Circulo.Perimetro_Circulo(3, 3.1416); 
	printf("\n");

	printf("Triangulo\n"); 
	Triangulo.Mostrar_Figura(); 
	Triangulo.Area_Triangulo(9, 5.5); 
	Triangulo.Perimetro_Triangulo(9);
	printf("\n");

	printf("Cuadrado\n"); 
	Cuadrado.Mostrar_Figura(); 
	Cuadrado.Area_Cuadrado(4); 
	Cuadrado.Perimetro_Cuadrado(4); 
	printf("\n");

	printf("Rectangulo\n"); 
	Rectangulo.Mostrar_Figura(); 
	Rectangulo.Area_Rectangulo(10, 9); 
	Rectangulo.Perimetro_Rectangulo(10, 9); 
	printf("\n");

	printf("Pentagono\n"); 
	Poligono.Mostrar_Poligono(); 
	Aux_Perimetro=Poligono.Perimetro_Poligono(5,5); 
	Poligono1.Area_Poligono(Aux_Perimetro, 1.5); 
	printf("\n");

	printf("Hexagono\n");
	Poligono1.Mostrar_Poligono(); 
	Aux_Perimetro=Poligono1.Perimetro_Poligono(6, 6); 
	Poligono1.Area_Poligono(Aux_Perimetro, 2.5); 
	printf("\n");

	return 0;
}
