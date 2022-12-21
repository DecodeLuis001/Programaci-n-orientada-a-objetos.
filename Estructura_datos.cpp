//Paso parametro por valor.

#include<cstdio>

typedef struct //Agrupa información relacionada a algo en especificico.
{
	float N_real;
	float N_imaginario;
}
COMPLEJO; //Nombre de la estructura.

void Imprime_Complejo(COMPLEJO S);
COMPLEJO Sumar_Complejos(COMPLEJO A, COMPLEJO B);

int main()
{
	COMPLEJO z, S, Resultado_Suma;

	z.N_real=3;
	z.N_imaginario=5;
	S.N_real=4;
	S.N_imaginario=7;

    printf("Los datos del primer cuadrante son: \n");
	Imprime_Complejo(z);
	printf("\n");
    printf("Los datos del segundo cuadrante son: \n");
	Imprime_Complejo(S);
	printf("\n");
    printf("Los datos de la suma de los cuandrantes son: \n");
	Resultado_Suma=Sumar_Complejos(z,S);
    printf("\n");
	Imprime_Complejo(Resultado_Suma);
    printf("\n");
	return 0;
}

void Imprime_Complejo(COMPLEJO S)
{
	printf("%2.2f%+2.2fj", S.N_real, S.N_imaginario);
}

COMPLEJO Sumar_Complejos(COMPLEJO A, COMPLEJO B)
{
	COMPLEJO resultado;
	resultado.N_real=A.N_real+B.N_real;
    resultado.N_imaginario=A.N_imaginario+B.N_imaginario;
	return(resultado);
}
