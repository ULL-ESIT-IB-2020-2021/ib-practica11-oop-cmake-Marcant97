//archivo para probar el separador de números racionales.
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
#include <algorithm>

std::string prueba{};

std::vector<int> ParseString(std::string date){
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
int main(){
  std::cout<<"Introduce a/b"<<std::endl;
  std::cin>>prueba;
  std::vector<int>fecha_separada=ParseString(prueba);
  int a=fecha_separada[0];
  int b=fecha_separada[1];
  std::cout<<a<<std::endl;
  std::cout<<b<<std::endl;
}