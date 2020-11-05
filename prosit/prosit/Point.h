#pragma once
#ifndef DEF_POINT
#define DEF_POINT
#include <iostream>


class Point {

	public:
		Point();
		Point(double x, double y);

		double calcul(const Point& cible) const;

		void saisir();
		void affichage() const;

	private:
		int posX, posY;

};
	
#endif // !DEF_POINT