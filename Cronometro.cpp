#include<iostream>

using namespace std;

class Tiempo 
{
	private:
   		int hora;
   		int minuto;
  	public:
   		Tiempo(int h=0, int m=0) : hora(h), minuto(m) {}
   		void Mostrar();
   		Tiempo operator+(Tiempo h);
};

Tiempo Tiempo::operator+(Tiempo h) 
{
   Tiempo temp;
   
   temp.minuto = minuto + h.minuto;
   temp.hora   = hora   + h.hora;
   
   if(temp.minuto >= 60) 
   {
      temp.minuto -= 60;
      temp.hora++;
   }
   return temp;
}

void Tiempo::Mostrar() 
{
   cout << hora << ":" << minuto << endl;
}

int main() 
{
   int i,j, horas, minutos;
   char eleccion='S'; 

   Tiempo T, Ahora(14,45), T1(00,00), T2(00,00);
   Tiempo T3(00,05), T4(00,10), T5(00,15), T6(00,20), T7(00,25), T8(00,30), T9(00,35);
   Tiempo T10(00,40), T11(00,45), T12(00,50), T13(00,55), T14(01,00);

   cout<<"Este programa fue elaborado el dia 12/10/2019\n";
   cout<<"La hora actual es: \n";
   T=Ahora;
   T.Mostrar();

   cout<<"¿Desee incrementar la hora actual: S=Si, N=No \n";
   scanf("%c", &eleccion);
   if(eleccion=='S')
   {
      cout<<"¿Cuántas horas desea incrementar?: \n";
      scanf("%d", &horas);
      cout<<"¿Cuántos minutos desea incrementar?: \n";
      cout<<"Solo multiplos de 5: \n";
      scanf("%d", &minutos);
      if(horas<0 || minutos<0)
      {
         cout<< "No se puede calcular un tiempo negativo\n";
      }

      for(i=0; i<horas; i++)
      {
         T1 = Ahora + horas;
      }
      cout<<"La hora incrementada es: \n";
      T1.Mostrar();
      cout<<"La hora con minutos incrementados es: \n";
      {
         if(minutos==5)
         {
            T2=T1+T3;
            T2.Mostrar();
         }  
         if(minutos==10)
         {
            T2=T1+T4;
            T2.Mostrar();
         }
         if(minutos==15)
         {
            T2=T1+T5;
            T2.Mostrar();
         }
         if(minutos==20)
         {
            T2=T1+T6;
            T2.Mostrar();
         }  
         if(minutos==25)
         {
            T2=T1+T7;
            T2.Mostrar();
         }
         if(minutos==30)
         {
            T2=T1+T8;
            T2.Mostrar();
         }
         if(minutos==35)
         {
            T2=T1+T9;
            T2.Mostrar();
         }  
         if(minutos==40)
         {
            T2=T1+T10;
            T2.Mostrar();
         }
         if(minutos==45)
         {
            T2=T1+T11;
            T2.Mostrar();
         }
         if(minutos==50)
         {
            T2=T1+T12;
            T2.Mostrar();
         }  
         if(minutos==55)
         {
            T2=T1+T13;
            T2.Mostrar();
         }
         if(minutos==60)
         {
            T2=T1+T14;
            T2.Mostrar();
         }
      }
   }
   else
   {
      cout<<"La hora actual es: ";
      T=Ahora;
      T.Mostrar();
   }
   
   return 0;
}
