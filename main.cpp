#include <stdlib.h>
#include <iostream>
#include <string>
#include "grille.h"
#include "carre.h"

using namespace std;

int main(){

  system("clear");
  cout<<"!! sudoku !!" << endl;
  grille grille1(9);
  string visiongrille = grille1.tostring();
  cout<< visiongrille << endl;

//  carre carre1(9);
//  cout << carre1.tostring() << endl;

  return 0;
}
