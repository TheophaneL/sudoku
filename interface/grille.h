#ifndef GRILLE_H
#define GRILLE_H
#include <string>
#include <vector>
#include "carre.h"

class grille{
private:
  int taille;
  std::vector<carre> *lagrille;

public:
  grille(int taille);

  std::string tostring();

};

#endif // GRILLE_H
