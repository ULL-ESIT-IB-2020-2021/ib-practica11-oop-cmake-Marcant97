#include <iostream>
#include "fecha.h"

int dia1;
int mes1;
int anyo1;
int numero;
std::string nombre;

int main(){
  ClaseFecha hoy(0,0,0);
  std::cout << "Dime el día, el mes y el año(dd(intro) mm(intro) aa(intro)):" << std::endl;
  std::cin >> dia1;
  std::cin >> mes1;
  std::cin >> anyo1;
  hoy.establecerFecha(dia1,mes1,anyo1);
  hoy.print();
  std::cout<<" "<<std::endl;
  std::cout<<hoy.esBisiesto()<<std::endl;
  std::cout<<" "<<std::endl;
  std::cout<<"Dime el número de días posteriores:"<<std::endl;
  std::cin>>numero;
  hoy.fechasPosteriores(numero);
  std::cout<<"Ya puedes encontrar las "<<numero <<" fechas posteriores, en el documento prueba1.txt que se ha generado."<<std::endl;
  return 0;
}