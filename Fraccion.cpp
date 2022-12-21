#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<stdio.h>
 
using namespace std;
 
class Fraccion
{
    private:
        int numerador;
        int denominador;
    public:
        Fraccion(int n=0, int d=1): numerador(n), denominador(d)
        {
            if(d==0)
            {
                cout<<"Una fracción con denominador cero es una indeterminación\n";
                exit(0);
            }
        }
        Fraccion operator+(Fraccion objeto)
        {
            Fraccion temporal;

            temporal.numerador=(this->denominador*objeto.denominador);
            temporal.denominador=((this->numerador*objeto.denominador)+(this->denominador*objeto.numerador));
            

            return temporal;
        }
        Fraccion operator/(Fraccion objeto)
        {
            Fraccion temporal2;

            temporal2.numerador=(this->numerador*objeto.denominador);
            temporal2.denominador=(this->denominador*objeto.numerador);

            return temporal2;
        }
        void mostrar()
        {
            cout << denominador<<endl;
            cout << "--" <<endl;
            cout << numerador <<endl;
        }
};
 
int main()
{
    Fraccion resultado;
    Fraccion fraccion_1(3,4),fraccion_2(9,8);

    cout << "Se suman las fracciones: \n";
    cout << "El resultado de la suma es: \n";
    cout << endl;
    resultado=fraccion_1+fraccion_2;
    resultado.mostrar();

    cout << endl;
    cout << "Se dividen las fracciones: \n";
    cout << "El resultado de la división es: \n";
    cout << endl;
    resultado=fraccion_1/fraccion_2;
    resultado.mostrar();

    return 0;
}
