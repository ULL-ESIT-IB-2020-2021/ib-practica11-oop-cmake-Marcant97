#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <fstream>
#include "racional.h"

std::vector<int> SepararCifra(std::string date){
    std::vector <int> parsed_date;
    std::replace(date.begin(), date.end(), '/', ' ');
    std::stringstream ss(date);
    int num, den;
    while(ss >> num && ss >> den ){
        
        parsed_date.emplace_back(num);
        parsed_date.emplace_back(den);

    }
    return parsed_date;
}
 
racional::racional(int num, int den){ //Constructor with parameters (denominador by defualt 1).
  numerador = num;
  denominador = den;
}
void racional::print(){
  std::cout<<"Tu racional es "<<numerador<<"/"<<denominador<<std::endl;
}
void racional::suma_racionales(racional &racional1, racional &racional2){
  int a=racional1.numerador; int c =racional2.numerador;
  int b= racional1.denominador; int d= racional2.denominador;
  numerador= (a*d)+(b*c);
  denominador= (b*d);
  reduce();
  std::cout<<"La suma es "<<numerador<<"/"<<denominador<<std::endl;
  } 
void racional::resta_racionales(racional &racional1, racional &racional2){
  int a=racional1.numerador; int c =racional2.numerador;
  int b= racional1.denominador; int d= racional2.denominador;
  numerador= (a*d)-(b*c);
  denominador= (b*d);
  reduce();
  std::cout<<"La resta es "<<numerador<<"/"<<denominador<<std::endl;
}
void racional::multiplicacion_racionales(racional &racional1, racional &racional2){
  int a=racional1.numerador; int c =racional2.numerador;
  int b= racional1.denominador; int d= racional2.denominador;
  numerador= (a*c);
  denominador= (b*d);
  reduce();
  std::cout<<"La multiplicación es: "<<numerador<<"/"<<denominador<<std::endl;
}
void racional::division_racionales(racional &racional1, racional &racional2){
  int a=racional1.numerador; int c =racional2.numerador;
  int b= racional1.denominador; int d= racional2.denominador;
  numerador= (a*d);
  denominador= (b*c);
  reduce();
  std::cout<<"La división es "<<numerador<<"/"<<denominador<<std::endl;
}
void racional::mayor(racional &racional1, racional &racional2){
  int a=racional1.numerador; int c =racional2.numerador;
  int b= racional1.denominador; int d= racional2.denominador;
  if (((a*d)>(c*b))){
    std::cout<<"racional1 es mayor que racional2"<<std::endl;
  }
}         
    
void racional::menor(racional &racional1, racional &racional2){
  int a=racional1.numerador; int c =racional2.numerador;
  int b= racional1.denominador; int d= racional2.denominador;
  if (((a*d)<(c*b))){
    std::cout<<"racional1 es menor que racional2"<<std::endl;
  }
}           
     
void racional::igual_igual(racional &racional1, racional &racional2){
  int a=racional1.numerador; int c =racional2.numerador;
  int b= racional1.denominador; int d= racional2.denominador;
  if (((a*d)==(c*b))){
    std::cout<<"racional1 == racional2"<<std::endl;
  }
}     
void racional::distinto(racional &racional1, racional &racional2){
  int a=racional1.numerador; int c =racional2.numerador;
  int b= racional1.denominador; int d= racional2.denominador;
  if (((a*d)!=(c*b))){
    std::cout<<"racional1 != racional2"<<std::endl;
  }
}    
int racional::mcd(int a, int b){
  while (b!=0){
    int t = b;
    b = a%b;
    a=t; 
  }
  return a;
}
void racional::reduce(){
  int m = mcd(numerador, denominador);
  numerador /= m;
  denominador /= m ;
}    
std::vector<std::string> racional::extraer_rac(std::string entrada){
  
  std::ifstream fichero(entrada.c_str());
  if( fichero.fail() ){
    std::cout << "No existe el fichero!" << std::endl;
    exit(1);
  }
  std::string linea;
  std::vector<std::string> acumulador{};
  while(fichero.eof()){
    getline(fichero, linea);
    acumulador.emplace_back(linea);
  }
  return acumulador;
}