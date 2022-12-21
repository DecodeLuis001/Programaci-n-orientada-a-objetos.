//Asignación dinámica de memoria.

#include<cstdio>
//#include<cstdlib>

float Promedio(int *dato, unsigned int datos);

int main()
{
	unsigned int datos;
	int i, *pi;

	printf("Datos a ingresar: \n");
	scanf("%i", &datos);

	//pi=(int *)malloc(datos*sizeof(int));
	//Requiere especificar el tipo de dato.
	pi=new int[datos]; //Genera tantos enteros como datos se ingresen.

	for(i=0; i<datos; i++)
	{
		printf("dato[%i]= \n", i);
		scanf("%i",pi+i);
	}
	printf("\n");
	printf("Los datos ingresados son: \n");
	for(i=0; i<datos; i++)
	{
		printf("dato[%i]=%i\n", i, *(pi+i));
	}

	printf("El promedio generado es: %.2f\n" ,Promedio(pi, datos));
	printf("\n");

	//free(pi);
	//dado que pi esun conjunto de datos.
	delete []pi;

	return 0;
}

float Promedio(int *dato, unsigned int datos)
{
	int i;
	float suma=0, Promedio;

	for(i=0; i<datos; i++)
	{
		suma+=*(dato+i);
	}
	Promedio=suma/datos;

	return(Promedio);

}