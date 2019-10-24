#include "CPoint.h"

int CPoint::getX()
{
	return nX;
}

int CPoint::getY()
{
	return nY;
}

void CPoint::setX(int nbX)
{
	nX = nbX;
	//this->nX
}

void CPoint::setY(int nbY)
{
	nY = nbY;
	//this->nY
}

void CPoint::init(int nbX, int nbY)
{
	setX(nbX);
	setY(nbY);
}

CPoint::CPoint(int nbX, int nbY)
{
	nX = nbX;
	nY = nbY;
	//pnX = (int *)malloc(sizeof(int));
	pnX = new int;
	pnX = 0;
}

CPoint::~CPoint()
{
	//free(pnX);
	delete(pnX);
}
