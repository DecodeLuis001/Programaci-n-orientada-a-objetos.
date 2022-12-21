#include<stdio.h>
#include<stdlib.h>

/*
typedef struct 
{
	//Lista con cero elementos en ella.
}
List;*/

typedef struct Lista
{
	int Data;
	struct Lista* siguiente_dato;
}
Lista;

Lista* Primero=NULL;
Lista* Ultimo=NULL;

void Buscar_Elemento(Lista *List);

void Crear_Lista(Lista *List)
{
	Lista* Elemento=(Lista *)malloc(sizeof(Lista));

	printf("Ingrese el elemento a agregar en la lista.\n");
	scanf("%d",&Elemento->Data);

	if(Primero==NULL) //Establece la condición para crear el nodo y posteriormente la lista.
	{	//Se establece una condición de pila circular.
		Primero=Elemento;
		Primero->siguiente_dato=NULL; //En caso de que el siguiente dato a ingresar sea el ultimo.
		Ultimo=Elemento;
	} 
	else //Para que se pueda agregar un nodo centrico.
	{ //Forma el cuerpo de la lista.
		Ultimo->siguiente_dato=Elemento;
		Elemento->siguiente_dato=NULL;
		Ultimo=Elemento;
	}
	printf("El elemento ha sido registrado.\n");
	printf("\n");
}

void Repetir_Lista(Lista *List)
{
	int i, datos;

	printf("¿Cuántos datos desea ingresar?\n");
	scanf("%d", &datos);

	for(i=0; i<datos; i++)
	{
		Crear_Lista(List);
	}
}

void Lista_vacia(Lista *List)
{
	if(List!=NULL)
	{
		Repetir_Lista(List);
	}
	else 
	{
		printf("La lista esta llena.\n");;
	}
}

void Buscar_Elemento(Lista *List) 
{
	Lista* Nodo_Actual=(Lista *)malloc(sizeof(Lista)); //Permite recorrer la lista
	Nodo_Actual=Primero; //Establece que existe un pirmer valor en la lista.

	int Nodo_Encontrado=0, Busqueda_Nodo=0;

	printf("Ingrese el valor del elemento a buscar: \n");
	scanf("%d" ,&Busqueda_Nodo);

	if(Primero!=NULL) 
	{								//Se estable para que la condicion funcione
		while(Nodo_Actual!=NULL && Nodo_Encontrado!=1) 
		{	
			if(Nodo_Actual->Data==Busqueda_Nodo) //Evita que todos los datos sean desplegados.
			{
				printf("\n El elemento (%d) ha sido encontrado \n" ,Busqueda_Nodo);
				Nodo_Encontrado=1; //Actua como un dato booleano para saber si existe un elemento.
			}		
			Nodo_Actual=Nodo_Actual->siguiente_dato;
		}
		if(Nodo_Encontrado==0) //La condición evalua que el dato solicitado no existe.
		{
			printf ("El elemento no fue encontrado\n");
		}
	} 
	else 
	{
		printf("\n La cola no existe \n");
	}
}

void Modificar_elemento(Lista *List)
{
	Lista* Elemento_Actual=(Lista *)malloc(sizeof(Lista)); //Permite recorrer la lista.
	Elemento_Actual = Primero;  //Establece que existe un pirmer valor en la lista.

	int Elemento_Encontrado=0, Busqueda_Elemento=0;

	printf("Ingrese el valor del Nodo a Buscar para Modificar: \n");
	scanf("%d", &Elemento_Encontrado);

	if(Primero!=NULL) 
	{
		while(Elemento_Actual!=NULL && Elemento_Encontrado!=1) 
		{
			
			if(Elemento_Actual->Data==Busqueda_Elemento) 
			{
				printf("\n Nodo con el dato (%d) Encontrado\n" ,Busqueda_Elemento);
				printf("\n Ingrese el nuevo dato para este Nodo: " );
				scanf("%d" ,&Elemento_Actual->Data);
				printf("\n Nodo Modificado con exito \n");
				Elemento_Encontrado=1;
			}		
			Elemento_Actual=Elemento_Actual->siguiente_dato; //Actualiza el apuntador.
		}
		if(Elemento_Encontrado==0) //En caso de que el usuario se equivoque al introducir el dato.
		{
			printf("Nodo no Encontrado.\n");
		}
	} 
	else
	{
		printf("La lista no existe.\n");
	}
}

int main()
{
	Lista Elemento;

	printf("Inicia el programa.\n");
	Lista_vacia(&Elemento);
	printf("Realiza la acción en el programa.\n");
	Buscar_Elemento(&Elemento);
	Modificar_elemento(&Elemento);
	printf("Fin del programa.\n");

	return 0;
}
