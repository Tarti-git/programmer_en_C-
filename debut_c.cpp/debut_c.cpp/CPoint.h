#pragma once
//Point dans un plan
class CPoint
{
private:
	//Donn�es membres de la classe
	int nX;
	int nY;
public:
	//prototypes ou declarations
	//Assesseurs
	int getX();
	int getY();
	//Mutateurs
	void setX(int nbX);
	void setY(int nbY);
};

