#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
#include <algorithm>
#include "racional.h"
// #include "tools.h"

int main(){
  
  // Usage(argc, argv);
  std::string fichero_entrada{};
  std::cin>>fichero_entrada;
  // std::string fichero_salida{argv[2]};
  racional result(1,1);
  std::vector<std::string> vec{};
  std::vector<int> vec2{};
  vec = result.extraer_rac(fichero_entrada);
  for (unsigned int i=0;i<vec.size();i++){
    vec2 = SepararCifra(vec[i]);
  }
  
  int num1={vec2[0]};
  int den1={vec2[1]};
  int num2={vec2[2]};
  int den2={vec2[3]};
  racional rac1(num1,den1);
  racional rac2(num2,den2);
  


  rac1.print();
  rac2.print();
  result.suma_racionales(rac1, rac2);
  result.resta_racionales(rac1,rac2);
  result.multiplicacion_racionales(rac1, rac2);
  result.division_racionales(rac1, rac2);
  result.mayor(rac1, rac2);
  // result.mayor_igual(rac1, rac2);
  result.menor(rac1, rac2);
  // result.menor_igual(rac1, rac2);
  result.igual_igual(rac1, rac2);
  result.distinto(rac1, rac2);
}