#include <iostream>
class racional{
private:
  int numerador;
  int denominador;
public:  
  racional(); //Default constructor
  racional(int num, int den=1); //Constructor with parameters (denominador by defualt 1)
  void print();
  void suma_racionales(int& racional1, int racional2);
  void resta_racionales(racional racional1, racional racional2);
  void multiplicacion_racionales(racional racional1, racional racional2);
  void division_racionales(racional racional1, racional racional2);
};