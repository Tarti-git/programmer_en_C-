
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "CPoint.h"

using namespace std;

//POO C++
// Class (Données & méthodes)

//Exemple de programme en C ++

int main()
{
	/*int i = 0;
	float x = 0.0;
	float racx = 0.0;
	const int NFOIS = 5;

	cout << "Je vais vous calculer" << NFOIS << "racines carrees\n";
	for (i = 0; i < NFOIS; i++) {
		cout << "Donnez un nombre : ";
		cin >> x;
		if (x < 0.0)
			cout << "Le nombre" << x << "ne possede pas de racine carree\n";
		else {
			racx = sqrtf(x);
			cout << "Le nombre" << x << "a pour racine carree" << racx << endl;
		}
	}
	cout << "Travail Termine" << endl;*/
	CPoint ptMonPoint(3, 5);

	//ptMonPoint.setX(3);
	//ptMonPoint.setY(5);
	//ptMonPoint.init(3, 5);
	int resX = ptMonPoint.getX();
	int resY = ptMonPoint.getY();
	cout << "X = " << resX << "   Y = " << resY << endl;
	system("pause");
	return 0;
}
