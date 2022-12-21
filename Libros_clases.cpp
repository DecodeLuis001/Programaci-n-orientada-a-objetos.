#include<iostream>

using namespace std;

class Libro
{
	private: //atributos 
		string Titulo;
		string Autor;
		string Genero;
		string Edicion;  
		string Lugar;
		string Fecha;
	public:	//métodos
		Libro(string, string, string, string, string, string);
		void Mostrar_Libro();
};

//Constructor de la clase persona.
Libro::Libro(string _Titulo, string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha)
{
	Titulo=_Titulo;
	Autor=_Autor;
	Genero=_Genero;
	Edicion=_Edicion;
	Lugar=_Lugar;
	Fecha=_Fecha;
}

void Libro::Mostrar_Libro()
{
	cout<<"Titulo de la obra: "<<Titulo<<endl;
	cout<<"Autor: "<<Autor<<endl;
	cout<<"Genero: "<<Genero<<endl;
	cout<<"Número de edición: "<<Edicion<<endl;
	cout<<"Editorial: "<<Lugar<<endl;
	cout<<"Año de publicación: "<<Fecha<<endl;
}

class Terror : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Terror(string, string, string, string, string, string, int);
		void Mostrar_Info_T(); 
};

//Constructor de la clase estudiante
Terror::Terror(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Terror::Mostrar_Info_T()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}


class Fantasia : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Fantasia(string, string, string, string, string, string, int);
		void Mostrar_Info_Fa(); 
};

//Constructor de la clase estudiante
Fantasia::Fantasia(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Fantasia::Mostrar_Info_Fa()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}

class Ciencia_Ficcion : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Ciencia_Ficcion(string, string, string, string, string, string, int);
		void Mostrar_Info_CF(); 
};

//Constructor de la clase.
Ciencia_Ficcion::Ciencia_Ficcion(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Ciencia_Ficcion::Mostrar_Info_CF()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}

class Aventura : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Aventura(string, string, string, string, string, string, int);
		void Mostrar_Info_Av(); 
};

//Constructor de la clase.
Aventura::Aventura(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Aventura::Mostrar_Info_Av()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}

class Suspenso : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Suspenso(string, string, string, string, string, string, int);
		void Mostrar_Info_S(); 
};

//Constructor de la clase.
Suspenso::Suspenso(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Suspenso::Mostrar_Info_S()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}

class Accion : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Accion(string, string, string, string, string, string, int);
		void Mostrar_Info_A(); 
};

//Constructor de la clase.
Accion::Accion(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Accion::Mostrar_Info_A()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}

class Drama : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Drama(string, string, string, string, string, string, int);
		void Mostrar_Info_D(); 
};

//Constructor de la clase.
Drama::Drama(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Drama::Mostrar_Info_D()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}

class Satira : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Satira(string, string, string, string, string, string, int);
		void Mostrar_Info_S(); 
};

//Constructor de la clase.
Satira::Satira(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Satira::Mostrar_Info_S()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}

class Comedia : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Comedia(string, string, string, string, string, string, int);
		void Mostrar_Info_Comedia(); 
};

//Constructor de la clase.
Comedia::Comedia(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Comedia::Mostrar_Info_Comedia()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}

class Poesia : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Poesia(string, string, string, string, string, string, int);
		void Mostrar_Info_P(); 
};

//Constructor de la clase.
Poesia::Poesia(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Poesia::Mostrar_Info_P()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}

class Epopella : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Epopella(string, string, string, string, string, string, int);
		void Mostrar_Info_E(); 
};

//Constructor de la clase.
Epopella::Epopella(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Epopella::Mostrar_Info_E()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}

class Novela : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Novela(string, string, string, string, string, string, int);
		void Mostrar_Info_N(); 
};

//Constructor de la clase estudiante
Novela::Novela(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Novela::Mostrar_Info_N()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}

class Comic : public Libro
{
	private:
		int Copias_Vendidas;
	public: 
		Comic(string, string, string, string, string, string, int);
		void Mostrar_Info_C(); 
};

//Constructor de la clase estudiante
Comic::Comic(string _Titulo ,string _Autor, string _Genero, string _Edicion, string _Lugar, string _Fecha, int _Copias_Vendidas) : Libro(_Titulo, _Autor, _Genero, _Edicion, _Lugar, _Fecha)
{
	Copias_Vendidas=_Copias_Vendidas;
}

void Comic::Mostrar_Info_C()
{
	Mostrar_Libro();
	cout<<"Numero de ventas: "<<Copias_Vendidas<<endl;
}

int main()
{	
	Terror T1("It", "Stephen King", "Terror", "Cuarta edición (2017)", "Vikings", "1986", 1390893);
	cout<<"--->Colección: Terror; Suspenso"<<endl;
	T1.Mostrar_Info_T();
	cout<<"\n";

	Fantasia F1("Juego de tronos", "George. R. Martin", "Fantasia", "Segunda edición (2010)", "Gigamesh", "1996", 2739200);
	cout<<"--->Colección: Fantasia; Suspenso; Medieval;-"<<endl;
	F1.Mostrar_Info_Fa();
	cout<<"\n";

	Ciencia_Ficcion CF1("Neuromante", "Willian Gibson", "Ficción", "Tercera edición (2005)", "Ace Books", "1984", 1229200);
	cout<<"--->Colección: Ficción; Suspenso; Fantasia;-"<<endl;
	CF1.Mostrar_Info_CF();
	cout<<"\n";

	Aventura A1("20,000 Leguas: Viaje Submarino", "Julio Verne", "Aventura", "Tercera edición (2000)", "Pierre-Jules Hetzel", "1869", 1249254);
	cout<<"--->Colección: Aventura; Ficción; Fantasia;-"<<endl;
	A1.Mostrar_Info_Av();
	cout<<"\n";
	
	Suspenso Su1("El código Da Vinci", "Dan Brown", "Suspenso", "Primera edición (2003)", "Doubleday", "2000", 2549454);
	cout<<"--->Colección: Suspenso; Aventura; Drama;-"<<endl;
	Su1.Mostrar_Info_S();
	cout<<"\n";

	Accion Ac1("Hacia un mundo nuevo", "Hugo García Arias", "Acción", "Tercera edición (2011)", "Albores", "2018", 10564);
	cout<<"--->Colección: Acción; Ficción; Aventura;-"<<endl;
	Ac1.Mostrar_Info_A();
	cout<<"\n";

	Drama D1("La Esposa del Dios del Fuego", "Amy Tan", "Drama", "Quinta edición (2009)", "Bolsillo", "1980", 1110563);
	cout<<"--->Colección: Drama; Suspenso; Fantasia;-"<<endl;
	D1.Mostrar_Info_D();
	cout<<"\n";

	Satira S1("Don Quijote", "Miguel de Cervantes", "Drama, Satira, Comedia", "Quinta edición (2009)", "Santillana", "1966", 230563);
	cout<<"--->Colección: Satira; Drama; Comedia;-"<<endl;
	S1.Mostrar_Info_S();
	cout<<"\n";

	Comedia CO1("El buen desesperar", "Pascual de la Vega", "Ironía", "Primera edición (2018)", "Splash", "2017", 8036);
	cout<<"--->Colección: Comedia; Satira; Humor Negro; -"<<endl;
	CO1.Mostrar_Info_Comedia();
	cout<<"\n";

	Poesia P1("En las llamas", "Desconocido", "Poesia, Romantisismo", "Quinta edición (2019)", "Bolsillo", "1670", 11103);
	cout<<"--->Colección: Drama; Fantasia;-"<<endl;
	P1.Mostrar_Info_P();
	cout<<"\n";

	Epopella E1("La odisea de Ulises", "Desconocido", "Epopella, Mito", "Quinta edición (2016)", "Santillana", "Siglo VII", 1056309);
	cout<<"--->Colección: Drama; Suspenso; Fantasia;-"<<endl;
	E1.Mostrar_Info_E();
	cout<<"\n";

	Novela N1("La cabaña", "Stephen King", "Novela de Suspenso/Drama", "Cuarta edición (2013)", "Santillana", "1974", 50563);
	cout<<"--->Colección: Drama; Suspenso; Terror;-"<<endl;
	N1.Mostrar_Info_N();
	cout<<"\n";

	Comic C1("Flash Point Paradox", "Geoff Johns.", "Acción, Superheroes", "Segunda edición (2012)", "Televisa Editorial", "2011", 14563);
	cout<<"--->Colección: Heroes; Ciencia Ficción; Fantasia;-"<<endl;
	C1.Mostrar_Info_C();
	cout<<"\n";

	return 0;
}