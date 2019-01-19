main: grille.o carre.o
	g++ -o main main.cpp interface/grille.o interface/carre.o

grille.o: interface/grille.cpp
	g++ -o interface/grille.o -c interface/grille.cpp

carre.o: interface/carre.cpp
	g++ -o interface/carre.o -c interface/carre.cpp
