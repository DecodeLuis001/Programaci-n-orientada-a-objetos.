/*
//El constructor: método especial de la clase, es un método predefinido de cualquier clase.
//Caracteristicas:
1.) Tiene el mismo nombre de la clase a la que pertenece.
2.) No puede retornar un valor.
3.) En la definición no se puede espeficificar que no retorna un valor, ni siquiera (void).

Dependiendo de los paramteros que recibe, podemos clasificarlos: 
1. Constructor con default
2. Constructor con parámetros.
3. Constructor con parámetros por default.

Se pueden tener tantos constructores como el programador considere necesarios.
Esto es debido al concepto de polimorfismo.

Un constructor se llama automaticamente cuando se crea un objeto de una clase en particular.

Su principal uso, es inicializar los valores de los atributos de manera automatica.
Principalmente asignar la memoria dinámica.

El destructor es un método especial que se llama automaticamente cuando se elimina un objeto de una clase particular.
El nombre del destructor es el mismo que el de clase a la que pertenece anteponiendo el caracter de tilde (). no puede
regresar ningún valor y tampoco puede recibir parámetros de entrada.

Su principal funcion es la de liberar la memoria dinámica utilizada, cerrar archivos y/o conexiones.
*/

#include<iostream>

using namespace std;

class Matriz
{
	private:
		unsigned int M; //Especifican la dimensión de la matriz.
		unsigned int N;
		float *Data; //hacer la matriz de forma dinámica.
	public:
		Matriz() //Aqui inicializa el constructor. (Por default (Sin parámetros.))
		{
			M=0;
			N=0;
			Data=NULL;

			cout<<"Se ha ejecutado el constructor por default."<<endl;
		}	//Los 2 son valores por default, es decir si no se inicializan se toman estos valores.
		Matriz(unsigned int M_Entrada, unsigned int N_Entrada=2) //Constructor con parametros.
		{
			if(M>2) //Aqui iba un 5.
			{
				M_Entrada=2;
			}
			if(N>2)
			{
				N_Entrada=2;
			}
			M=M_Entrada;
			N=N_Entrada;
			//Reserva la memoria necesaria para implementar la matriz.
			//Se definen las dimensiones.
			Data=new float[M*N];

			cout<<"Se ha ejecutado el constructor con parámetros"<<endl;
		}
		void Capturar_Matriz()
		{
			int i,j;

			if(Data==NULL)
			{
				cout<<"No hay elementos en la matriz."<<endl;
			}
			else
			{
				for(i=0; i<M; i++)
				{
					for(j=0; j<N; j++)
					{
						cout<<"Ingrese el valor a capturar: ["<<i<<"]["<<j<<"]= ";
						cin>>Data[i*N+j]; //Para el mapeo de la matriz, transformar la matriz a vector.
					}
				}
			}
		}
		void Imprimir_Matriz()
		{
			int i,j;

			if(Data==NULL)
			{
				cout<<"No hay elementos en la matriz."<<endl;
			}
			else
			{
				for(i=0; i<M; i++)
				{
					cout<<endl;
					for(j=0; j<N; j++)
					{
						cout<<Data[i*N+j]<<"][";
					}
				}
			}
		}
		~Matriz()
		{
			delete[] Data;
			cout<<"\n";
			cout<<"Se ha ejecutado el destructor.\n";
		}
		void Suma(Matriz *B)
		{
			int i,j;

			if(M!=B->M)
			{
				cout<<"No se puede realizar la suma intentelo de nuevo.\n";
				cout<<"La matriz no poseé las mismas dimensiones.\n";
			}
			if(N!=B->N)
			{
				cout<<"No se puede realizar la suma intentelo de nuevo.\n";
				cout<<"La matriz no poseé las mismas dimensiones.\n";
			}
			for(i=0; i<M; i++)
			{
				for(j=0; j<N; j++)
				{
					Data[i*N+j]+=B->Data[i*N+j];
				}
			}
		}
		void Producto(Matriz *B)
		{
			int i,j, k;

			if(N!=B->M)
			{
				cout<<"No se puede realizar la multiplicación intentelo de nuevo.\n";
			}
			else
			{
				//Matriz R(M, B->N);
				Matriz R(2, 2);
				for(i=0; i<M; i++)
				{
					for(j=0; j<B->N; j++)
					{
						R.Data[i*R.N+j]=0;

						for(k=0; k<N; k++)
						{
							R.Data[i*R.N+j]+=((Data[i*N+k]*B->Data[k*B->N+j])/2);
						}
					}
				}
				cout<<"La matriz producto es: \n";
				R.Imprimir_Matriz();
			}
		}
}; 

int main()
{
	Matriz A(2, 2);
	//Si no esta el segundo o primer dato para hacer la dimensión de la matriz, se toma el valor por deafult.
	Matriz B(2, 2); //Dimensiones de la matriz.
	
	cout<<"Inicio del programa principal."<<endl;
	cout<<"Ingrese los datos para la primer matriz.\n";
	A.Capturar_Matriz();
	A.Imprimir_Matriz();
	cout<<endl;
	cout<<"Ingrese los datos para la segunda matriz.\n";
	B.Capturar_Matriz();
	B.Imprimir_Matriz();
	cout<<"\n";
	cout<<"El resultado  de la suma es: "<<endl;
	A.Suma(&B);
	A.Imprimir_Matriz();
	cout<<endl;	
	A.Producto(&B);
	cout<<endl;	
	return 0;
}