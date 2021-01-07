#include <iostream>
#include <vector>

std::vector<int> SepararCifra(std::string date);

class racional{
private:
  int numerador;
  int denominador;
  void reduce();   //Función reducir o simplificar
  int mcd(int a, int b);  //Función máximo común divisor
public:  
  racional(int num=1, int den=1); //Constructor with parameters (denominador by defualt 1)
  void print();
  void suma_racionales(racional &racional1, racional &racional2);             //a+b
  void resta_racionales(racional &racional1, racional &racional2);            //a-b
  void multiplicacion_racionales(racional &racional1, racional &racional2);   //a*b
  void division_racionales(racional &racional1, racional &racional2);         //a/b
  void mayor(racional &racional1, racional &racional2);            // a>b
  // void mayor_igual(racional &racional1, racional &racional2);      // a>=b
  void menor(racional &racional1, racional &racional2);            // a<b
  // void menor_igual(racional &racional1, racional &racional2);      // a<=b
  void igual_igual(racional &racional1, racional &racional2);      // a==b
  void distinto(racional &racional1, racional &racional2);         // a!=b
  std::vector<std::string> extraer_rac(std::string entrada);
};