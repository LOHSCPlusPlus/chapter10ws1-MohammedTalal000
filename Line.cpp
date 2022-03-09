#include "Line.h"
#include <iostream>
using namespace std;
Line::Line(Point s, Point e) {
    start = s;
    end = e;
}

void Line::printLine() {
  cout << "Line start: ";
  start.print();
  cout << "Line end: "; 
  end.print();   
}

double Line::lineLength() {
  double length = start.calDistance(end);
  return length;
}