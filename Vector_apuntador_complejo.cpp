//Crear un arreglo de numeros complejos.

#include<cstdio>

typedef struct 
{
	float real;
	float imaginario;
}
COMPLEJO;

typedef struct
{
	unsigned int Elementos;
	COMPLEJO *A_datos_complejos;
}
VECTOR_COMPLEJO;

void Imprimir_Complejo(COMPLEJO *w); 
void Imprimir_Vector_Complejo(VECTOR_COMPLEJO* Vector_Capturado);
void Capturar_Complejo(COMPLEJO *w);
void Capturar_Vector_Complejo(VECTOR_COMPLEJO* Vector_Capturado); //Paso referencia
void Suma_complejos(COMPLEJO* a, COMPLEJO* b, COMPLEJO* r);
VECTOR_COMPLEJO* Crear_Vector_Complejo(unsigned int Elementos);
void Eliminar_Vector_Complejo(VECTOR_COMPLEJO *p);
void Suma_Vector_Complejo(VECTOR_COMPLEJO* Vector_Capturado);


int main()
{
    unsigned int Elementos;
	VECTOR_COMPLEJO* vector_01;

	//printf("¿Cuántos vectores de números reales e imaginarios desea ingresar?:\n");
	vector_01=Crear_Vector_Complejo(Elementos); //Tamaño del vector.

	printf("\n");
	Capturar_Vector_Complejo(vector_01);
	printf("\n");
	Imprimir_Vector_Complejo(vector_01);
	printf("\n");
	Suma_Vector_Complejo(vector_01);
	printf("\n");

	Eliminar_Vector_Complejo(vector_01);
	printf("\n");

	return 0;
}

void Imprimir_Complejo(COMPLEJO *w)
{
	printf("%2.2f%+2.2fj\n",w->real, w->imaginario);
}


void Suma_complejos(COMPLEJO* a, COMPLEJO* b, COMPLEJO* r)
{
	r->real=a->real+b->real;
	r->imaginario=a->imaginario+b->imaginario;
}


VECTOR_COMPLEJO* Crear_Vector_Complejo(unsigned int Elementos)
{
	VECTOR_COMPLEJO *p;

    printf("¿Cuántos vectores de números reales e imaginarios desea ingresar?:\n");
    scanf("%d", &Elementos);
    
	//Se asigna memoria para la estructura vector complejo
	p=new VECTOR_COMPLEJO;
	//Se inicializa cada uno de los miembro del vector complejo
	p->Elementos=Elementos; //
	//Se asigna memoria para los elementos que son complejos.
	p->A_datos_complejos=new COMPLEJO[Elementos];
    
	//Regresar el vector complejo.
	return(p);
}

void Eliminar_Vector_Complejo(VECTOR_COMPLEJO *p)
{
	delete[] p->A_datos_complejos;
	delete p;
}

void Capturar_Complejo(COMPLEJO *w)
{
	printf("Ingrese los datos reales\n");
	scanf("%f", &(w->real));
	printf("Ingrese los datos imaginarios\n");
	scanf("%f", &(w->imaginario));
}

void Capturar_Vector_Complejo(VECTOR_COMPLEJO* Vector_Capturado)
{
	unsigned int i;

	for(i=0; i<Vector_Capturado->Elementos; i++)
	{
		printf("Vector ha ingresar: [%i]:  \n", i);
		Capturar_Complejo(Vector_Capturado->A_datos_complejos+i);
	}
}

void Imprimir_Vector_Complejo(VECTOR_COMPLEJO* Vector_Capturado)
{
	unsigned int i;

	for(i=0; i<Vector_Capturado->Elementos; i++)
	{
		printf("Vector [%i] ingresado: \n", i);
		Imprimir_Complejo(Vector_Capturado->A_datos_complejos+i);
	}
}

void Suma_Vector_Complejo(VECTOR_COMPLEJO* Vector_Capturado)
{
	unsigned int i;
	COMPLEJO acumulador; 

	acumulador.real=0;
	acumulador.imaginario=0;

	for(i=0; i<Vector_Capturado->Elementos; i++)
	{
		Suma_complejos(Vector_Capturado->A_datos_complejos+i, &acumulador, &acumulador);
	}
	printf("La suma total es: \n");
	Imprimir_Complejo(&acumulador);
}


