//Seudocodigo de la creacion de una clase.

//Declarar las librerias.
#include<iostream>
#include<stdlib.h>

using namespace std;

class Rectangulo
{
    //En esta parte van los atributos de la clase.
    private:
        float high, base;
    public:
    Rectangulo(float, float); //este es el contructor
    void perimetro();
    void color();
};

//Constructor sirve para inicializar los atributos de una clase.
Rectangulo::Rectangulo(float h, float b)
{
    high=h;
    base=b;
}

void Rectangulo::perimetro()
{
    float dimensions;
    dimensions =(2*high)+(2*base);
    
    cout<<"El perimetro es: "<<dimensions<<endl;
}
//Instancear una clase es igual que crear un objeto.
int main()
{
    //llamada a la clase
    Rectangulo r1(15, 17); //Aquí se controlan las medidas del rectangulo.
    
    r1.perimetro();
    return 0;
}
