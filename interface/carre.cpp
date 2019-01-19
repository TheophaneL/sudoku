#include "carre.h"

carre::carre(int taille){
  this->taille = taille;
  this->cases = new int[taille];
  for(int i =1; i<= taille;++i){
      this->cases[i-1]=i;
    }
}

std::string carre::tostring(){
  std::string stringCase;
  for(int i=0; i< this->taille;++i){
      //stringCase+= std::to_string(this->cases[i]);
      std::ostringstream number;
      number << this->cases[i];
      stringCase += number.str();
      if( (i+1)%3==0 && i!=0) stringCase+="\n";
      else stringCase+="|";
    }

  return stringCase;
}


