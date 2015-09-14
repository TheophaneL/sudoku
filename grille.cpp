#include "grille.h"

grille::grille(int taille){
  this->taille = taille;
  this->lagrille = new std::vector<carre>();
  for(int i=0; i< taille; ++i){
      this->lagrille->push_back(carre(9));
    }
}

std::string grille::tostring(){
  std::string stringGrille;

  for(int groupe = 0; groupe < 3; ++groupe){
      for(int ligne = 0; ligne < 3; ++ligne){
          for(int j = 0; j < 3; ++j){
              carre lacase = this->lagrille->at(j+(groupe*3));
              for(int k = 0; k < 3; ++k){
                  std::ostringstream number;
                  number << lacase.cases[ (k+(ligne*3)) ];
                  stringGrille += number.str();

                  if(k==2 && j<2){
                      stringGrille += "#";
                    }
                  else if(k==2 && j==2){
                      stringGrille += "\n";
                      if(ligne == 2 && groupe<2){
                          for(int x = 0; x < 17;++x) stringGrille += "#";
                          stringGrille += "\n";
                        }
                    }
                  else{
                      stringGrille += "|";
                    }
                }
            }
        }
    }
  return stringGrille;
}
