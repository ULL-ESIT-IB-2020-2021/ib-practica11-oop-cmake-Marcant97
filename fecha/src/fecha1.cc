#include <iostream> 
#include <fstream>
#include "fecha.h"



ClaseFecha::ClaseFecha(int dia, int mes, int anyo){  //Constructor por defecto.
  m_dia=dia;
  m_mes=mes;
  m_anyo=anyo;
}
  void ClaseFecha::establecerFecha(int dia, int mes, int anyo) {  //Método establecer fecha
	  m_dia = dia;
    m_mes= mes;
    m_anyo = anyo;
  }
 
  void ClaseFecha::print(){  //Método imprimir fecha
    std::cout << m_dia << '/' << m_mes << '/' << m_anyo;
  }

  bool ClaseFecha::esBisiesto(){   //Método que determina si el año es bisiesto o no.
    if ((m_anyo%4) == 0){
	  std::cout<<m_anyo<<" es bisiesto"<<std::endl;
      return true;
	}
	if ((m_anyo%4) != 0){
	  std::cout<<m_anyo<<" no es bisiesto"<<std::endl;
      return false;
	}
  }


  void ClaseFecha::fechasPosteriores(int dias_posteriores){

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

