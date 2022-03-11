#include "Line.h"

class Rectangle {
  private:
    Line length;
    Line height;
  public:
    void printRect();
    double calcArea();
    Rectangle(Line l, Line h);
};