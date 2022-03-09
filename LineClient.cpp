#include "Line.h"
#include <iostream>
using namespace std;

int main() {

  Point a(3,5);
  Point b(4,1);
  Line one(a,b);

  one.printLine();
  cout << "Length: " << one.lineLength() << endl;
  
    return 0;
}
