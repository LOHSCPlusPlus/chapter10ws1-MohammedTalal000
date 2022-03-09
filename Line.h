#include "Point.h"

class Line {
  private:
    Point start;
    Point end;

  public:
    double lineLength();
    void printLine();
    Line(Point s, Point e);
};