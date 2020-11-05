#include "Point.h"
#include <math.h>
#include 

using namespace std;

Point::Point() : posX(0), posY(0){}
Point::Point(double x,double y ) : x(x),y(y){}

double Point::calcul(const Point &P) const {
    double dx = this->x - P.x;
    double dy = this->y - P.y;
    return sqrt(dx * dx + dy * dy);
}
void Point::saisir() {
    cout << " x = "; cin >> this->posX;
    cout << " y = "; cin >> this->posY;
    cout << endl;
}
void Point::affichage() {
    cout << " x = " << this->posX << endl;
    cout << " y = " << this->posY << endl;
}