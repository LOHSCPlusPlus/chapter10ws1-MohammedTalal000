#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {

  Point a(3,5);
  Point b(6,2);
  Point c(1.5,5.3);
  Point d(9,0);

  Line one(a,b);
  Line two(c,d);
  
  Rectangle rect1(one,two);
  rect1.printRect();
  cout << "Rectangle area: " << rect1.calcArea();
  return 0;
}
