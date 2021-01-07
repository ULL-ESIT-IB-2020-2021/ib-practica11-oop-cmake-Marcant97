#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>
#include "tools.h"

void Usage(int argc, char *argv[]) {
  if(argc == 2 && strcmp(argv[1], "--help") == 0){
    std::cout <<kHelpText<< " Modo de uso: "<<argv[0]<<" fichero_entrada fichero_salida"<<std::endl;
  }
  if(argc != 2){
    std::cout << "Error en el numero de argumentos, pruebe --help para mayor información"<<std::endl;
    exit(EXIT_SUCCESS);
    }
}
