#include <iostream> 
#include <fstream>

int dia1;
int mes1;
int anyo1;
int numero;
std::string nombre;

class ClaseFecha{
private:
  int m_dia;
  int m_mes;
  int m_anyo;

public:

ClaseFecha(int dia, int mes, int anyo){  //Constructor por defecto.
  m_dia=dia;
  m_mes=mes;
  m_anyo=anyo;
}
  void establecerFecha(int dia, int mes, int anyo) {  //Método establecer fecha
	m_dia = dia;
    m_mes= mes;
    m_anyo = anyo;
  }
 
  void print(){  //Método imprimir fecha
    std::cout << m_dia << '/' << m_mes << '/' << m_anyo;
  }

  bool esBisiesto(){   //Método que determina si el año es bisiesto o no.
    if ((m_anyo%4) == 0){
	  std::cout<<m_anyo<<" es bisiesto"<<std::endl;
      return true;
	}
	if ((m_anyo%4) != 0){
	  std::cout<<m_anyo<<" no es bisiesto"<<std::endl;
      return false;
	}
  }


  void fechasPosteriores(int dias_posteriores){

    std::ofstream fichero("prueba1.txt");
    if( fichero.fail() ){
      std::cout << "No existe el fichero!" << std::endl;
      exit(1);
    }
    for (int i = 0; i < dias_posteriores; i++){
      if(((m_anyo%4)==0)&&(m_mes==2)){
        if (m_dia > 29){
          m_dia = 1;
          m_mes ++;
        }
        if (m_mes > 12){
          m_mes = 1;
          m_anyo++;
        }
        fichero << m_dia << "/" << m_mes << "/" << m_anyo <<std::endl;
        m_dia++;
      }  
      if(((m_mes)==1)||((m_mes)==3)||((m_mes)==5)||((m_mes)==7)||((m_mes)==8)||((m_mes)==10)||((m_mes)==12)){
        if (m_dia > 31){
          m_dia = 1;
          m_mes ++;
        }
        if (m_mes > 12){
          m_mes = 1;
          m_anyo++;
        }
        fichero << m_dia << "/" << m_mes << "/" << m_anyo <<std::endl;
        m_dia++;
      }
      if(((m_mes)==4)||((m_mes)==6)||((m_mes)==9)||((m_mes)==11)){
        if (m_dia > 30){
          m_dia = 1;
          m_mes ++;
        }
        if (m_mes > 12){
          m_mes = 1;
          m_anyo++;
        }
        fichero << m_dia << "/" << m_mes << "/" << m_anyo <<std::endl;
        m_dia++;
      }
    }
    fichero.close();
  }
};

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
  std::cout<<"Ya puedes ecnontrar las "<<numero <<" fechas posteriores, en el documento prueba1.txt que se ha generado."<<std::endl;
  return 0;
}