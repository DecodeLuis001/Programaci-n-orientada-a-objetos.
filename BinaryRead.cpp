//Lectura binaria.

#include<fstream>
#include<iostream>

using namespace std;

int main()
{
	float f=0.657; 
	char c='z';
	int i=23;
	ifstream Archivo;
						//-->Abren y rescriben el archivo.
	Archivo.open("text.txt", ios::in | ios::binary);

	if(Archivo.is_open())
	{//Para poder escirbir en el archivo. (2 parametros: dirección de memoria y tamaño de información)
		Archivo.read((char *)&i, sizeof(i));
		Archivo.read((char *)&f, sizeof(f));
		Archivo.read(&c, sizeof(c));
		//Se necesita castear para que la direccion sea corresponiente a un valor entero.
		Archivo.close();
	}
	else
	{
		cout<<"No se pudo abrir el archivo: "<<endl;
	}

	cout<<"f: "<<f<<endl;
	cout<<"c: "<<c<<endl;
	cout<<"i: "<<i<<endl;
	return 0; 
}
