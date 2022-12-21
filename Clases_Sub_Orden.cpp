#include<iostream>

using namespace std;

class Persona
{
	private: //atributos 
		int edad;
		string nombre;
		string cumpleaños;  
		string sexo;
		string direccion;
	public:	//métodos
		Persona(int, string, string, string, string);
		void Mostrar_Personas();
};

//Constructor de la clase persona.
Persona::Persona(int _edad, string _nombre, string _cumpleaños, string _sexo, string _direccion)
{
	edad=_edad;
	nombre=_nombre;
	cumpleaños=_cumpleaños;
	sexo=_sexo;
	direccion=_direccion;
}

void Persona::Mostrar_Personas()
{
	cout<<"Edad: "<<edad<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Fecha de nacimiento: "<<cumpleaños<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Dirección: "<<direccion<<endl;
}

class Empleado : public Persona
{
	private:
		float sueldo;
	public:
		Empleado(int, string, string, string, string, float);
		void Mostrar_Info_Empleado();
		void Ordenar_Nombre();
};

//Constructor de la clase empleado.
Empleado::Empleado(int _edad, string _nombre, string _cumpleñaos, string _sexo, string _direccion, float _sueldo) : Persona(_edad, _nombre, _cumpleñaos, _sexo, _direccion)
{
	sueldo=_sueldo;
}

void Empleado::Mostrar_Info_Empleado()
{
	Mostrar_Personas();
	cout<<"Sueldo: "<<sueldo<<endl;
}

void Empleado::Ordenar_Nombre()
{
	int i, j;
    float Comparador; //sirve como medio de almacenamiento para la comparacion entre palabras (dado que cada letra recibe un valor númerico dependiendo su posición en el abecedario, esto para saber que eltra va despues de otra)
    char Auxiliar[20]; //proporcionara una variable en donde se depositan los nombre para después compararlos.
    int counter=0; //el contador permite que actue la condicion hasta el valor máximo de nombres, de tal modo de que si se reccorre el arreglo y no esta el nombre se imprime el mensaje "no esta".
    char Nombres[20][15]={"Alfaro", "Capulin", "Cisneros", "Ojera", "Paredes", "Rosario", "Rosas", "Sanchez", "Sanchez", "Hueramo"};
    
    printf("Los apellidos paternos introducios en el arreglo son: \n");

    for(i=0; i<10; i++)
    {                                               //amperson permite que el printf muestre el                                                 nombre completo de la cadena en el arreglo                                                  de caracteres.
        printf("%s\n", &Nombres[i][0]);
    }
    
    for(i=0; i<10; i++)//Ciclo que realiza el proceso de ordenamiento, explora las letras de cada palabra dentro del arreglo.
    {
        for(j=1; j<9; j++) 
        {
            //el comando "strmcp" busca realizar la comparación de las palabras dentro del arreglo.
            Comparador = strcmp(Nombres[j], Nombres[j+1]);
            if(Comparador>0)
            {
                //el comando "strcpy" copia el contenido de la cadena que se seleccione y la deposita en una variable destino, la función de la coma dentro del comando tiene una similitud al simbolo de igual.
                strcpy(Auxiliar,Nombres[j]);
                strcpy(Nombres[j],Nombres[j+1]);
                strcpy(Nombres[j+1],Auxiliar);
            }
        }
    }
    printf("\n");

    printf("Los apellidos paternos ordenados del arrelgo son: \n");
    for(i=0; i<10; i++)//ciclo q muestra los nombres ya ordenados q aparecera en pantalla
    {
        printf("%d.- %s\n",i+1, Nombres[i]); //se usa porciento d y s debido a la combinación de condiciones entre el ciclo for aniado y el uso de un contador flotante.
    }
}

class Estudiante : public Persona
{
	private:
		int NUA;
	public: 
		Estudiante(int, string, string, string, string, int);
		void Mostrar_Info_Estudiante();
		void Ordenar_Nombre(); 
};

//Constructor de la clase estudiante
Estudiante::Estudiante(int _edad, string _nombre, string _cumpleñaos, string _sexo, string _direccion, int _NUA) : Persona(_edad, _nombre, _cumpleñaos, _sexo, _direccion)
{
	NUA=_NUA;
}

void Estudiante::Mostrar_Info_Estudiante()
{
	Mostrar_Personas();
	cout<<"N.U.A: "<<NUA<<endl;
}

void Estudiante::Ordenar_Nombre()
{
	int i, j;
    float Comparador; //sirve como medio de almacenamiento para la comparacion entre palabras (dado que cada letra recibe un valor númerico dependiendo su posición en el abecedario, esto para saber que eltra va despues de otra)
    char Auxiliar[20]; //proporcionara una variable en donde se depositan los nombre para después compararlos.
    int counter=0; //el contador permite que actue la condicion hasta el valor máximo de nombres, de tal modo de que si se reccorre el arreglo y no esta el nombre se imprime el mensaje "no esta".
    char Nombres[10][15]={"Andrade", "Gonzales", "Baca", "Mancera", "Salinas", "Lopéz", "Martinez", "Núñez", "Núñez", "Cabrera"};
    
    printf("Los apellidos paternos introducios en el arreglo son: \n");

    for(i=0; i<10; i++)
    {                                               //amperson permite que el printf muestre el                                                 nombre completo de la cadena en el arreglo                                                  de caracteres.
        printf("%s\n", &Nombres[i][0]);
    }
    
    for(i=0; i<10; i++)//Ciclo que realiza el proceso de ordenamiento, explora las letras de cada palabra dentro del arreglo.
    {
        for(j=1; j<9; j++) 
        {
            //el comando "strmcp" busca realizar la comparación de las palabras dentro del arreglo.
            Comparador = strcmp(Nombres[j], Nombres[j+1]);
            if(Comparador>0)
            {
                //el comando "strcpy" copia el contenido de la cadena que se seleccione y la deposita en una variable destino, la función de la coma dentro del comando tiene una similitud al simbolo de igual.
                strcpy(Auxiliar,Nombres[j]);
                strcpy(Nombres[j],Nombres[j+1]);
                strcpy(Nombres[j+1],Auxiliar);
            }
        }
    }
    printf("\n");

    printf("Los apellidos paternos ordenados del arrelgo son: \n");
    for(i=0; i<10; i++)//ciclo q muestra los nombres ya ordenados q aparecera en pantalla
    {
        printf("%d.- %s\n",i+1, Nombres[i]); //se usa porciento d y s debido a la combinación de condiciones entre el ciclo for aniado y el uso de un contador flotante.
    }
}

class Empleado_Estudiante : public Estudiante
{
	private:
		string Programa;
		float Sueldo;
	public:
		Empleado_Estudiante(int, string, string, string, string, int, string, float);
		void Mostrar_Info_Empleado_Estudiante();
};

Empleado_Estudiante::Empleado_Estudiante(int _edad, string _nombre, string _cumpleñaos, string _sexo, string _direccion, int _NUA, string _Programa, float _Sueldo) : Estudiante(_edad, _nombre, _cumpleñaos, _sexo, _direccion, _NUA)
{
	Programa=_Programa;
	Sueldo=_Sueldo;
}

void Empleado_Estudiante::Mostrar_Info_Empleado_Estudiante()
{
	Mostrar_Info_Estudiante();
	cout<<"Sueldo Base: "<<Sueldo<<endl;
	cout<<"Programa educativo: "<<Programa<<endl;
}


int main()
{
	Empleado E1(40, "Carlos García Capulin", "12 de Noviembre de 1987", "Masculino", "#87 Faja de Oro, Salamanca, Gto", 15000);
	Empleado E2(40, "Miguel Torres Cisneros", "18 de Febrero de 1979", "Masculino", "#34 Zona Centro, Salamanca, Gto", 20000);
	Empleado E3(30, "Dora Almanza Ojera", "21 de Marzo de 1937", "Femenino", "#892 Closter Sur-Arboladas, Salamanca, Gto", 15000);
	Empleado E4(55, "Ileana Rocio Alfaro", "09 de Enero de 1937", "Femenino", "#23 Complejo de Edificios Magda Norte, Salamanca, Gto", 15000);
	Empleado E5(45, "Juan Pablo Ignacio Ramiréz Paredes", "24 de Julio de 1997", "Masculino", "#45 Lindavista Este, Gto", 35000);
	Empleado E6(32, "Elizabeth Madrigal del Rosario", "17 de Noviembre de 1967", "Femenino", "#273 Fraccionamiento Los Mochis, Salamanca, Gto", 10500);
	Empleado E7(54, "Alvaro Muñez Rosas", "12 de Abril de 1987", "Masculino", "#117 Las Misiones, Salamanca, Gto", 11000);
	Empleado E8(38, "Alejandro Echeverria Sanchez", "28 de Septiembre de 1967", "Masculino", "#123 Zona centro, Salamanca, Gto", 14500);
	Empleado E9(38, "Mario Almanza Sanchez", "15 de Agosto de 1977", "Masculino", "#487 Faja de Oro, Salamanca, Gto", 19000);
	Empleado E10(38, "Claudia Razo Hueramo", "05 de Mayo de 1990", "Femenino", "#99 Las Misiones, Salamanca, Gto", 16500);
	cout<<"-Empleado-"<<endl;
	E1.Mostrar_Info_Empleado();
	cout<<"\n";
	E2.Mostrar_Info_Empleado();
	cout<<"\n";
	E3.Mostrar_Info_Empleado();
	cout<<"\n";
	E4.Mostrar_Info_Empleado();
	cout<<"\n";
	E5.Mostrar_Info_Empleado();
	cout<<"\n";
	E6.Mostrar_Info_Empleado();
	cout<<"\n";
	E7.Mostrar_Info_Empleado();
	cout<<"\n";
	E8.Mostrar_Info_Empleado();
	cout<<"\n";
	E9.Mostrar_Info_Empleado();
	cout<<"\n";
	E10.Mostrar_Info_Empleado();
	cout<<"\n";
	cout<<"----->Apellidos paternos registrados y ordenados"<<endl;
	Empleado ET(1, "#", "-", "-", "#", 1);
	ET.Ordenar_Nombre();
	cout<<"\n";

	Estudiante Es1(20, "Luis Arroyo Núñez", "23 de Febrero de 1999", "Masculino", "#56 zona centro, Salamanca, Gto", 390893);
	Estudiante Es2(12, "Ana Juarez Núñez", "30 de Marzo de 2007", "Femenino", "#56 zona centro, Salamanca, Gto", 390013);
	Estudiante Es3(21, "Paulina Leon Gonzales", "05 de Diciembre de 1998", "Femenino", "#345 Explanada Suroeste Lindavista, Gto", 170863);
	Estudiante Es4(20, "Samuel Ramos Andrade", "15 de Noviembre de 1999", "Masculino", "#293 Colonia Magisterial, Salamanca, Gto", 329313);
	Estudiante Es5(20, "Alejandro Hernandez Baca", "16 de Septiembre de 1999", "Masculino", "#56 Fraccionamiento Las Ileadas, Salamanca, Gto", 450813);
	Estudiante Es6(20, "Bryan Cervantes Mancera", "24 de Agosto de 1999", "Masculino", "#154 Fraccionamiento Las Misiones, Salamanca, Gto", 465310);
	Estudiante Es7(20, "Giovanni Aguirre Salinas", "05 de Julio de 1999", "Masculino", "#561 Closter Este Arboledas del Bajio, Salamanca, Gto", 450822);
	Estudiante Es8(19, "Ximena Aguirre Lopéz", "14 de Mayo de 1999", "Femenino", "#111 Avenida Revolución, Salamanca, Gto", 338893);
	Estudiante Es9(19, "Nazaret Irene Martinez", "11 de Septiembre de 1999", "Femenino", "#832, Colonia Alfaro Norte, Salamanca, Gto", 560893);
	Estudiante Es10(21, "Rafael Gonzales Cabrera", "07 de Abril de 1998", "Masculino", "#563 Avenida Arboledas, Salamanca, Gto", 480001);
	cout<<"-Estudiante-"<<endl;
	Es1.Mostrar_Info_Estudiante();
	cout<<"\n";
	Es2.Mostrar_Info_Estudiante();
	cout<<"\n";
	Es3.Mostrar_Info_Estudiante();
	cout<<"\n";
	Es4.Mostrar_Info_Estudiante();
	cout<<"\n";
	Es5.Mostrar_Info_Estudiante();
	cout<<"\n";
	Es6.Mostrar_Info_Estudiante();
	cout<<"\n";
	Es7.Mostrar_Info_Estudiante();
	cout<<"\n";
	Es8.Mostrar_Info_Estudiante();
	cout<<"\n";
	Es9.Mostrar_Info_Estudiante();
	cout<<"\n";
	Es10.Mostrar_Info_Estudiante();
	cout<<"\n";
	cout<<"----->Apellidos paternos registrados y ordenados"<<endl;
	Estudiante EsT(1, "#", "-", "-", "#", 1);
	EsT.Ordenar_Nombre();
	cout<<"\n";

	Empleado_Estudiante Ems1(20, "Luis Arroyo Núñez", "23 de Febrero de 1999", "Masculino", "#56 zona centro, Salamanca, Gto", 390893, "Ing. Sistemas Computcionales.", 10000);
	Empleado_Estudiante Ems2(12, "Ana Juarez Núñez", "30 de Marzo de 2007", "Femenino", "#56 zona centro, Salamanca, Gto", 390013, "Ing. Gestión Empresarial.", 10000);
	Empleado_Estudiante Ems3(21, "Paulina Leon Gonzales", "05 de Diciembre de 1998", "Femenino", "#345 Explanada Suroeste Lindavista, Gto", 170863,  "Ing. Gestión Empresarial.", 10000);
	Empleado_Estudiante Ems4(20, "Samuel Ramos Andrade", "15 de Noviembre de 1999", "Masculino", "#293 Colonia Magisterial, Salamanca, Gto", 329313, "Ing. Sistemas Computcionales.", 10000);
	Empleado_Estudiante Ems5(20, "Alejandro Hernandez Baca", "16 de Septiembre de 1999", "Masculino", "#56 Fraccionamiento Las Ileadas, Salamanca, Gto", 450813, "Ing. Sistemas Computcionales.", 10000);
	Empleado_Estudiante Ems6(20, "Bryan Cervantes Mancera", "24 de Agosto de 1999", "Masculino", "#154 Fraccionamiento Las Misiones, Salamanca, Gto", 465310, "Ing. Sistemas Computcionales.", 10000);
	Empleado_Estudiante Ems7(20, "Giovanni Aguirre Salinas", "05 de Julio de 1999", "Masculino", "#561 Closter Este Arboledas del Bajio, Salamanca, Gto", 450822,  "Ing. Gestión Empresarial.", 10000);
	Empleado_Estudiante Ems8(19, "Ximena Aguirre Lopéz", "14 de Mayo de 1999", "Femenino", "#111 Avenida Revolución, Salamanca, Gto", 338893, "Ing. Gestión Empresarial.", 10000);
	Empleado_Estudiante Ems9(19, "Nazaret Irene Martinez", "11 de Septiembre de 1999", "Femenino", "#832, Colonia Alfaro Norte, Salamanca, Gto", 560893, "Ing. Gestión Empresarial.", 10000);
	Empleado_Estudiante Ems10(21, "Rafael Gonzales Cabrera", "07 de Abril de 1998", "Masculino", "#563 Avenida Arboledas, Salamanca, Gto", 480001, "Ing. Sistemas Computcionales.", 10000);
	cout<<"-Estudiantes que son empleados UG-"<<endl;
	Ems1.Mostrar_Info_Empleado_Estudiante();
	cout<<"\n";
	Ems2.Mostrar_Info_Empleado_Estudiante();
	cout<<"\n";
	Ems3.Mostrar_Info_Empleado_Estudiante();
	cout<<"\n";
	Ems4.Mostrar_Info_Empleado_Estudiante();
	cout<<"\n";
	Ems5.Mostrar_Info_Empleado_Estudiante();
	cout<<"\n";
	Ems6.Mostrar_Info_Empleado_Estudiante();
	cout<<"\n";
	Ems7.Mostrar_Info_Empleado_Estudiante();
	cout<<"\n";
	Ems8.Mostrar_Info_Empleado_Estudiante();
	cout<<"\n";
	Ems9.Mostrar_Info_Empleado_Estudiante();
	cout<<"\n";
	Ems10.Mostrar_Info_Empleado_Estudiante();
	cout<<"\n";
	cout<<"----->Apellidos paternos registrados y ordenados"<<endl;
	Empleado_Estudiante EmsT(1, "#", "-", "-", "#", 1, "#", 1);
	EmsT.Ordenar_Nombre();
	cout<<"\n";


	return 0;
}