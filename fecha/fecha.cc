#include <iostream>
int dia1;
int mes1;
int anyo1;

class ClaseFecha{
private:
  int m_dia;
  int m_mes;
  int m_anyo;

public:
  void establecerFecha(int dia, int mes, int anyo) {
		m_dia = dia;
    m_mes= mes;
    m_anyo = anyo;
  }
 
  void print(){
        std::cout << m_dia << '/' << m_mes << '/' << m_anyo;
  }

	int esBisiesto(int anyo){
		if ((anyo%4) == 0){
			std::cout<<anyo<<" es bisiesto"<<std::endl;
		}
		if ((anyo%4) != 0){
			std::cout<<anyo<<" no es bisiesto"<<std::endl;
		}
	}
};

int main(){
  ClaseFecha hoy;
	std::cout << "Dime el día, el mes y el año(dd mm aa):" << std::endl;
	std::cin >> dia1 >> mes1 >> anyo1;
  hoy.establecerFecha(dia1, mes1, anyo1); 
  hoy.print();
	std::cout<<" "<<std::endl;
	std::cout<<hoy.esBisiesto(anyo1)<<std::endl;
	std::cout<<" "<<std::endl;
  return 0;
}