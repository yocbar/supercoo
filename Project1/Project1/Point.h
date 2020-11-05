#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point
{
public:
	// Constructeurs
	Point();
	Point(double x, double y);

	//Accesseurs et mutateurs
	void setX(double x);
	void setY(double y);
	double getX() const;
	double getY() const;

	// Autres méthodes
	double distance(const Point& P) const;
	Point milieu(const Point& P) const;

	void saisir();
	void afficher() const;

private:
	double x, y;
};

#endif