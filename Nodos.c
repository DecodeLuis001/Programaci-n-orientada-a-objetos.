#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

struct Nodo
{
    int data;
    Nodo *right;
    Nodo *left;
    Nodo *Padre;
};

//Prototipo de funciones.
Nodo *CrearNodo(int, Nodo *);
void InsertarNodo(Nodo *&, int, Nodo *); //Referencia para el arbol, Tipo de dato.
void MostrarArbol(Nodo *, int);  //Parametros: Arbol, Contador
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void UltimoNodoDerecho(Nodo *);
void UltimoNodoIzquierdo(Nodo *);

Nodo *arbol = NULL; //Se inicializa el arbol.

int main()
{
    int i, x, dato, contador = 0;   //X: el nodo que el usuario va ingresar.
    float Resultado;

    cout<<"Numero de nodos del arbol: ";
    cin>>dato;

    for(i=0; i<dato; i++)
    {
        cout << " Numero del nodo " << i+1 << ": ";
        cin >> x;
        InsertarNodo(arbol, x, NULL);
    }
    
    cout<<"\n";
    cout<<"El arbol ingresado es: \n\n";
    MostrarArbol(arbol, contador);
    cout<<"\n";

    if(dato%2==0)
    {
        Resultado = (dato/2) - 1;
        cout<<"La cantidad de ultimos nodos es: "<<Resultado<<"\n";
    }
    else if(dato == 0)
    {
        cout<<"No hay datos ingresados en el arbol\n";
    }
    else if(dato == 1)
    {   
        cout<<"Solo existe un nodo en el arbo\n";
    }
    else if(dato == 2)
    {
        cout<<"La cantidad de ultimos nodos es: 1\n";
    }
    else
    {
        Resultado = ceil(dato/2);
        cout<<"La cantidad de ultimos nodos es: "<<Resultado<<"\n";
    }

    cout<<"\n";
    cout<<"La ultimos nodos del arbol son: ";
    UltimoNodoDerecho(arbol);
    UltimoNodoIzquierdo(arbol);
    cout<<"\n";

    cout<<"Los nodos en pre orden son: ";
    preOrden(arbol);
    cout<<"\n";
    cout<<"Los nodos en orden son: ";
    inOrden(arbol);
    cout<<"\n";
    cout<<"Los nodos en post orden son: ";
    postOrden(arbol);
    cout<<"\n";

    return 0;
}

//Funciones para crear el arbol.
Nodo *CrearNodo(int n, Nodo *Padre)
{
    Nodo *New = new Nodo();

    New -> data = n;
    New -> right = NULL;
    New -> left = NULL;
    New -> Padre = Padre;

    return New;
}

void InsertarNodo(Nodo *&arbol, int n, Nodo *Padre)
{
    if(arbol == NULL)
    {
        Nodo *New = CrearNodo(n, Padre);
        arbol = New ; 
    }
    else
    {
        int Raiz = arbol -> data; //Se obtiene el valor de la raiz.
        if(n < Raiz)
        {
            InsertarNodo(arbol -> left, n, Padre);
        }
        else
        {
            InsertarNodo(arbol -> right, n, Padre);
        }
    }
}

void MostrarArbol(Nodo *arbol, int contador)
{
    int i;

    if(arbol == NULL)
    {
        return;
    }
    else
    {
        //Mostrar comenzando desde la derecha
        MostrarArbol(arbol -> right, contador+1);
        for(i=0; i<contador; i++)
        {
            cout<<"\t";   //Espacio entre cada nodo.
        }
        cout<<arbol->data<<endl;
        //Mostar comenzando desde la izquierda.
        MostrarArbol(arbol -> left, contador+1);
    }
}

void UltimoNodoDerecho(Nodo *arbol)
{
    if(arbol == NULL)
    {
        return;
    }
    else
    {
        if(arbol->right == NULL)
        {
            UltimoNodoDerecho(arbol->right);
            cout<<arbol->data<<" ";
        }
        else if(arbol->left != NULL)
        {
            UltimoNodoDerecho(arbol->left);
        }
        else
        {
            UltimoNodoDerecho(arbol->Padre);
        }
    }
}

void UltimoNodoIzquierdo(Nodo *arbol)
{
    if(arbol == NULL)
    {
        return;
    }
    else
    {
        if(arbol->left == NULL)
        {
            UltimoNodoIzquierdo(arbol->left);
            cout<<arbol->data<<" ";
        }
        if(arbol->right != NULL)
        {
            UltimoNodoIzquierdo(arbol->right);
        }
    }
}

void preOrden(Nodo *arbol)
{
    if(arbol == NULL)
    {
        return;
    }
    else
    {
        cout<<arbol->data<<" ";
        preOrden(arbol -> left);
        preOrden(arbol -> right);
    }
}

void inOrden(Nodo *arbol)
{
    if(arbol == NULL)
    {
        return;
    }
    else
    {
        inOrden(arbol -> right);
        cout<<arbol->data<<" ";
        inOrden(arbol -> left);
    }
}

void postOrden(Nodo *arbol)
{
    if(arbol == NULL)
    {
        return;
    }
    else
    {
        postOrden(arbol -> right);
        postOrden(arbol -> left);
        cout<<arbol->data<<" ";
    }
}
