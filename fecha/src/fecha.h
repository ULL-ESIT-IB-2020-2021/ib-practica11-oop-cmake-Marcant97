#include <iostream>

class ClaseFecha{
private:
  int m_dia;
  int m_mes;
  int m_anyo;

public:

ClaseFecha(int dia, int mes, int anyo); //Constructor por defecto.

  void establecerFecha(int dia, int mes, int anyo);
  void print();
  bool esBisiesto();
  void fechasPosteriores(int dias_posteriores);
};

