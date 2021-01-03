#include <iostream>
#include "racional.h"
class racional{
private:
  int numerador;
  int denominador;
public:  
  racional::racional(); //Default constructor
  racional::racional(int num, int den=1){ //Constructor with parameters (denominador by defualt 1).
    numerador = num;
    denominador = den;
  }
  void racional::print(){
    std::cout<<"Tu racional es "<<numerador<<"/"<<denominador<<std::endl;
  }
  void racional::suma_racionales(racional racional1, racional racional2){
    int a=racional1.numerador; int c =racional2.numerador;
    int b= racional1.denominador; int d= racional2.denominador;
    numerador= (a*d)+(b*c);
    denominador= (b*d);
    std::cout<<numerador<<"/"<<denominador<<std::endl;
  } 
  void racional::resta_racionales(racional racional1, racional racional2){
    int a=racional1.numerador; int c =racional2.numerador;
    int b= racional1.denominador; int d= racional2.denominador;
    numerador= (a*d)-(b*c);
    denominador= (b*d);
    std::cout<<numerador<<"/"<<denominador<<std::endl;
  }
  void racional::multiplicacion_racionales(racional racional1, racional racional2){
    int a=racional1.numerador; int c =racional2.numerador;
    int b= racional1.denominador; int d= racional2.denominador;
    numerador= (a*c);
    denominador= (b*d);
    std::cout<<numerador<<"/"<<denominador<<std::endl;
  }
    void racional::division_racionales(racional racional1, racional racional2){
    int a=racional1.numerador; int c =racional2.numerador;
    int b= racional1.denominador; int d= racional2.denominador;
    numerador= (a*d);
    denominador= (b*c);
    std::cout<<numerador<<"/"<<denominador<<std::endl;
  }
    
};