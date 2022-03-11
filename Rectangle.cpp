#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle (Line l, Line h) {
  length = l;
  height = h;
}

void Rectangle::printRect() {
  cout << "Rectangle length: " << endl;
  length.printLine();
  cout << "Rectangle Height: " << endl;
  height.printLine();
}

double Rectangle::calcArea() {
  double lenDis = length.lineLength();
  double lenheight = height.lineLength();
  double area = lenDis * lenheight;
  return area;
}