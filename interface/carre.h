#ifndef CARRE_H
#define CARRE_H

#include <iostream>
#include <sstream>
#include <string>

class carre{
public:
  int taille;
  int *cases;

  carre(int nb);
  std::string tostring();
  
};

#endif // CARRE_H
