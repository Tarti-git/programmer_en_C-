#pragma once
#include <stdlib.h>
//Point dans un plan
class CPoint
{
private:
	//Données membres de la classe
	int nX;
	int nY;
	int *pnX;
public:
	//prototypes ou declarations
	//Assesseurs
	int getX();
	int getY();
	//Mutateurs
	void setX(int nbX);
	void setY(int nbY);
	//initialisation
	void init(int nbX, int nbY);
	//constructeur
	CPoint(int nbX, int nbY);
	//destructeur
	~CPoint();
};

